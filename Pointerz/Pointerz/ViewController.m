//
//  ViewController.m
//  Pointerz
//
//  Created by Glenn Posadas on 1/5/22.
//

#import "ViewController.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet UIButton *button;

@end

@implementation ViewController

- (void)viewDidLoad {
  [super viewDidLoad];


  
}

- (IBAction)tappedButton:(id)sender {
  
  NSString *myName = @"Glenn Posadas";
  NSLog(@"%@", myName);
  
  _label.text = myName;
}

@end
