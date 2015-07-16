//
//  NewTaskViewController.m
//  Tasks
//
//  Created by LEO on 7/15/15.
//  Copyright (c) 2015 iOS in Action. All rights reserved.
//

#import "NewTaskViewController.h"
#import "ViewController.h"

@implementation NewTaskViewController

- (IBAction)saveTask:(id)sender {
    if ([self.textField.text length] == 0) {
        return;
    }
    
    ViewController *tasksListView = (ViewController *) self.delegate;
    [tasksListView.tasks addObject:self.textField.text];
    NSLog(@"%i", [tasksListView.tasks count]);
    [self close:sender];
}

- (IBAction)close:(id)sender {
    [self dismissViewControllerAnimated:YES completion:nil];
}
@end
