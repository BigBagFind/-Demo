//
//  BZWaterfallViewModel.h
//  壁纸Demo
//
//  Created by 铁拳科技 on 16/10/14.
//  Copyright © 2016年 铁哥哥. All rights reserved.
//

#import <ReactiveViewModel/ReactiveViewModel.h>
#import "Protocols.h"


@interface BZWaterfallViewModel : RVMViewModel <BZWaterfallViewModelProtocol>


/** waterfall的分类tag */
@property (nonatomic) NSString *tag;

/** 壁纸数组 */
@property (nonatomic) NSArray *pins;



@end
