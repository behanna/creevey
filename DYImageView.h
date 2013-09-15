//Copyright 2005 Dominic Yu. Some rights reserved.
//This work is licensed under the Creative Commons
//Attribution-NonCommercial-ShareAlike License. To view a copy of this
//license, visit http://creativecommons.org/licenses/by-nc-sa/2.0/ or send
//a letter to Creative Commons, 559 Nathan Abbott Way, Stanford,
//California 94305, USA.

//  DYImageView.h
//  creevey
//
//  Created by d on 2005.04.01.

#import <Cocoa/Cocoa.h>


@interface DYImageView : NSView {
	NSImage *image;
	NSTimer *gifTimer;
	int rotation;
	BOOL scalesUp;
	NSRect sourceRect;
	NSSize destSize;
	float zoomF;
}

- (NSImage *)image;
- (void)setImage:(NSImage *)anImage;
- (void)setImage:(NSImage *)anImage zoomIn:(BOOL)zoomIn;
- (int)rotation;
- (int)addRotation:(int)r;
- (void)setRotation:(int)n;

//- (float)zoom;
- (BOOL)scalesUp;
- (void)setScalesUp:(BOOL)b;

- (void)zoomOff;
- (void)zoomActualSize;
- (void)zoomIn;
- (void)zoomOut;
- (void)fakeDragX:(float)x y:(float)y;

- (BOOL)zoomMode;
- (float)zoomF;


@end