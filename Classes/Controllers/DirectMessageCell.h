//
//  DirectMessageCell.h
//  TwitterFon
//
//  Created by kaz on 12/17/08.
//  Copyright 2008 naan studio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DirectMessageCellView.h"
#import "DirectMessage.h"

@interface DirectMessageCell : UITableViewCell {
    DirectMessageCellView*  view;
}

- (void)setMessage:(DirectMessage*)message;

@end
