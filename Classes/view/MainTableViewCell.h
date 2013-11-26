//
//  MainTableViewCell.h
//  SoundTransform
//
//  Created by hanchao on 13-11-22.
//  Copyright (c) 2013年 hanchao. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "MSCMoreOptionTableViewCell.h"

#import "MainViewController.h"

@class WaveTransMetadata;

//@protocol MainTableViewCellProtocol <NSObject>
//
//@required
//-(void)setMetadata:(WaveTransMetadata *)metadata;
//
//@end

@interface MainTableViewCell : MSCMoreOptionTableViewCell <MainViewControllerDelegate>

@property (nonatomic,retain) WaveTransMetadata *metadata;

@property (nonatomic,assign) CGFloat downloadProgress;

@property (nonatomic,retain) IBOutlet UILabel *fileNameLabel;
@property (nonatomic,retain) IBOutlet UILabel *createDateLabel;
@property (nonatomic,retain) IBOutlet UIButton *sendBeepBtn;
@property (nonatomic,retain) IBOutlet UILabel *receiveState;

@property (nonatomic,retain) IBOutlet UIView *sepraterView;
@property (nonatomic,retain) IBOutlet UIView *progressView;

@end



