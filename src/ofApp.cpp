#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //loads all of our images
    ofLoadImage(image1, "Battle2.png");
    ofLoadImage(image2, "Ash2.png");
    ofLoadImage(image3, "Pikachu.png");
    ofLoadImage(image4, "pokeball.png");
    ofLoadImage(image5, "blastoise1.png");
    
    //the y location of blastoise 
    yLoc = 260;

}

//--------------------------------------------------------------
void ofApp::update(){
    


}

//--------------------------------------------------------------
void ofApp::draw(){
    
    image1.draw(0,0); //draws the first image starting at 0,0
    float xPos = ofMap(sin(ofGetElapsedTimef()*200), -1, 1, 430, 440); //creates the motion/location for pikachu
    image2.draw(460, 90, 200,200); //draws image2 at 460,90
    image3.draw(xPos, 150, 150,150); //draws image3 at xPos and 150
    image5.draw(10, yLoc, 170*1.5,185*1.5); //draws image5 at 10,260
    
    ofPushMatrix(); //pushes the matrix
    ofTranslate(360,300); //translates the image to 360,399
    ofRotate(ofGetElapsedTimef()*1000); //rotates the pokeball
    image4.draw(-40,-40,80,80); //draws and sizes the pokeball
    ofPopMatrix();//pops the matrix

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key=='s')
    {
        yLoc+=10; //allows the y location of blastoise to be moved down ie causes him to faint.
    }

}
