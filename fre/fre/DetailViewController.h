//
//  DetailViewController.h
//  fre
//
//  Created by 1 on 16/9/13.
//  Copyright © 2016年 1. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

