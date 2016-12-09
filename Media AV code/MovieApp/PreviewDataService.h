//
//  PreviewDataService.h
//  MovieApp
//
//  Created by ilab on 21/07/2016.
//  Copyright © 2016 ilab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AppDelegate.h"
#import "BaseDataService.h"
#import "PreviewFilm.h"

@interface PreviewDataService : BaseDataService


-(PreviewFilm *) getFilmPreviewFromAPI:(NSString *)urlParameter;


@end
