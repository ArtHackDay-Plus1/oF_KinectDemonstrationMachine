//
//  OSCSenderManager.hpp
//  oF_OscSenderSample
//
//  Created by HirokiNaganuma on 2018/03/11.
//

#ifndef OSCSenderManager_hpp
#define OSCSenderManager_hpp

#include "ofMain.h"
#include "ofxOsc.h"
#include "MacroManager.hpp"
#include "Model.hpp"

class OSCSenderManager{
public:

    //OSC message sender
    static ofxOscSender sender;

    static void setup();
    static void update();
};

#endif /* OSCSenderManager_hpp */
