// Created by Satoshi Nakagawa.
// You can redistribute it and/or modify it under the new BSD license.

#import <Cocoa/Cocoa.h>


@interface NSData (NSDataHelper)

- (BOOL)isValidUTF8;
- (NSString*)validateUTF8;
- (NSString*)validateUTF8WithCharacter:(UniChar)malformChar;

@end
