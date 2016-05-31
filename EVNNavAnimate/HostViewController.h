//
//  HostViewController.h
//  EVNNavAnimate
//
//  Created by developer on 16/5/31.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HostViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) UITableView *tableView;

@property (strong, nonatomic) UIImageView *navTitleView;

@end
