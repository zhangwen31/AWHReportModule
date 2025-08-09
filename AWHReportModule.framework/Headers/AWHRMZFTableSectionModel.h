//
//  AWHRMZFTableSectionModel.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@interface AWHRMZFTableItem : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subTitle;
@property (nonatomic, copy) NSString *viewControllerName;

+ (instancetype)itemWithTitle:(NSString *)title subTitle:(NSString *)subTitle viewControllerName:(NSString *)name;

@end

@interface AWHRMZFTableSectionModel : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray <AWHRMZFTableItem *>*items;

+ (instancetype)sectionModeWithTitle:(NSString *)title items:(NSArray <AWHRMZFTableItem *>*)items;

@end

NS_ASSUME_NONNULL_END
