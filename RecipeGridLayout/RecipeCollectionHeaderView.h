//
//  RecipeCollectionHeaderView.h
//  RecipeGridLayout
//
//  Created by andre trosky on 27/02/13.
//  Copyright (c) 2013 andre trosky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeCollectionHeaderView : UICollectionReusableView

@property (weak, nonatomic) IBOutlet UIImageView *backgroundImage;
@property (weak, nonatomic) IBOutlet UILabel *title;

@end
