//
//  PreferencesController.h
//  Monolingual
//
//  Created by Ingmar Stein on Mon Apr 19 2004.
//  Copyright (c) 2004-2006 Ingmar Stein. All rights reserved.
//

#import <AppKit/AppKit.h>

@interface PreferencesController : NSWindowController {
	IBOutlet NSArrayController *roots;
}
- (IBAction) add: (id)sender;
- (id) init;
@end