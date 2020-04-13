//
//  CJMViewController.m
//  CJMColor
//
//  Created by chenjm on 04/13/2020.
//  Copyright (c) 2020 chenjm. All rights reserved.
//

#import "CJMViewController.h"
#import <CJMColor/CJMColor.h>

@interface CJMViewController ()

@end

@implementation CJMViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    UIColor *color = [UIColor cjmc_colorWithRGBHexString:@"#ff0000" alpha:1];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
