//
//  ColorScrollView.h
//  ColorPicker
//
//  Created by Mango on 14-2-11.
//  Copyright (c) 2014年 Mango. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ColorImageView;
@class ColorPickerImageView;
@interface ColorScrollView : UIScrollView

@property (strong, nonatomic) ColorImageView *selectedImageView;
@property (strong, nonatomic) ColorPickerImageView *colorPickerView;

@end
