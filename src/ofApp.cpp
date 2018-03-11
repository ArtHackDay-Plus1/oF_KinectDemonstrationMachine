#include "ofApp.h"

void ofApp::setup(){
    OSCSenderManager::setup();
    Model::update_values(-1,-1,-1);
    ofSetCircleResolution(64);

    bool logToConsole = true;
    bool logToScreen = true;

    //Log to console on screen, write log to data / log folder
    ofSetLoggerChannel(ofxSuperLog::getLogger(logToConsole,   logToScreen, "logs"));

    //Display on screen
    ofxSuperLog::getLogger()->setMaximized(true);

    ofBackground(25);
}

void ofApp::update(){
    OSCSenderManager::update();
}

void ofApp::draw(){
//    ofPushMatrix();
//    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);

    frame_edge_x_up = ofGetWidth()/2-MacroManager::scaling_frame_height/2 - ofGetWidth()/3;
    frame_edge_x_down = frame_edge_x_up + MacroManager::scaling_frame_height;

    frame_edge_y_up = ofGetHeight()/2-MacroManager::scaling_frame_width/2;
    frame_edge_y_down = frame_edge_y_up + MacroManager::scaling_frame_width;

    ofDrawRectangle(frame_edge_x_up,
                    frame_edge_y_up,
                    MacroManager::scaling_frame_height,
                    MacroManager::scaling_frame_width);

    ofDrawRectangle(frame_edge_x_down + MacroManager::scaling_distance_kinect_to_frame,
                    ofGetHeight()/2-MacroManager::scaling_kinect_width/2,
                    MacroManager::scaling_kinect_height,
                    MacroManager::scaling_kinect_width
                    );

//    ofPopMatrix();

    ofSetColor(175, 0, 0 ,127);
    ofDrawCircle(mouseX, mouseY, 5);
    ofSetColor(175, 0, 0 ,57);
    ofDrawCircle(mouseX, mouseY, 200);
    ofSetColor(255);
    ofDrawLine(mouseX,
               mouseY,
               frame_edge_x_down + MacroManager::scaling_distance_kinect_to_frame,
               ofGetHeight()/2);
    ofDrawLine(mouseX, mouseY, frame_edge_x_down, mouseY);

    ofDrawBitmapString("nearest_x : "+ofToString(Model::nearest_x), frame_edge_x_down, mouseY-5);
    ofDrawBitmapString("nearest_depth : "+ofToString(Model::nearest_depth), frame_edge_x_down, mouseY+5);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == OF_KEY_UP){
        Model::num_of_people++;
    }else if(key == OF_KEY_DOWN){
        Model::num_of_people--;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

void ofApp::mouseMoved(int x, int y){
    float nearest_x = ofMap(y, frame_edge_y_up , frame_edge_y_down ,MacroManager::frame_width ,0);
    float nearest_depth = ofMap(x-frame_edge_x_down, 0, MacroManager::scaling_distance_kinect_to_frame,0,MacroManager::distance_kinect_to_frame);
    Model::update_values(nearest_x,  nearest_depth);
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}

