//
//  ExpandableCell.m
//  SheepDrench
//
//  Created by Admin on 6/3/16.
//  Copyright © 2016 Hivelet. All rights reserved.
//

#import "ExpandableCell.h"

@implementation ExpandableCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}


-(id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        //self.lblTitle = [[UILabel alloc]initWithFrame:CGRectMake(8, 9, 227, 16)];
        //self.lblTitle.backgroundColor = [UIColor clearColor];
        //[self.contentView addSubview:self.lblTitle];
        
        
       // self.btnExpand = [[UIButton alloc]initWithFrame:CGRectMake(8, 47, 141, 30)];
      //  self.btnExpand.backgroundColor = [UIColor clearColor];
      //  [self.contentView addSubview:self.btnExpand];
        // Initialization code
    }
    return self;
}



- (void)layoutSubviews{
    [super layoutSubviews];
    float indentPoints = self.indentationLevel * self.indentationWidth;
    
    self.contentView.frame = CGRectMake(
                                        indentPoints,
                                        self.contentView.frame.origin.y,
                                        self.contentView.frame.size.width - indentPoints,
                                        self.contentView.frame.size.height
                                        );
}

@end
