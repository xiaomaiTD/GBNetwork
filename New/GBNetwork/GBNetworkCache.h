// GBNetworkCache.h
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

#import <Foundation/Foundation.h>
#import "GBNetworkSingleton.h"

@interface GBNetworkCache : NSObject GBNetworkSingletonH(Instance)

/**
 * @brief 保存数据到缓存
 */
+ (void)saveDataCache:(id)data forkey:(NSString *)key;

/**
 * @brief 读取缓存
 */
+ (id)readCache:(NSString *)key;

/**
 * @brief 获取缓存大小
 */
+ (NSString *)getCacheSize;

/**
 * @brief 通过key查询是否缓存
 */
+ (BOOL)isCached:(NSString *)key;

/**
 * @brief 通过key删除其所占缓存
 */
+ (void)removeCacheFrom:(NSString *)key;

/**
 * @brief 清除所有缓存
 */
+ (void)removeAllCache;

@end
