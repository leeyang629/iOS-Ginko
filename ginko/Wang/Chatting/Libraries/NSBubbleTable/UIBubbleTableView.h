//
//  UIBubbleTableView.h
//
//  Created by Alex Barinov
//  Project home page: http://alexbarinov.github.com/UIBubbleTableView/
//
//  This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
//  To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/
//

#import <UIKit/UIKit.h>

#import "UIBubbleTableViewDataSource.h"
#import "UIBubbleTableViewCell.h"

@protocol BubbleTableDelegate <NSObject>

-(void)checkAction:(NSString*)msgid :(int)status;
-(void)profileAction:(NSString*)userid;

@end

typedef enum _NSBubbleTypingType
{
    NSBubbleTypingTypeNobody = 0,
    NSBubbleTypingTypeMe = 1,
    NSBubbleTypingTypeSomebody = 2
} NSBubbleTypingType;

@interface UIBubbleTableView : UITableView <UITableViewDelegate, UITableViewDataSource,BubbleCellDelegate>
{
}

@property (nonatomic, assign) IBOutlet id<UIBubbleTableViewDataSource> bubbleDataSource;
@property (nonatomic, assign) IBOutlet id<BubbleTableDelegate> bubbledelegate;

@property (nonatomic, retain) NSMutableArray *lstSelected;

@property (nonatomic) NSTimeInterval snapInterval;
@property (nonatomic) NSBubbleTypingType typingBubble;
@property (nonatomic) BOOL showAvatars;
@property (nonatomic) BOOL bEdit;

- (void) scrollBubbleViewToBottomAnimated:(BOOL)animated;

@end
