//
//  UsersViewController.h
//  test
//
//  Created by lzw on 14-9-9.
//  Copyright (c) 2014年 lzw. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVOSCloud/AVOSCloud.h>
#import "StatusService.h"
#import "UserCenterViewController.h"

@interface UsersViewController : UIViewController <UITableViewDelegate,UITableViewDataSource>
@property (weak, nonatomic) IBOutlet UITableView *usersTableView;

@property (weak, nonatomic) IBOutlet UITextField *searchTextField;

@end
