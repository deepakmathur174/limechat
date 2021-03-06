// Created by Satoshi Nakagawa.
// You can redistribute it and/or modify it under the new BSD license.

#import <Foundation/Foundation.h>


@interface SheetBase : NSObject
{
	id delegate;
	NSWindow* window;

	IBOutlet NSWindow* sheet;
	IBOutlet NSButton* okButton;
	IBOutlet NSButton* cancelButton;
}

@property (nonatomic, assign) id delegate;
@property (nonatomic, assign) NSWindow* window;

- (void)startSheet;
- (void)endSheet;

- (void)ok:(id)sender;
- (void)cancel:(id)sender;

@end
