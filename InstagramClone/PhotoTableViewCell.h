//
//  PhotoTableViewCell.h
//  InstagramClone
//
//  Created by Richard Velazquez on 4/9/16.
//  Copyright © 2016 Team4. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NewTextView.h"

@protocol PhotoTableViewCellDelegate
-(void)didTapZoom:(UIButton *)button;
-(void)didWanttoSeeComments:(UIButton *)button;
-(void)photoLiked:(UIButton *)button;

@end



@interface PhotoTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *photoImageView;
@property (weak, nonatomic) IBOutlet UIImageView *profileImageView;
@property (weak, nonatomic) IBOutlet UIButton *userNameButtonOutlet;
@property (weak, nonatomic) IBOutlet UIButton *locationButtonOutlet;
@property (weak, nonatomic) IBOutlet UIButton *viewCommentButton;

@property (weak, nonatomic) IBOutlet NewTextView *pictureDescription;
@property (weak, nonatomic) IBOutlet UILabel *likeCount;
@property (weak, nonatomic) IBOutlet UILabel *datePosted;
@property (weak, nonatomic ) UITapGestureRecognizer *imageTapped;

@property (nonatomic, assign) id <PhotoTableViewCellDelegate> delegate;
@property (weak, nonatomic) IBOutlet UIButton *commentButton;
@property (weak, nonatomic) IBOutlet UIButton *heartButton;

@end
