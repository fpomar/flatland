//
//  FLTiledMap.h
//  Flatland
//
//  Created by vmware on 11/25/13.
//  Copyright (c) 2013 ITBA. All rights reserved.
//

#import "CCTMXTiledMap.h"
#import "cocos2d.h"


@interface FLTiledMap : CCTMXTiledMap
+(id) tiledMapWithTMXFile:(NSString *)tmxFile andSpace: (cpSpace*) space;
-(id) initWithTMXFile:(NSString *)tmxFile andSpace: (cpSpace*) space;
-(CGPoint) playerSpawnPoint;
@end
