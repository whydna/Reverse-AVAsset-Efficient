#import <Foundation/Foundation.h>

@class AVAsset;

@interface AVUtilities : NSObject

+ (AVAsset *)assetByReversingAsset:(AVAsset *)asset outputURL:(NSURL *)outputURL;

@end
