//
//  AWHRMZFPlayerNotification.h
//  AWHRMZFPlayer
//
// Copyright (c) 2016年 任子丰 ( http://github.com/renzifeng )
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, AWHRMZFPlayerBackgroundState) {
    AWHRMZFPlayerBackgroundStateForeground,  // Enter the foreground from the background.
    AWHRMZFPlayerBackgroundStateBackground,  // From the foreground to the background.
};

@interface AWHRMZFPlayerNotification : NSObject

@property (nonatomic, readonly) AWHRMZFPlayerBackgroundState backgroundState;

@property (nonatomic, copy, nullable) void(^willResignActive)(AWHRMZFPlayerNotification *registrar);

@property (nonatomic, copy, nullable) void(^didBecomeActive)(AWHRMZFPlayerNotification *registrar);

@property (nonatomic, copy, nullable) void(^newDeviceAvailable)(AWHRMZFPlayerNotification *registrar);

@property (nonatomic, copy, nullable) void(^oldDeviceUnavailable)(AWHRMZFPlayerNotification *registrar);

@property (nonatomic, copy, nullable) void(^categoryChange)(AWHRMZFPlayerNotification *registrar);

@property (nonatomic, copy, nullable) void(^volumeChanged)(float volume);

@property (nonatomic, copy, nullable) void(^audioInterruptionCallback)(AVAudioSessionInterruptionType interruptionType);

- (void)addNotification;

- (void)removeNotification;

@end

NS_ASSUME_NONNULL_END
