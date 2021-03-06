//
//  UICollectionView+IndexPath.h
//  MiYaApp
//
//  Created by 邵峰 on 2016/5/18.
//  Copyright © 2017年 邵峰. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UICollectionView (IndexPath)

/**
 *  设置某一indexPath，用于记录
 *
 *  @param indexPath 目标indexPath
 */
-(void)setCurrentIndexPath:(NSIndexPath*)indexPath;


/**
 *  获取上述方法某一indexPath，把记录起来的拿回来用
 *
 *  @return 返回记录的indexPath
 */
-(NSIndexPath *)currentIndexPath;

@end
