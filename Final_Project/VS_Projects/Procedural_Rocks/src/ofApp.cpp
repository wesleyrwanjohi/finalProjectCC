#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofEnableNormalizedTexCoords();
	ofSetBackgroundColor(0);

	camera.setPosition(vec3(20.0, 50.0, 240.0));

	camera.setFov(35.0);
	camera.setAutoDistance(false);

	

	gui.setup();

	gui.add(lightX.set("lightX", 120.0, -4000.0, 4000.0));
	gui.add(lightY.set("lightY", 100.0, -4000.0, 4000.0));
	gui.add(lightZ.set("lightZ", 120.0, -4000.0, 4000.0));
	gui.add(freq.set("frequency", 0.2, 0.005, 1.5));

	keyLight.setDiffuseColor(ofFloatColor(1.0, 1.0, 1.0));
	keyLight.setSpecularColor(keyLight.getDiffuseColor());

	sphere.setResolution(8);
	rock = sphere.getMesh(); //gets mesh data of sphere primitive
	isAnimated = false;

	
}

//--------------------------------------------------------------
void ofApp::update(){
	keyLight.setPosition(vec3(lightX, lightY, lightZ)); //updating x y and z positions of light
	float noiseVal = 0;
	noiseVal = ofRandom(0.5); //noise arguments need to be between 0 and 1
	if (isAnimated == true) {
		animateSphereMesh(noiseVal);
	}
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofEnableDepthTest();
	camera.begin();
	ofEnableLighting();
	keyLight.enable();


	rock.drawWireframe();

	keyLight.disable();
	ofDisableLighting();
	camera.end();

	ofDisableDepthTest();
	gui.draw();
}

void ofApp::resetCam() {
	//resets camera position to default
	camera.setPosition(vec3(20.0, 50.0, 240.0));
	camera.setTarget(vec3(0.0, -30, 0.0));
	camera.setFov(35.0);
	camera.setAutoDistance(false);

}

void ofApp::animateSphereMesh(float noiseVal) {
	 
	//float amplitude = 2.0;
	float time = ofGetElapsedTimef();

	vector<vec3> &verts = rock.getVertices(); //passing vertex data of rock by reference

	float xMult = 0.05;
	float yMult = 0.01;
	float zMult = 0.02;

	//offsetting the x y and z positions of all vertexes by a random amount -- using ofNoise
	for (unsigned int i = 0; i < verts.size(); i++) {
		if (plusX != true) {
			verts[i].x += sin(freq * time * ofNoise(noiseVal*verts[i].x)*xMult);
		}
		else {
			verts[i].x -= sin(freq * time * ofNoise(noiseVal*verts[i].x)*xMult);
		}
		if (plusY != true) {
			verts[i].y += sin(freq * time * ofNoise(noiseVal*verts[i].y)*yMult);
		}
		else {
			verts[i].y -= sin(freq * time * ofNoise(noiseVal*verts[i].y)*yMult);
		}
		if (plusZ != true) {
			verts[i].z += sin(freq * time * ofNoise(noiseVal*verts[i].z)*zMult);
		}
		else {
			verts[i].z -= sin(freq * time * ofNoise(noiseVal*verts[i].z)*zMult);
		}
		
	}
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){

	if (key == 'r') {
		resetCam();
	}

	if (key == ' ') {
		isAnimated = !isAnimated; //press space to begin and pause the vertex animation
	}

	if (key == 's') {
		snapped = true;

	}
	//if snapped is true .ply file is saved 
	if (snapped == true) {
		string filename = "rock_" + ofToString(count, 3, '3') + ".ply"; //creates dynamic filename -- new filename each time 'snapped' is true
		rock.save(filename);
		count++;
	}

	if (key == 'x') {
		plusX = !plusX;
	}
	if (key == 'y') {
		plusY = !plusY;
	}
	if (key == 'z') {
		plusZ = !plusZ;
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
