//
//  BaseController.h
//  MovieApp
//
//  Created by ilab on 21/07/2016.
//  Copyright © 2016 ilab. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BaseController : UIViewController

- (void)downloadImageWithURL:(NSURL *)url completionBlock:(void (^)(BOOL succeeded, UIImage *image))completionBlock;

@end
