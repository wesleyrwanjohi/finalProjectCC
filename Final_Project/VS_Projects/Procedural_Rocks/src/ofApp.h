#pragma once

#include "ofMain.h"
#include "ofxGui.h"
using namespace glm;
class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		void resetCam();
		void animateSphereMesh(float noiseVal);

		ofEasyCam camera;
		ofLight keyLight;

		ofxPanel gui;
		ofParameter<float> lightX, lightY, lightZ, freq;

		ofSpherePrimitive sphere;
		ofMesh rock;

		int count;
		bool snapped;
		
		bool isAnimated;

		
		bool plusX, plusY, plusZ;
		
};
