//
//  WowUtilsTests.h
//  GuildBrowser
//
//  Created by Aditya on 3/16/15.
//  Copyright (c) 2015 Charlie Fulton. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WoWUtils.h"
@interface WowUtilsTests : NSObject
+(NSString *)classFromCharacterType:(CharacterClassType)type;
+(NSString *)raceFromRaceType:(CharacterRaceType)type;
+(NSString *)qualityFromQualityType:(ItemQuality)quality;
@end
