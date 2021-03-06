/* Common */
    #import <objc/runtime.h>
    #import <MaeCommon/MaeCommon.h>
    #import "MFCardBackdropView.h"
    #import "MFRoundButton.h"
    #import "MFBaseViewController.h"

@interface UIUserInterfaceStyleArbiter
+(id)sharedInstance;
-(void)toggleCurrentStyle;
@end

@interface MFCentralViewController : MFBaseScrollViewController
@property(nonatomic, retain) MFCardBackdropView *backdropView;
-(void)openDidOccur;
@end
