//
//  BitmapSliceAppDelegate.h
//  BitmapSlice
//
//  Created by Matt Long on 2/16/11.
//  Copyright 2011 Skye Road Systems, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BitmapSliceViewController;

@interface BitmapSliceAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    BitmapSliceViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet BitmapSliceViewController *viewController;

@end

