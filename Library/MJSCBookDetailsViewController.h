//
//  MJSCBookDetailsViewController.h
//  Library
//
//  Created by María Jesús Senosiain Caamiña on 13/05/15.
//  Copyright (c) 2015 María Jesús Senosiain Caamiña. All rights reserved.
//

@import UIKit;
@class MJSCBook;

#import "MJSCLibraryViewControllerDelegate.h"

@interface MJSCBookDetailsViewController : UIViewController <UISplitViewControllerDelegate, MJSCLibraryViewControllerDelegate>

-(id)initWithBook:(MJSCBook*) book;

@end
