//
//  RendererAdapter.hpp
//  xcodeMakeWindow
//
//  Created by Amy Ollomani on 12/23/23.
//

#import "QuartzCore/CAMetalLayer.h"
#import "Metal/MTLDevice.h"
#import "renderer.hpp"

@interface RendererAdapter : NSObject
{
    renderer * _pRenderer;
    
}
-(void)draw:(id <CAMetalDrawable>) drawable device: (id <MTLDevice>) device;
@end

