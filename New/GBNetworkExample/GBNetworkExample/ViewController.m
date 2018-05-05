//
//  ViewController.m
//  GBNetworkExample
//
//  Created by BANYAN on 2018/3/12.
//  Copyright © 2018年 BANYAN. All rights reserved.
//

#import "ViewController.h"
#import "GBNetwork.h"

static NSString *const requestUrlString = @"http://api.budejie.com/api/api_open.php?a=category&c=subscribe";

@interface ViewController () <GBNetworkMonitorProtocol>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [GBNetworkMonitor registerNetworkNotification:self];
    NSLog(@"%@",[GBNetworkMonitor currentNetworkStatusString]);
}

- (void)networkStatusChangeNotification:(NSNotification *)notification {
    NSLog(@"%@",notification.userInfo[@"GBNetworkStatusString"]);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}


@end
