//
//  XF.cpp
//  XFAudioSDK
//
//  Created by Xinhou Jiang on 8/4/17.
//  Copyright © 2017年 Xinhou Jiang. All rights reserved.
//

#import "XFSDK.h"
#import "AudioRecord.h"
#import "MapViewController.h"
#import <JXHSDK/SDK.h>

extern "C" void XFSpeak(const char *people, const char *content) {
    [XFSDK xf_AudioSynthesizeOfText:[NSString stringWithUTF8String:content] fromPeople:[NSString stringWithUTF8String:people]];
}

extern "C" void XFState(const char *content) {
    //UnitySendMessage("EventManager","IOSMessage","");
    [XFSDK xf_AudioSynthesizeOfText:[NSString stringWithUTF8String:content]];
}

extern "C" void XFInitWithAppID(const char *appid) {
    [XFSDK xf_AudioInitWithAppID:[NSString stringWithUTF8String:appid]];
}

// 录音与播放
extern "C" void XHAudioRecordInit() {
    [AudioRecord xh_AudioRecordInit];
}
extern "C" void XHAudioRecordStart() {
    [AudioRecord xh_startOrResumeRecord];
}
extern "C" void XHAudioRecordStop() {
    [AudioRecord xh_stopRecord];
}
extern "C" void XHAudioRecordPause() {
    [AudioRecord xh_pauseRecord];
}
extern "C" void XHAudioRecordPlay() {
    [AudioRecord xh_playRecordedAudio];
}
extern "C" float XHAudioRecordGetPower() {
    [AudioRecord xh_getVoicePower];
}



// 登录SDK

extern "C" void XHSDKInitWithAppID(const char *appid){
    //获取Unity rootviewcontroller
    UIViewController *unityRootVC = UnityGetGLViewController();
    //UIView *unityView = UnityGetGLView();
    [SDK SDKInitWithAppID:[NSString stringWithUTF8String:appid] unityVC:unityRootVC];
}

extern "C" void XHLogin() {
    [SDK Login:^(NSInteger result, UserInfo *info) {
        
    }];
}

// 添加地图
extern "C" void XHLBSMap(){
    UIViewController *unityRootVC = UnityGetGLViewController();
    MapViewController *mapVC = [[MapViewController alloc] init];
    [unityRootVC addChildViewController:mapVC];
    [unityRootVC.view addSubview:mapVC.view];
}
