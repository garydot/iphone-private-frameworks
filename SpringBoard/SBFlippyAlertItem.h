/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"

@class UIModalView;

@interface SBFlippyAlertItem : SBAlertItem {
	UIModalView* _frontAlertSheet;
	UIModalView* _backAlertSheet;
	BOOL _showingBack;
	BOOL _isLocked;
	BOOL _requirePasscode;
}
-(Class)frontAlertSheetClass;
-(Class)backAlertSheetClass;
// inherited: -(Class)alertSheetClass;
-(id)createFrontAlertSheet;
-(id)createBackAlertSheet;
-(id)frontAlertSheet;
-(id)backAlertSheet;
// inherited: -(id)alertSheet;
// inherited: -(void)dealloc;
// inherited: -(void)cleanPreviousConfiguration;
// inherited: -(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)configureFront:(BOOL)front requirePasscodeForActions:(BOOL)actions;
-(void)configureBack:(BOOL)back requirePasscodeForActions:(BOOL)actions;
-(void)flip;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
@end

