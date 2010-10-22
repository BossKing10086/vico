@class ViDocument;
@class ViDocumentView;

@interface ViDocumentTabController : NSObjectController
{
	NSSplitView *splitView;
	NSMutableArray	*views;
}

@property(readonly) NSArray *views;

- (id)initWithDocumentView:(ViDocumentView *)initialDocumentView;
- (void)addView:(ViDocumentView *)docView;
- (NSView *)view;
- (ViDocumentView *)splitView:(ViDocumentView *)docView vertically:(BOOL)isVertical;
- (ViDocumentView *)replaceDocumentView:(ViDocumentView *)docView withDocument:(ViDocument *)document;
- (void)closeDocumentView:(ViDocumentView *)docView;
- (NSSet *)documents;

@end

