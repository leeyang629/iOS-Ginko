//
//  ContactCell.m
//  Ginko
//
//  Created by Qi Song on 29/3/14.
//  Copyright (c) 2014 Qi Song. All rights reserved.
//
// --- Headers ---;
#import "DoubleTileViewCell.h"

// --- Defines ---;
// ContactCell Class;
@implementation DoubleTileViewCell

@synthesize profileImageView;
@synthesize firstName;
@synthesize lastName;
@synthesize contactBut;
@synthesize phoneBut;

@synthesize delegate;
@synthesize sessionId;
@synthesize contactId;

- (void)awakeFromNib
{
    [super awakeFromNib];
    profileImageView.layer.cornerRadius = 3.0f;
    profileImageView.layer.masksToBounds = YES;
    profileImageView.layer.borderColor = [UIColor colorWithRed:128.0/256.0 green:100.0/256.0 blue:162.0/256.0 alpha:1.0f].CGColor;
    profileImageView.layer.borderWidth = 1.0f;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];
}

- (void)onChat:(id)sender
{
    [delegate viewChat:sessionId contactId:contactId];
}

@end
