

#import <Foundation/Foundation.h>
#import <QSEffects/QSWindow.h>
#import <QSEffects/QSTrackingWindow.h>

@interface QSDockingWindow : QSBorderlessWindow {
	
	NSTrackingRectTag trackingRect;
	// BOOL hidden;
	
	NSTimer *hideTimer;
	NSTimeInterval lastTime;
	NSTimeInterval timeEntered;
	BOOL moving, locked, allowKey;
	
	NSString *autosaveName;
}

- (void)updateTrackingRect:(id)sender;
- (IBAction)hide:(id)sender;
- (IBAction)show:(id)sender;
- (IBAction)toggle:(id)sender;
- (BOOL)canFade;
- (NSString *)autosaveName;
- (void)setAutosaveName:(NSString *)newAutosaveName;
- (void)resignKeyWindowNow;
- (IBAction)orderFrontHidden:(id)sender;
- (void)saveFrame;
- (BOOL)hidden;
- (IBAction)hideOrOrderOut:(id)sender;
- (IBAction)showKeyless:(id)sender;
@end
