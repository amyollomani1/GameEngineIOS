//
//  ViewController.m
//  xcodeMakeWindow
//
//  Created by Amy Ollomani on 12/23/23.
//

#import "ViewController.h"
#import "RendererAdapter.h"

@implementation ViewController{
    MTKView * _view;
    RendererAdapter * _pRendererAdapter;
}

- (void)viewDidLoad {
    [super viewDidLoad];

    // Do any additional setup after loading the view.

    _view = (MTKView *)self.view;
    //assigns gpu to device?
    _view.device = MTLCreateSystemDefaultDevice();
    _pRendererAdapter = [RendererAdapter alloc];
    [_pRendererAdapter draw:_view.currentDrawable device:_view.device];


}


@end
