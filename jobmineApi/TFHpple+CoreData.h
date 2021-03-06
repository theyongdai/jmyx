//
//  TFHpple+CoreData.h
//  jobmineM
//
//  Created by edwin on 8/31/12.
//  Copyright (c) 2012 edwin. All rights reserved.
//

#import "TFHpple.h"
#import "TFHppleElement.h"
#import "jobmineApi.h"
#import "JobmineInfo.h"
#import "JobmineApplicationDetail.h"
#import "NSString+encoding.h"
#import "SVProgressHUD.h"

@interface TFHpple (CoreData)

+ (void) insertDataString: (NSData*) aJobmineResponse forCategory: (CategoryListing) aCategory withManagedContext: (NSManagedObjectContext*) aContext;
+ (NSString* ) insertJobmineApplicationDetail: (NSData* ) HTMLData withContext: (NSManagedObjectContext* ) aContext;

@end
