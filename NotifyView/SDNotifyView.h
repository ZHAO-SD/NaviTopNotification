//
//  SDNotifyView.h
//  SDNotifyView




#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class SDNotifyViewConfig;
@interface SDNotifyView : UIView

/**
 显示通知
 @param notify 通知文字
 */
+ (SDNotifyView *)showNotify:(NSString *)notify;

+ (SDNotifyView *)showNotify:(NSString *)notify showView:(UIView *)showView;

+ (SDNotifyView *)showNotify:(NSString *)notify showView:(UIView *)showView config:(SDNotifyViewConfig *)config;

@end

/** 背景颜色值的类型, 默认 SDNotifyViewBackgroundTypeSuccess */
typedef NS_ENUM(NSInteger, SDNotifyViewBackgroundColorType) {
    SDNotifyViewBackgroundColorTypeSuccess, //成功
    SDNotifyViewBackgroundColorTypeDanger, //错误
    SDNotifyViewBackgroundColorTypeWarning, //警告
    SDNotifyViewBackgroundColorTypeInfo, //信息
};

/** 通知框出现的样式, 默认 SDNotifyViewStyleFit */
typedef NS_ENUM(NSInteger, SDNotifyViewStyle) {
    SDNotifyViewStyleFit, //默认样式 (上 左 右 有间距)
    SDNotifyViewStyleFill, //填满样式 (上 左 右 无间距)
};

@interface SDNotifyViewConfig : NSObject

/************************** 默认初始化方法 **************************/
+ (SDNotifyViewConfig *)defaultNotifyConfig;

/**************************  通知样式 **************************/
/** 通知样式 */
@property (nonatomic, assign) SDNotifyViewStyle notifyStyle;

/**************************  背景颜色 **************************/
/** 通知视图的背景颜色类型 */
@property (nonatomic, assign) SDNotifyViewBackgroundColorType backgroundColorType;
/** 通知视图的背景颜色(如果 backgroundType 不适用, 可通过此字段进行自定义) */
@property (nonatomic, strong) UIColor *backgroundColor;

/**************************  字体文字设置 **************************/
/** 文字字体大小 (默认 16) */
@property (nonatomic, assign) CGFloat textSize;
/** 文字字体颜色 (默认 black) */
@property (nonatomic, strong) UIColor *textColor;
/** 文字的行间距 (默认 2.f) */
@property (nonatomic, assign) CGFloat textLineSpace;

/**************************  动画设置 **************************/
/** 通知视图悬停时间 (默认 1.5) */
@property (nonatomic, assign) CGFloat notifyViewWaitDuration;


@end

NS_ASSUME_NONNULL_END
