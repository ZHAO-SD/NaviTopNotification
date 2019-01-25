# NaviTopNotification
导航栏上的通知

        //默认一行代码调用
        [SDNotifyView showNotify:@"测试"];
        
        //自定义显示在哪个view上
        [SDNotifyView showNotify:@"测试" showView:self.navigationController.view];

        // 自定义配置
        SDNotifyViewConfig *config = [SDNotifyViewConfig defaultNotifyConfig];
        // 通知样式
        config.notifyStyle = SDNotifyViewStyleFill;
        // 自定义背景颜色
        config.backgroundColor = [UIColor orangeColor];
        // 自定义字体大小
        config.textSize = 16.f;
        // 自定义文字颜色
        config.textColor = [UIColor blackColor];
        // 自定义行间距
        config.textLineSpace = 4.f;
        // 自定义悬停时间
        config.notifyViewWaitDuration = 2.f;
        
        //显示
        [SDNotifyView showNotify:@"测试" showView:[UIApplication sharedApplication].keyWindow config:config];
 
        //系统默认配置样式
        
        // 默认自带样式
        SDNotifyViewConfig *config = [SDNotifyViewConfig defaultNotifyConfig];
        
        // 系统自带默认四种实现类型
        if (sender.tag == 0) {
            config.backgroundColorType = SDNotifyViewBackgroundColorTypeSuccess;
        } else if (sender.tag == 1) {
            config.backgroundColorType = SDNotifyViewBackgroundColorTypeDanger;
        } else if (sender.tag == 2) {
            config.backgroundColorType = SDNotifyViewBackgroundColorTypeWarning;
        } else if (sender.tag == 3) {
            config.backgroundColorType = SDNotifyViewBackgroundColorTypeInfo;
        }
        //显示
        [SDNotifyView showNotify:@"测试" showView:[UIApplication sharedApplication].keyWindow config:config];
 
    
