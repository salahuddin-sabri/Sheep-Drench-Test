//
//  AppDelegate.h
//  SheepDrench
//
//  Created by Apple on 6/1/16.
//  Copyright (c) 2016 Hivelet. All rights reserved.
//

#import <UIKit/UIKit.h>

@import Charts;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) NSMutableArray * drenchArrayOne;
@property (strong, nonatomic) NSMutableArray * drenchArrayTwo;
@property (strong, nonatomic) NSMutableArray * drenchArrayThree;
@property (strong, nonatomic) NSMutableArray * drenchArrayFour;
@property (strong, nonatomic) NSMutableArray * drenchArrayFive;
@property (strong, nonatomic) NSMutableArray * resultArrayOne;
@property (strong, nonatomic) NSMutableArray * resultArrayTwo;
@property (strong, nonatomic) NSMutableArray * resultArrayThree;
@property (strong, nonatomic) NSMutableArray * resultArrayFour;
@property (strong, nonatomic) NSMutableArray * resultArrayFive;


@property (strong, nonatomic) NSString *isFromEdit;
@property (strong, nonatomic) NSString *isFromHome;
@property (strong, nonatomic) NSString *isBackOrEdit;

@property (nonatomic) float noOfLambs;
@property (nonatomic) float priceofLamb;
@property (nonatomic) float preNetReturn1;
@property (nonatomic) float preNetReturn2;
@property (nonatomic) float preNetReturn3;
@property (nonatomic) float preNetReturn4;
@property (nonatomic) float preNetReturn5;
@property (nonatomic) float totalCostOfPlan;

@property (strong, nonatomic) NSMutableArray *preNetReturnArray;
@property(nonatomic) float constantFinal1;
@property(nonatomic) float constantFinal2;
@property(nonatomic) float constantFinal3;
@property(nonatomic) float constantFinal4;
@property(nonatomic) float constantFinal5;
@property(nonatomic) float constantFinal6;

@end

