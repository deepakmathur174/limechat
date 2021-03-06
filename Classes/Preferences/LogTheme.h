// Created by Satoshi Nakagawa.
// You can redistribute it and/or modify it under the new BSD license.

#import <Cocoa/Cocoa.h>


@interface LogTheme : NSObject
{
	NSString* fileName;
	NSURL* baseUrl;
	NSString* content;
}

@property (nonatomic, retain) NSString* fileName;
@property (nonatomic, readonly) NSURL* baseUrl;
@property (nonatomic, retain) NSString* content;

- (void)reload;

@end
