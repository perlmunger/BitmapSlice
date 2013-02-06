//
//  BitmapSliceViewController.h
//  BitmapSlice
//
//  Created by Matt Long on 2/16/11.
//  Copyright 2011 Skye Road Systems, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BitmapSliceViewController : UIViewController 

@property (nonatomic, retain) IBOutlet UIScrollView *scrollView;

- (void)saveTilesOfSize:(CGSize)size forImage:(UIImage*)image toDirectory:(NSString*)directoryPath usingPrefix:(NSString*)prefix;


@end

