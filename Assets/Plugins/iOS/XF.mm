//
//  XF.cpp
//  XFAudioSDK
//
//  Created by Xinhou Jiang on 8/4/17.
//  Copyright © 2017年 Xinhou Jiang. All rights reserved.
//

#import "XFSDK.h"

extern "C" void XFSpeak(const char *people, const char *content) {
    [XFSDK xf_AudioSynthesizeOfText:[NSString stringWithUTF8String:content] fromPeople:[NSString stringWithUTF8String:people]];
}

extern "C" void XFState(const char *content) {
    UnitySendMessage("EventManager","IOSMessage","");
    [XFSDK xf_AudioSynthesizeOfText:[NSString stringWithUTF8String:content]];
}

extern "C" void XFInitWithAppID(const char *appid) {
    [XFSDK xf_AudioInitWithAppID:[NSString stringWithUTF8String:appid]];
}
