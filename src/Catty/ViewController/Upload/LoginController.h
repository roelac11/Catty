/**
 *  Copyright (C) 2010-2015 The Catrobat Team
 *  (http://developer.catrobat.org/credits)
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Affero General Public License as
 *  published by the Free Software Foundation, either version 3 of the
 *  License, or (at your option) any later version.
 *
 *  An additional term exception under section 7 of the GNU Affero
 *  General Public License, version 3, is available at
 *  (http://developer.catrobat.org/license_additional_term)
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU Affero General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General Public License
 *  along with this program.  If not, see http://www.gnu.org/licenses/.
 */

#import <UIKit/UIKit.h>
#import "BaseLoginController.h"
#import "CatrobatTableViewController.h"

@interface LoginController : BaseLoginController

@property (nonatomic, weak) CatrobatTableViewController * catTVC;
@property (nonatomic, weak) IBOutlet UITextField * usernameField;

@property (nonatomic, weak) IBOutlet UITextField * passwordField;

@property (weak, nonatomic) IBOutlet UITextField *emailField;

@property (nonatomic, weak) IBOutlet UIButton *loginButton;

@property (nonatomic, weak) IBOutlet UIButton * forgotButton;

@property (nonatomic, weak) IBOutlet UILabel * titleLabel;

@property (nonatomic, weak) IBOutlet UIImageView * headerImageView;

@property (nonatomic, weak) IBOutlet UILabel * infoLabel;

@property (weak, nonatomic) IBOutlet UIButton *termsOfUseButton;

@property (weak, nonatomic) IBOutlet UIButton *registerButton;
@end
