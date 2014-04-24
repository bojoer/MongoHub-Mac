//
//  MHQueryWindowController.h
//  MongoHub
//
//  Created by Syd on 10-4-28.
//  Copyright 2010 ThePeppersStudio.COM. All rights reserved.
//

#import "MHTabItemViewController.h"

@class DatabasesArrayController;
@class MHResultsOutlineViewController;
@class MODServer;
@class MODCollection;
@class MHConnectionStore;

@interface MHQueryWindowController : MHTabItemViewController
{
    DatabasesArrayController *databasesArrayController;
    MHResultsOutlineViewController              *_findResultsViewController;
    IBOutlet NSOutlineView                      *_findResultsOutlineView;
    MODCollection *_mongoCollection;
    MHConnectionStore *_connectionStore;
    NSMutableDictionary *_jsonWindowControllers;
    
    IBOutlet NSTabView *tabView;
    IBOutlet NSSegmentedControl *segmentedControl;
    
    IBOutlet NSComboBox *_criteriaComboBox;
    IBOutlet NSTokenField *_fieldsTextField;
    IBOutlet NSTextField *_skipTextField;
    IBOutlet NSTextField *_limitTextField;
    IBOutlet NSTextField *_sortTextField;
    IBOutlet NSTextField *totalResultsTextField;
    IBOutlet NSTextField *findQueryTextField;
    IBOutlet NSProgressIndicator *findQueryLoaderIndicator;
    IBOutlet NSButton                           *_findRemoveButton;
    
    IBOutlet NSButton                           *_insertButton;
    IBOutlet NSTextView                         *_insertDataTextView;
    IBOutlet NSTextField                        *_insertResultsTextField;
    IBOutlet NSProgressIndicator                *_insertLoaderIndicator;
    
    IBOutlet NSButton                           *_updateButton;
    IBOutlet NSTextField                        *_updateCriteriaTextField;
    IBOutlet NSTextField                        *_updateUpdateTextField;
    IBOutlet NSButton                           *_updateUpsetCheckBox;
    IBOutlet NSButton                           *_updateMultiCheckBox;
    IBOutlet NSTextField                        *_updateResultsTextField;
    IBOutlet NSTextField                        *_updateQueryTextField;
    IBOutlet NSProgressIndicator                *_updateQueryLoaderIndicator;
    
    IBOutlet NSButton                           *_removeButton;
    IBOutlet NSTextField                        *_removeCriteriaTextField;
    IBOutlet NSTextField                        *_removeResultsTextField;
    IBOutlet NSTextField                        *_removeQueryTextField;
    IBOutlet NSProgressIndicator                *_removeQueryLoaderIndicator;
    
    IBOutlet NSTextField                        *_indexTextField;
    MHResultsOutlineViewController              *_indexesOutlineViewController;
    IBOutlet NSOutlineView                      *_indexOutlineView;
    IBOutlet NSProgressIndicator                *_indexLoaderIndicator;
    IBOutlet NSButton                           *_indexDropButton;
    IBOutlet NSButton                           *_indexCreateButton;
    
    IBOutlet NSTextView *mapFunctionTextView;
    IBOutlet NSTextView *reduceFunctionTextView;
    IBOutlet NSTextField *mrcriticalTextField;
    IBOutlet NSTextField *mroutputTextField;
    IBOutlet NSProgressIndicator *mrLoaderIndicator;
    MHResultsOutlineViewController              *_mrOutlineViewController;
    IBOutlet NSOutlineView                      *_mrOutlineView;
    
    IBOutlet NSTextField *expCriticalTextField;
    IBOutlet NSTokenField *expFieldsTextField;
    IBOutlet NSTextField *expSkipTextField;
    IBOutlet NSTextField *expLimitTextField;
    IBOutlet NSTextField *expSortTextField;
    IBOutlet NSTextField *expResultsTextField;
    IBOutlet NSTextField *expPathTextField;
    IBOutlet NSPopUpButton *expTypePopUpButton;
    IBOutlet NSTextField *expQueryTextField;
    IBOutlet NSButton *expJsonArrayCheckBox;
    IBOutlet NSProgressIndicator *expProgressIndicator;
    
