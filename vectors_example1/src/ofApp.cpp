#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    circleResolutions.push_back(9);
    circleResolutions.push_back(7);
    circleResolutions.push_back(3);
    circleResolutions.push_back(11);
    circleResolutions.push_back(10);
    circleResolutions.push_back(5);
    circleResolutions.push_back(8);
    circleResolutions.push_back(11);
    circleResolutions.push_back(7);
    circleResolutions.push_back(5);

    
    circleHeights.push_back(0);
    circleHeights.push_back(-4.83387);
    circleHeights.push_back(16.0174);
    circleHeights.push_back(-19.3251);
    circleHeights.push_back(36.938);
    circleHeights.push_back(-43.8679);
    circleHeights.push_back(-51.8467);
    circleHeights.push_back(-59.2677);
    circleHeights.push_back(37.3511);
    circleHeights.push_back(63.0059);
    
    circleColors.push_back(ofColor::aliceBlue);
    circleColors.push_back(ofColor::bisque);
    circleColors.push_back(ofColor::chartreuse);
    circleColors.push_back(ofColor::darkGoldenRod);
    circleColors.push_back(ofColor::fireBrick);
    circleColors.push_back(ofColor::gainsboro);
    circleColors.push_back(ofColor::hotPink);
    circleColors.push_back(ofColor::indianRed);
    circleColors.push_back(ofColor::khaki);
    circleColors.push_back(ofColor::lemonChiffon);
    
    studentNames.push_back("Wen Zhiyang");
    studentNames.push_back("Liu Zhijian");
    studentNames.push_back("Jin Kaihui");
    studentNames.push_back("Li Tong");
    studentNames.push_back("Zhou Lei");
    studentNames.push_back("Zhang Lu");
    studentNames.push_back("Hu Yingying");
    studentNames.push_back("You Long");
    studentNames.push_back("Zhang Yi");
    studentNames.push_back("Xia Hang");

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float radius = 25;
    ofSetColor(0);
    
    
    //draw 10 circles using circle resolutions from our vector
    float yPos = ofGetHeight()/5;
    
    for (int i = 0; i < circleResolutions.size(); i++){
        ofSetCircleResolution(circleResolutions[i]);
        float x = (i+1) * radius * 3.0;
        float y = yPos;
        ofCircle(x, y, radius);
    }
    ofSetCircleResolution(22); //set it back to default
    
    
    //draw 10 circles using circle heights from our vector
    yPos = ofGetHeight()/5 * 2;
    
    for (int i = 0; i < circleHeights.size(); i++){
        float x = (i+1) * radius * 3.0;
        float y = yPos + circleHeights[i];
        ofCircle(x, y, radius);
    }
    
    //draw 10 circles using circle colors from our vector
    yPos = ofGetHeight()/5 * 3;
    
    for (int i = 0; i < circleColors.size(); i++){
        ofSetColor(circleColors[i]);
        float x = (i+1) * radius * 3.0;
        float y = yPos;
        ofCircle(x, y, radius);
    }
    
    //draw 10 circles using data from all three of our vectors
    yPos = ofGetHeight()/5 * 4;
    
    for (int i = 0; i < circleColors.size(); i++){
        ofSetColor(circleColors[i]);
        ofSetCircleResolution(circleResolutions[i]);
        float x = (i+1) * radius * 3.0;
        float y = yPos + circleHeights[i];
        ofCircle(x, y, radius);
    }

    
    //names
    ofSetColor(0);
    float x = (circleColors.size()+1) * radius * 3.0;
    for (int i = 0; i < studentNames.size(); i++){
        float y = ofGetHeight()/5 + ofGetHeight()/13 * i;
        ofDrawBitmapString(studentNames[i], x, y);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}