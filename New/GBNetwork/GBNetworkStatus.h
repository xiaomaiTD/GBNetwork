// GBNetworkStatus.h
//
// Copyright (c) 2018 BANYAN
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

#ifndef GBNetworkStatus_h
#define GBNetworkStatus_h

/**
 * @brief 网络请求类型
 */
typedef NS_ENUM(NSUInteger,GBNetworkRequestType) {
    GBNetworkRequestTypeGet = 0,
    GBNetworkRequestTypePost,
    GBNetworkRequestTypePut,
    GBNetworkRequestTypePatch,
    GBNetworkRequestTypeDelete
};

/**
 * @brief 网络请求缓存类型
 */
typedef NS_ENUM(NSUInteger,GBResponseCacheMode) {
    GBResponseCacheModeNone = 0, //不缓存
    GBResponseCacheModeCache //缓存
};

/**
 * @brief 网络状态类型
 */
typedef NS_ENUM(NSUInteger,GBNetworkStatus){
    GBNetworkStatusNone = 0, //无网络
    GBNetworkStatusWifi, //Wifi网络
    GBNetworkStatusWWAN, //WWAN网络
    GBNetworkStatus2G, //2G网络
    GBNetworkStatus3G, //3G网络
    GBNetworkStatus4G, //4G网络
    GBNetworkStatusUnkonw //未知网络
};

/**
 * @brief 请求数据类型
 */
typedef NS_ENUM(NSUInteger,GBRequestSerializer){
    GBRequestSerializerJSON,
    GBRequestSerializerHTTP,
};

/**
 * @brief 响应数据类型
 */
typedef NS_ENUM(NSUInteger,GBResponseSerializer){
    GBResponseSerializerJSON,
    GBResponseSerializerHTTP,
};

typedef void (^SuccessBlock)(id responseObject);
typedef void (^FailureBlock)(NSError * error);
typedef void (^CacheBlock)(id responseCache);
typedef void (^ProgressBlock)(NSProgress *progress);
typedef void (^NetworkStatusBlock)(GBNetworkStatus status);


#endif /* GBNetworkStatus_h */

///-------------------------
#pragma mark - DEBUG
///-------------------------
#ifdef DEBUG
#define NSLog(FORMAT, ...) fprintf(stderr, "%s [Line %zd]\t%s\n", [[[NSString stringWithUTF8String: __FILE__] lastPathComponent] UTF8String], __LINE__, [[NSString stringWithFormat: FORMAT, ## __VA_ARGS__] UTF8String]);
#else
#define NSLog(FORMAT, ...) nil
#endif
