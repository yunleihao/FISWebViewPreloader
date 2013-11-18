//
//  FISWebViewPreloader.h
//  FISWebViewPreloader
//
//  Created by Basar Akyelli on 11/13/13.
//  Copyright (c) 2013 James Lin & Basar Akyelli. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FISWebViewPreloader : NSObject

- (UIWebView *)setURLString:(NSString *)aURLString forKey:(id<NSCopying>)aKey withFrameWidth:(double)aWidth withFrameLength:(double)aHeight;
- (UIWebView *)setURLString:(NSString *)aURLString forKey:(id<NSCopying>)aKey;
- (UIWebView *)webViewForKey:(id<NSCopying>)aKey;

- (id)keyForWebView:(UIWebView *)WebView;
- (void)removeWebViewForKey:(id<NSCopying>)aKey;

- (NSArray *)allKeys;
- (void)clear;

@end
