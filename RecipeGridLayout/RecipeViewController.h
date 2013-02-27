//
//  RecipeViewController.h
//  RecipeGridLayout
//
//  Created by andre trosky on 27/02/13.
//  Copyright (c) 2013 andre trosky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeViewController : UIViewController
    
@property (weak, nonatomic) IBOutlet UIImageView *recipeImageView;
@property (weak, nonatomic) NSString *recipeImageName;

- (IBAction)close:(id)sender;

@end
