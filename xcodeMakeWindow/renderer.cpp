//
//  renderer.cpp
//  xcodeMakeWindow
//
//  Created by Amy Ollomani on 12/23/23.
//

#define NS_PRIVATE_IMPLEMENTATION
#define CA_PRIVATE_IMPLEMENTATION
#define MTL_PRIVATE_IMPLEMENTATION

#include "renderer.hpp"
#include  <iostream>

renderer::renderer(CA::MetalDrawable * const pDrawable, MTL::Device * const pDevice)
: _pDrawable(pDrawable),
_pDevice(pDevice),
_pCommandQueue(_pDevice->newCommandQueue())
{}

renderer::~renderer()
{
    _pCommandQueue->release();
}
void renderer::draw() const
{
    std::cout << "Hello World!" << std::endl;
}
