//
//  ShareMainViewController.h
//  Owncloud iOs Client
//
//  Created by Gonzalo Gonzalez on 10/8/15.
//
//

/*
 Copyright (C) 2015, ownCloud, Inc.
 This code is covered by the GNU Public License Version 3.
 For distribution utilizing Apple mechanisms please see https://owncloud.org/contribute/iOS-license-exception/
 You should have received a copy of this license
 along with this program. If not, see <http://www.gnu.org/licenses/gpl-3.0.en.html>.
 */

#import <UIKit/UIKit.h>
#import "ShareFileOrFolder.h"
#import "MBProgressHUD.h"
#import "FileDto.h"

@interface ShareMainViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, ShareFileOrFolderDelegate, MBProgressHUDDelegate, UIAlertViewDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate>

@property (weak, nonatomic) IBOutlet UITableView* shareTableView;
@property (strong, nonatomic) UIView* datePickerContainerView;
@property (strong, nonatomic) UIDatePicker *datePickerView;
@property (strong, nonatomic) UIView* pickerView;

- (id) initWithFileDto:(FileDto *)fileDto;

@end
