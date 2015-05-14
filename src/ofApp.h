#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
    
    ofTexture image1,image2,image3, image4, image5;
    float yLoc;
		
};
