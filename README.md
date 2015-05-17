*Description:*

Reverse and output a video file keeping the same compression, format, and frame rate as the source video.

*Usage:*

```
#import "AVUtilities.h"

AVAsset *originalAsset = [AVURLAsset initWithURL:[NSURL urlWithString:@"~/video.mp4"]];
AVAsset *reversedAsset = [AVUtilities reverseAssetWithAsset:originalAsset outputURL:@"~/reversedvideo.mp4"];
```

*Result:*

![alt tag](http://i.imgur.com/SmdiGL3.gif)
![alt tag](http://i.imgur.com/Xl8pjnl.gif)
