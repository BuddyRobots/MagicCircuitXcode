//
//  TorchUandOCTest.h
//  TorchUandOCTest
//
//  Created by 王茜 on 9/5/16.
//  Copyright © 2016 buddyrobots. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Torch.h"
#include <Torch/Torch.h>
#import "XORClassifyObject.h"


@interface TorchUandOCTest : NSObject

- (void)perfClassificationOnValuesv1:(float[])sample;
- (CGFloat)classifyExample:(XORClassifyObject *)obj inState:(lua_State *)L;

-(void)InitLuaContext;

-(void)testCallLuaMethod;

@property (nonatomic, strong) Torch *t;


-(id)init;


@end



#ifdef __cplusplus
extern "C"
{
#endif
    
    void testLuaWithPara(float array[]);
  
    
    
#ifdef __cplusplus
}
#endif
