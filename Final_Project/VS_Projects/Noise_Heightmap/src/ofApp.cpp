#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	
	//shader.load("base.vert", "ch10_2dRandom.frag");
	shader.load("base.vert", "ch13_fbm.frag");
	//shader.load("base.vert", "ch11_simplexNoise.frag");
	//shader.load("base.vert", "ch13_fbm.frag");
	numOctaves = 8;
	multiplier = 3.0;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	shader.begin();
	shader.setUniform2f("u_resolution", ofGetWidth() , ofGetHeight());
	shader.setUniform2f("u_mouse", ofGetMouseX(), ofGetHeight() - ofGetMouseY());
	shader.setUniform1f("u_time", ofGetElapsedTimef());
	shader.setUniform1i("numOctaves", numOctaves);
	shader.setUniform1f("multiplier", multiplier);
	ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
	shader.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

	if (key == 'o') {
		multiplier -= 0.5;
	}

	if (key == 'p') {
		multiplier += 0.5;
	}

	if (key == 'x') {
		heightmap.grabScreen(0, 0, 512, 512);
		heightmap.save("heightmap6.png");
	}
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
