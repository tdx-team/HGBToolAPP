//
//  HGBBrokenLineChat.h
//  测试
//
//  Created by huangguangbao on 2017/10/26.
//  Copyright © 2017年 agree.com.cn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HGBBrokenLineValue.h"
@class HGBBrokenLineChat;

@protocol HGBBrokenLineChatDelegate <NSObject>
-(void)brokenLineChat:(HGBBrokenLineChat *)brokenLineChat didClickWithValue:(HGBBrokenLineValue *)value;
@end

@interface HGBBrokenLineChat : UIView

@property (nonatomic, strong) id <HGBBrokenLineChatDelegate>delegate;
/**
 数据源
 */
@property (nonatomic, strong) NSMutableArray<HGBBrokenLineValue *> *dataArray;

/**
 边框颜色
 */
@property (nonatomic, strong) UIColor *borderColor;
/**
 边框宽度
 */
@property (nonatomic, assign) CGFloat borderWidth;

/**
 是否需要阴影
 */
@property (nonatomic, assign) BOOL needCloud;
/**
 阴影颜色
 */
@property (nonatomic, strong) UIColor *cloudColor;

/**
 是否需要圆点
 */
@property (nonatomic, assign) BOOL showPoint;

/**
 折线颜色
 */
@property (nonatomic, strong) UIColor *lineColor;



/**
 x最大值
 */
@property (nonatomic, assign) CGFloat maxXValue;
/**
 y最大值
 */
@property (nonatomic, assign) CGFloat maxYValue;

/**
 x起始值
 */
@property (nonatomic, assign) CGFloat perXValue;
/**
 y起始值
 */
@property (nonatomic, assign) CGFloat perYValue;

/**
 X轴描述字体颜色
 */
@property (nonatomic, strong) UIColor *xValueTextColor;
/**
 Y轴描述字体颜色
 */
@property (nonatomic, strong) UIColor *yValueTextColor;

/**
 X轴描述字体大小
 */
@property (nonatomic, assign) CGFloat xValueFont;
/**
 Y轴描述字体大小
 */
@property (nonatomic, assign) CGFloat yValueFont;

/**
 X分区数量
 */
@property (nonatomic, assign) NSInteger xSectionNum;
/**
 Y分区数量
 */
@property (nonatomic, assign) NSInteger ySectionNum;

/**
 X轴默认间隔
 */
@property (nonatomic, assign) CGFloat xDistance;
/**
 Y轴默认间隔
 */
@property (nonatomic, assign) CGFloat yDistance;

/**
 条形图宽度
 */
@property (nonatomic, assign) CGFloat marKWidth;

/**
 是否需要动画
 */
@property (nonatomic, assign) BOOL animation;

/**
 动画执行时间
 */
@property (nonatomic, assign) CGFloat duration;


/**
 初始化

 @param frame 尺寸
 @param dataArray 数据源
 @return 实体
 */
- (instancetype)initWithFrame:(CGRect)frame dataArray:(NSArray *)dataArray;

/**
 数据刷新

 @param dataArray 数据源
 */
-(void)updateWithDataSource:(NSArray *)dataArray;

@end
