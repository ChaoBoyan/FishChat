//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PrtlBase.h"

@class DownloadVoiceWrap;

@interface CDownloadVoicePrtl : PrtlBase
{
    DownloadVoiceWrap *m_wrapDownloadVoice;
}

@property(retain, nonatomic) DownloadVoiceWrap *m_wrapDownloadVoice; // @synthesize m_wrapDownloadVoice;
- (void).cxx_destruct;
- (_Bool)HandleResp:(void *)arg1;
- (void)InitReq:(void *)arg1;
- (id)init;

@end

