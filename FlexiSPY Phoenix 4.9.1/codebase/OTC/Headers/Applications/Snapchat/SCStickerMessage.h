//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  4 2016 10:44:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseMessage.h"

@class NSString, SOJUSticker;

@interface SCStickerMessage : SCBaseMessage
{
    SOJUSticker *_sticker;
    NSString *_sourceStickerPack;
    unsigned long long _sourceDrawerPosition;
    long long _sourceDrawerViewMode;
}

@property(nonatomic) long long sourceDrawerViewMode; // @synthesize sourceDrawerViewMode=_sourceDrawerViewMode;
@property(nonatomic) unsigned long long sourceDrawerPosition; // @synthesize sourceDrawerPosition=_sourceDrawerPosition;
@property(nonatomic) NSString *sourceStickerPack; // @synthesize sourceStickerPack=_sourceStickerPack;
@property(readonly, copy, nonatomic) SOJUSticker *sticker; // @synthesize sticker=_sticker;

- (long long)scaMediaType;
- (long long)scaMessageType;
- (id)flurryName;
- (id)description;
- (_Bool)shouldNotifyUserOfFailure;
- (id)notificationType;
- (id)sendJSON;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSender:(id)arg1 recipient:(id)arg2 sticker:(id)arg3;
- (id)initWithUsername:(id)arg1 dictionary:(id)arg2;

@end

