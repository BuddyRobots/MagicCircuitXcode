//
//  PhotoManager.h
//  TorchUandOCTest
//
//  Created by 谭燕青 on 9/27/16.
//  Copyright © 2016 buddyrobots. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PhotoManager : NSObject
- ( void ) imageSaved: (UIImage *) image didFinishSavingWithError:( NSError *)error
          contextInfo: ( void *) contextInfo;
@end