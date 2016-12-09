//
//  Movie.h
//  
//
//  Created by ilab on 21/07/2016.
//  Copyright © 2016 ilab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

NS_ASSUME_NONNULL_BEGIN

@interface Movie : NSManagedObject

// Insert code here to declare functionality of your managed object subclass

@property (nullable, nonatomic, retain) NSString *imdbID;
@property (nullable, nonatomic, retain) NSString *poster;
@property (nullable, nonatomic, retain) NSString *title;
@property (nullable, nonatomic, retain) NSString *type;
@property (nullable, nonatomic, retain) NSString *year;


@end

NS_ASSUME_NONNULL_END

