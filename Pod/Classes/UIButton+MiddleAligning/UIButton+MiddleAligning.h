//
//  UIButton+MiddleAligning.h
//  UIButton+MiddleAligning
//
//  Created by Barry on 12/11/15.
//  Copyright © 2015 BarryLee. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 A category on UIButton that provides a simple yet powerful interface to middle aligning imageView and titleLabel
 */
@interface UIButton (MiddleAligning)

/**
 @param spacing The middle spacing between imageView and titleLabel.
 @discussion The middle aligning method for imageView and titleLabel.
 */
- (void)middleAlignButtonWithSpacing:(CGFloat)spacing;
- (void)middleAlignButtonWithSpacing:(CGFloat)spacing direction:(UIUserInterfaceLayoutDirection)direction;

@end
