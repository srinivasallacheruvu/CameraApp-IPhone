//
//  HelloWorldViewController.h
//  CameraPhoto
//
//  Created by Karthik on 10/05/13.
//  Copyright (c) 2013 Karthik. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController<UINavigationBarDelegate,UIImagePickerControllerDelegate>
@property (strong, nonatomic) IBOutlet UIImageView *imageview;
- (IBAction)Takephoto:(id)sender;

- (IBAction)Selectphoto:(id)sender;

@end
