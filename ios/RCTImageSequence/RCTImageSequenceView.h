//
// Created by Mads Lee Jensen on 07/07/16.
// Copyright (c) 2016 Facebook. All rights reserved.
//

#import <React/RCTComponent.h>
#import <UIKit/UIKit.h>

@interface RCTImageSequenceView : UIImageView

@property (nonatomic, copy) RCTDirectEventBlock onImagesLoadEnd;

@end
