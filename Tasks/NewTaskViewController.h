//
//  NewTaskViewController.h
//  Tasks
//
//  Created by LEO on 7/15/15.
//  Copyright (c) 2015 iOS in Action. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NewTaskViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) id delegate;
- (IBAction)saveTask:(id)sender;
- (IBAction)close:(id)sender;

@end
