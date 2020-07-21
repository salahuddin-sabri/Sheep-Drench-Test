//
//  ExpandableCell.h
//  SheepDrench
//
//  Created by Admin on 6/3/16.
//  Copyright © 2016 Hivelet. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ExpandableCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UILabel *lblTitle;
@property (strong, nonatomic) IBOutlet UITextField *txtDesc;
@property (weak, nonatomic) IBOutlet UIButton *btnExpand;

@end
