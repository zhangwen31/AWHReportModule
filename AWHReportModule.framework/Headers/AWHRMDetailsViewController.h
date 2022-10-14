//
//  AWHRMDetailsViewController.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/8.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHRMDetailsViewController : AWHBBBaseViewController
@property(nonatomic,strong)NSMutableArray *dataArray;
@property(nonatomic,copy)NSString *carPlate;
@property(nonatomic,copy)NSString *titleName;
@property(nonatomic,copy)NSString *carId;
@property(nonatomic,copy)NSString *name;
//@property(nonatomic,copy)NSString *ptitleName;
@property(nonatomic,copy)NSString *fromVC;
@end

NS_ASSUME_NONNULL_END
