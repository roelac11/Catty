//
//  StopAllSoundsBrick.m
//  Catty
//
//  Created by Dominik Ziegler on 9/21/12.
//  Copyright (c) 2012 Graz University of Technology. All rights reserved.
//

#import "StopAllSoundsBrick.h"
#import "SpriteManagerDelegate.h"

@implementation StopAllSoundsBrick

- (void)performOnSprite:(Sprite *)sprite fromScript:(Script*)script
{
    NSLog(@"Performing: %@", self.description);
    
    [sprite.spriteManagerDelegate stopAllSounds]; // move this to sprite??
    
}


#pragma mark - Description
- (NSString*)description
{
    return [NSString stringWithFormat:@"Stop All Sounds Brick"];
}


@end