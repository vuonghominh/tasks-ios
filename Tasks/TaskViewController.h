//
//  TaskViewController.h
//  Tasks
//
//  Created by LEO on 7/15/15.
//  Copyright (c) 2015 iOS in Action. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TaskViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *textLabel;
@property (weak, nonatomic) NSString *task;
@property (weak, nonatomic) id delegate;
- (IBAction)completeTask:(id)sender;

@end
