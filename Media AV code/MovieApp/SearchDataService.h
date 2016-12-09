//
//  DataService.h
//  MovieApp
//
//  Created by ilab on 21/07/2016.
//  Copyright © 2016 ilab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseDataService.h"

@interface SearchDataService : BaseDataService


-(NSMutableArray *) getSearchedFilmFromAPI:(NSString *)searchParam;



@end
