//
//  Battlefield.h
//  CastleHassleRemake
//
//  Created by tedant on 12/12/21.
//  Copyright 2012 MokuApp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "SimpleAudioEngine.h"

@interface Battlefield : CCLayer {
    
}


@property(nonatomic, retain) NSMutableArray *tileables;


+(Battlefield*)instance;



@end
