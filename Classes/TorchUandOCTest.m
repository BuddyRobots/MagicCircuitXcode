//
//  TorchUandOCTest.m
//  TorchUandOCTest
//
//  Created by 王茜 on 9/5/16.
//  Copyright © 2016 buddyrobots. All rights reserved.
//

#import "TorchUandOCTest.h"

#define KBYTES_CLEAN_UP 10000 
#define LUAT_STACK_INDEX_FLOAT_TENSORS 4
#define LUA_GCCOLLECT		2
#define LUA_GCCOUNT		3

@implementation TorchUandOCTest


-(id)init
{
    if(self=[super init])
    {
        
    }
    return self;
}



- (CGFloat)perfClassificationOnValuesv1:(float)v1 v2:(float)v2
{
    
    if (self.t == nil) {
        self.t = [Torch new];
        [self.t initialize];
        [self.t runMain:@"main" inFolder:@"xor_lua"];
        
    }

    XORClassifyObject *classificationObj = [XORClassifyObject new];
    classificationObj.x = v1;
    classificationObj.y = v2;
    
    float value = [self classifyExample:classificationObj inState:[self.t getLuaState]];
     NSLog(@"perfClassificationOnValuesv1==value==%f",value);
    return  value;
}


- (CGFloat)classifyExample:(XORClassifyObject *)obj inState:(lua_State *)L
{
    NSInteger garbage_size_kbytes = lua_gc(L, LUA_GCCOUNT, LUAT_STACK_INDEX_FLOAT_TENSORS);
    
    if (garbage_size_kbytes >= KBYTES_CLEAN_UP)
    {
        NSLog(@"LUA -> Cleaning Up Garbage");
        lua_gc(L, LUA_GCCOLLECT, LUAT_STACK_INDEX_FLOAT_TENSORS);
    }
    
    THFloatStorage *classification_storage = THFloatStorage_newWithSize1(2);
    THFloatTensor *classification = THFloatTensor_newWithStorage1d(classification_storage, 1, 2, 1);
    THTensor_fastSet1d(classification, 0, obj.x);
    THTensor_fastSet1d(classification, 1, obj.y);
    lua_getglobal(L,"classifyExample");
    luaT_pushudata(L, classification, "torch.FloatTensor");
    
    //p_call -- args, results
    int res = lua_pcall(L, 1, 1, 0);
    if (res != 0)
    {
        NSLog(@"error running function `f': %s",lua_tostring(L, -1));
    }
    
    if (!lua_isnumber(L, -1))
    {
        NSLog(@"function `f' must return a number");
    }
    CGFloat returnValue = lua_tonumber(L, -1);
    lua_pop(L, 1);  /* pop returned value */
    NSLog(@"classifyExample==returnValue==%f",returnValue);
    return returnValue;
}

-(void)InitLuaContext
{
    if (self.t == nil) {
        self.t = [Torch new];
        [self.t initialize];
        [self.t runMain:@"main_2" inFolder:@"xor_lua"];
        
    }

     NSLog(@"InitLuaContext=====");
}

-(void)testCallLuaMethod
{
    NSLog(@"testCallLuaMethod=====A");
    lua_State * L = [self.t getLuaState];
    lua_getglobal(L,"testLua");
    //luaT_pushudata(L, "aa","bb");
     NSLog(@"testCallLuaMethod=====B");
    //p_call -- args, results
    int res = lua_pcall(L, 0, 0, 0);
    if (res != 0)
    {
        NSLog(@"error running function `f': %s",lua_tostring(L, -1));
    }
    NSLog(@"testCallLuaMethod=====C");
    
}

@end

TorchUandOCTest *torchUandOCTest=NULL;


#if defined (__cplusplus)
extern "C"
{
#endif
    //这个函数给unity里边调用
     void testLuaWithPara(float array[])
    {
       //  NSLog(@"testMethodWithTwoParaAndReturn_a==%f\n b==%f",a,b);
        
        if(torchUandOCTest==NULL)
        {
            torchUandOCTest=[[TorchUandOCTest alloc] init];
        }
        
       [torchUandOCTest  perfClassificationOnValuesv1:array];
        
       // NSLog(@"testLuaWithPara==%f\n ret2==%f",ret,[torchUandOCTest  perfClassificationOnValuesv1:a v2:b]);
        
        //return ret;

    }
    
    
#if defined (__cplusplus)
}
#endif

