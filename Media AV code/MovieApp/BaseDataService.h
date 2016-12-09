//
//  BaseDataService.h
//  MovieApp
//
//  Created by ilab on 21/07/2016.
//  Copyright © 2016 ilab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AppDelegate.h"

@interface BaseDataService : NSObject

@property(nonatomic,retain) AppDelegate *delegate;
@property(nonatomic,retain) NSURLConnection *connection;


+(NSString *) baseAPIUrl;
-(NSString *) makeApiCall:(NSString *)parameter;
- (NSData*) converResponseToDataStream: (NSString *) response;


@end
