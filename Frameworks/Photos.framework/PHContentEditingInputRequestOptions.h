/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHContentEditingInputRequestOptions : NSObject {
    id /* block */ _canHandleAdjustmentData;
    BOOL _networkAccessAllowed;
    id /* block */ _progressHandler;
}

@property (nonatomic, copy) id /* block */ canHandleAdjustmentData;
@property (getter=isNetworkAccessAllowed, nonatomic) BOOL networkAccessAllowed;
@property (nonatomic, copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (id /* block */)canHandleAdjustmentData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isNetworkAccessAllowed;
- (id /* block */)progressHandler;
- (void)setCanHandleAdjustmentData:(id /* block */)arg1;
- (void)setNetworkAccessAllowed:(BOOL)arg1;
- (void)setProgressHandler:(id /* block */)arg1;

@end
