//
//  ViewController.h
//  Tasks
//
//  Created by LEO on 7/15/15.
//  Copyright (c) 2015 iOS in Action. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) NSMutableArray *tasks;

@end

