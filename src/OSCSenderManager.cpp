//
//  OSCSenderManager.cpp
//  oF_OscSenderSample
//
//  Created by HirokiNaganuma on 2018/03/11.
//

#include "OSCSenderManager.hpp"

ofxOscSender OSCSenderManager::sender;

//--------------------------------------------------------------
void OSCSenderManager::setup(){
    sender.setup(MacroManager::osc_sender_ip, MacroManager::osc_sender_port_num);
}

//--------------------------------------------------------------
void OSCSenderManager::update(){

    if(ofGetElapsedTimeMillis()%1000 < 200){

        //osc message instance
        ofxOscMessage m;

        //set osc address
        m.setAddress("/data");

        //set current mouse position as OSC arguments
        m.addIntArg(Model::nearest_x);
        m.addIntArg(Model::nearest_depth);
        m.addIntArg(Model::num_of_people);

        //send message
        sender.sendMessage(m);

        ofLog() << "nearest_x : " <<"[" <<Model::nearest_x << "]";
        ofLog() << "nearest_depth : " <<"[" <<Model::nearest_depth << "]";
        ofLog() << "num_of_people : " <<"[" <<Model::num_of_people << "]";
    }
}

