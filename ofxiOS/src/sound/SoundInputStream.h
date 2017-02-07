//
//  SoundInputStream.h
//  Created by Lukasz Karluk on 13/06/13.
//  http://julapy.com/blog
//

#pragma once

#import "SoundStream.h"
@class SoundInputStream;
@interface SoundInputStreamContext : NSObject
{
@public
	
	AudioUnit remoteIO;
	
}
@property(nonatomic, assign)AudioBufferList * bufferList;
@property(nonatomic, strong)SoundInputStream* stream;
@end

@interface SoundInputStream : SoundStream 

@property(nonatomic, strong)SoundInputStreamContext* context;
-(void)start;
-(void)stop;
@end
