//
//  MyMacros.h
//  LowriDev
//
//  Created by Logan Wright on 3/18/14.
//  Copyright (c) 2014 Logan Wright. All rights reserved.
//


/*
 Mozilla Public License
 Version 2.0
 */


#ifndef MyMacros_h
#define MyMacros_h

static inline CGFloat width(UIView *view) { return view.frame.size.width; }
static inline CGFloat height(UIView *view) { return view.frame.size.height; }
static inline int ScreenHeight(){ return [UIScreen mainScreen].bounds.size.height; }
static inline int ScreenWidth(){ return [UIScreen mainScreen].bounds.size.width; }

static inline NSString * TimeStamp() {return [NSString stringWithFormat:@"%f",[[NSDate new] timeIntervalSince1970] * 1000];}

#endif
