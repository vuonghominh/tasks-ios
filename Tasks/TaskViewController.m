//
//  TaskViewController.m
//  Tasks
//
//  Created by LEO on 7/15/15.
//  Copyright (c) 2015 iOS in Action. All rights reserved.
//

#import "TaskViewController.h"
#import "ViewController.h"

@implementation TaskViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.textLabel.text = self.task;
}

- (IBAction)completeTask:(id)sender {
    ViewController *taskListView = self.delegate;
    [taskListView.tasks removeObject:self.task];
    [self.navigationController popViewControllerAnimated:YES];
}
@end
