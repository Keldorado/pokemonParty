#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofLoadImage(image1, "Battle2.png");
    ofLoadImage(image2, "Ash2.png");
    ofLoadImage(image3, "Pikachu.png");
    
    
    
    
    

}

//--------------------------------------------------------------
void ofApp::update(){
    


}

//--------------------------------------------------------------
void ofApp::draw(){
    
    {
        image1.draw(0,0);
        float xPos = ofMap(sin(ofGetElapsedTimef()*200), -1, 1, 430, 440);
        image2.draw(460, 90, 200,200);
        image3.draw(xPos, 150, 150,150);
    }
    
    ofNoFill();
    ofBeginShape();
    for (int i = 0; i < 500; i++){
        
        float x = i;
        float noise = ofNoise(i/10.0);
        float y = ofMap(noise, 0,1, 0, 100);
        ofVertex(x,y);
    }
    ofEndShape();
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
