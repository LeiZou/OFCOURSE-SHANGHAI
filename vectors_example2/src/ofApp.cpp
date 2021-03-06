#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetColor(0);
    ofNoFill();
}

//--------------------------------------------------------------
void ofApp::update(){
//    for (int i = 0; i < trail.size(); i++){
//        if (i % 5 == 0) {
//            trail[i].y = trail[i].y + 1;
//        }
//        
//        if (i % 5 == 1) {
//            trail[i].y = trail[i].y - 1;
//        }
//    }
    
    if (trail.size() > 20) {
        trail.erase(trail.begin());
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    if (trail.size() > 0){ //makes sure our vector's not empty
//        ofBeginShape();
//        for (int i = 0; i < trail.size(); i++){
//            ofVertex(trail[i]);
//        }
//        ofEndShape();
        for (int i = 0; i < trail.size(); i++){
            ofSetColor(col[i]);
            ofCircle(trail[i], 10);
        }
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
    trail.push_back(ofPoint(x, y));
    col.push_back(ofColor(ofRandom(255), 0, 100));
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
//    trail.clear();
//    col.clear();
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
