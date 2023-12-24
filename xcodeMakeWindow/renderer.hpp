//
//  renderer.hpp
//  xcodeMakeWindow
//
//  Created by Amy Ollomani on 12/23/23.
//

#include "Metal/Metal.hpp"
#include "QuartzCore/CAMetalDrawable.hpp"

class renderer{
public:
    renderer(CA::MetalDrawable *const pDrawable, MTL::Device *const pDevices);
    ~renderer();
    void draw() const;
private:
    CA::MetalDrawable * _pDrawable;
    MTL::Device * const _pDevice;
    MTL::CommandQueue * const _pCommandQueue;
};

