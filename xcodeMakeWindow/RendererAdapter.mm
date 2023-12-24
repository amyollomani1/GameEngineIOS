//
//  RendererAdapter.cpp
//  xcodeMakeWindow
//
//  Created by Amy Ollomani on 12/23/23.
//

#include "RendererAdapter.h"

@implementation RendererAdapter
-(void) draw: (id<CAMetalDrawable>) drawable device: (id <MTLDevice>) device
{
    _pRenderer = new renderer((__bridge CA::MetalDrawable *) drawable, (__bridge MTL::Device *)device);
    _pRenderer->draw();
}
-(void)dealloc
{
    delete _pRenderer;
}
@end