    IBOutlet NSButton *impIgnoreBlanksCheckBox;
    IBOutlet NSButton *impDropCheckBox;
    IBOutlet NSButton *impHeaderlineCheckBox;
    IBOutlet NSTokenField *impFieldsTextField;
    IBOutlet NSTextField *impResultsTextField;
    IBOutlet NSTextField *impPathTextField;
    IBOutlet NSPopUpButton *impTypePopUpButton;
    IBOutlet NSButton *impJsonArrayCheckBox;
    IBOutlet NSButton *impStopOnErrorCheckBox;
    IBOutlet NSProgressIndicator *impProgressIndicator;
}

@property (nonatomic, retain) DatabasesArrayController *databasesArrayController;
@property (nonatomic, retain, readwrite) MODCollection *mongoCollection;
@property (nonatomic, retain, readwrite) MHConnectionStore *connectionStore;

@property (nonatomic, retain) NSTokenField *fieldsTextField;
@property (nonatomic, retain) NSTextField *skipTextField;
@property (nonatomic, retain) NSTextField *limitTextField;
@property (nonatomic, retain) NSTextField *totalResultsTextField;
@property (nonatomic, retain) NSTextField *findQueryTextField;
@property (nonatomic, retain) NSProgressIndicator *findQueryLoaderIndicator;

@property (nonatomic, retain) NSTextView *mapFunctionTextView;
@property (nonatomic, retain) NSTextView *reduceFunctionTextView;
@property (nonatomic, retain) NSTextField *mrcriticalTextField;
@property (nonatomic, retain) NSTextField *mroutputTextField;
@property (nonatomic, retain) NSProgressIndicator *mrLoaderIndicator;

@property (nonatomic, retain) NSTextField *expCriticalTextField;
@property (nonatomic, retain) NSTokenField *expFieldsTextField;
@property (nonatomic, retain) NSTextField *expSkipTextField;
@property (nonatomic, retain) NSTextField *expLimitTextField;
@property (nonatomic, retain) NSTextField *expSortTextField;
@property (nonatomic, retain) NSTextField *expResultsTextField;
@property (nonatomic, retain) NSTextField *expPathTextField;
@property (nonatomic, retain) NSPopUpButton *expTypePopUpButton;
@property (nonatomic, retain) NSTextField *expQueryTextField;
@property (nonatomic, retain) NSButton *expJsonArrayCheckBox;
@property (nonatomic, retain) NSProgressIndicator *expProgressIndicator;

@property (nonatomic, retain) NSButton *impIgnoreBlanksCheckBox;
@property (nonatomic, retain) NSButton *impDropCheckBox;
@property (nonatomic, retain) NSButton *impHeaderlineCheckBox;
@property (nonatomic, retain) NSTokenField *impFieldsTextField;
@property (nonatomic, retain) NSTextField *impResultsTextField;
@property (nonatomic, retain) NSTextField *impPathTextField;
@property (nonatomic, retain) NSPopUpButton *impTypePopUpButton;
@property (nonatomic, retain) NSButton *impJsonArrayCheckBox;
@property (nonatomic, retain) NSButton *impStopOnErrorCheckBox;
@property (nonatomic, retain) NSProgressIndicator *impProgressIndicator;

+ (id)loadQueryController;

- (IBAction)segmentedControlAction:(id)sender;
- (IBAction)findQuery:(id)sender;
- (IBAction)expandFindResults:(id)sender;
- (IBAction)collapseFindResults:(id)sender;
- (IBAction)updateQuery:(id)sender;
- (IBAction)removeQuery:(id)sender;
- (IBAction)insertQuery:(id)sender;
- (IBAction)indexQuery:(id)sender;
- (IBAction)ensureIndex:(id)sender;
- (IBAction)reIndex:(id)sender;
- (IBAction)dropIndex:(id)sender;
- (IBAction) mapReduce:(id)sender;
- (IBAction)removeRecord:(id)sender;

- (IBAction)findQueryComposer:(id)sender;
- (IBAction)updateQueryComposer:(id)sender;
- (IBAction)removeQueryComposer:(id)sender;
- (IBAction) exportQueryComposer:(id)sender;

- (void)showEditWindow:(id)sender;
- (void)jsonWindowWillClose:(id)sender;

- (IBAction)chooseExportPath:(id)sender;
- (IBAction)chooseImportPath:(id)sender;
//- (mongo::BSONObj)parseCSVLine:(char *)line type:(int)_type sep:(const char *)_sep headerLine:(bool)_headerLine ignoreBlanks:(bool)_ignoreBlanks fields:(std::vector<std::string> &)_fields;
@end
