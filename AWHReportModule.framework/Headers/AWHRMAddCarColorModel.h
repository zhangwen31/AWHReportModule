//
//  AWHRMAddCarColorModel.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHRMAddCarColorModel : NSObject

//ID号
@property(nonatomic,copy)NSString *name;
//名称
@property(nonatomic,copy)NSString *id;
//父节点ID
@property(nonatomic,copy)NSString *pid;

@end

NS_ASSUME_NONNULL_END
