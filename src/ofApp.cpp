#include "ofApp.h"

void ofApp::setup(){
    OSCSenderManager::setup();
    Model::update_values(-1,-1,-1);
}

void ofApp::update(){
    OSCSenderManager::update();
}

void ofApp::draw(){
}

void ofApp::mouseMoved(int x, int y){
    Model::update_values(x,y,int(ofRandom(0,3)));
}

void ofApp::mousePressed(int x, int y, int button){

}

void ofApp::mouseReleased(int x, int y, int button){

}
