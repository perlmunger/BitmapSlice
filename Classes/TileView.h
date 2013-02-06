//
//  TileView.h
//  BitmapSlice
//
//  Created by Matt Long on 2/17/11.
//  Copyright 2011 Skye Road Systems, Inc. All rights reserved.
//

@interface TileView : UIView 

@property (nonatomic, copy) NSString *tileTag;
@property (nonatomic, copy) NSString *tileDirectory;

- (UIImage*)tileAtCol:(int)col row:(int)row;

@end
