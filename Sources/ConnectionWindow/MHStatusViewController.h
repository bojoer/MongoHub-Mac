//
//  MHStatusViewController.h
//  MongoHub
//
//  Created by Jérôme Lebel on 02/12/11.
//

#import "MHTabItemViewController.h"

@class MHResultsOutlineViewController, MODClient, MHConnectionStore, MHDatabaseItem, MHCollectionItem, MODQuery;

@interface MHStatusViewController : MHTabItemViewController
{
    IBOutlet MHResultsOutlineViewController     *_resultsOutlineViewController;
    MODClient                                   *_client;
    MHConnectionStore                           *_connectionStore;
}

@property (nonatomic, retain, readwrite) MODClient *client;
@property (nonatomic, retain, readwrite) MHConnectionStore *connectionStore;

+ (MHStatusViewController *)loadNewViewController;

- (MODQuery *)showServerStatus;
- (MODQuery *)showDatabaseStatusWithDatabaseItem:(MHDatabaseItem *)databaseItem;
- (MODQuery *)showCollectionStatusWithCollectionItem:(MHCollectionItem *)collectionItem;

@end
