//
//  Comment+CoreDataProperties.h
//  InstagramClone
//
//  Created by Richard Velazquez on 4/7/16.
//  Copyright © 2016 Team4. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Comment.h"

NS_ASSUME_NONNULL_BEGIN

@interface Comment (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *commentText;
@property (nullable, nonatomic, retain) NSDate *commentTimestamp;
@property (nullable, nonatomic, retain) User *user;
@property (nullable, nonatomic, retain) Photo *photo;

@end

NS_ASSUME_NONNULL_END
