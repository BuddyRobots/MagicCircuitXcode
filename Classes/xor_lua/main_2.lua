require 'torch'

function test()
	print("testLua_helloworld!")
end

function predict(str1, str2)
    print(str1)
    print(str2)
    print(str1 .. str2)
    return str1 .. str2

end

function testArr(arr)

    for i,v in pairs(arr)
        do
    print("-----NNNN")
            print(v)
    end
    return 5

end
