#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

int testLuaWithArr(double array[], int len)
{
    Torch *t = [Torch new];
    [t initialize];
    [t runMain:@"classification" inFolder:@"xor_lua"]; //main_2是lua文件名   xor_lua 是lua文件所在文件夹名称
    [t loadFileWithName:@"classifyCard.mdl" inResourceFolder:@"xor_lua" andLoadMethodName:@"loadModel"];
    
    lua_State * L = [t getLuaState];
    
    lua_getglobal(L, "predictClass"); //get lua function name
    lua_newtable(L);                  //create a new table
    lua_pushnumber(L, -1);            //push -1 into stack
    lua_rawseti(L, -2, 0);            //set array[0] by -1

    for(int i = 0; i < len; i++)
    {
        lua_pushnumber(L, array[i]);   //将数组的数据入栈
        lua_rawseti(L, -2, i + 1);        //将刚刚入栈的数据设置为数组的第n+1个数据，同时这个数据会自动从栈里pop
    }
    
    //call function, 1 parameter, 1 return value
    int res = lua_pcall(L, 1, 1, 0);
    if (res != 0)
    {
        NSLog(@"error running function `f': %s",lua_tostring(L, -1));
    }
    if (!lua_isnumber(L, -1))
    {
        NSLog(@"function `f' must return a number");
    }
    int result = lua_tonumber(L, -1);//get result
    lua_pop(L, 1);

    return result;
}

@end

