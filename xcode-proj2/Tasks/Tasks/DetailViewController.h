//
//  DetailViewController.h
//  Tasks
//
//  Created by n00shie on 2012-10-10.
//  Copyright (c) 2012 n00shie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
