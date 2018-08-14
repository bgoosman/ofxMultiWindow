#include "ofMain.h"
#include "ofApp.h"
#include "MultiWindow.h"

//========================================================================
int main( ){
	ofGLFWWindowSettings settings;

	settings.width = 600;
	settings.height = 600;
	settings.setPosition(ofVec2f(300,0));
	settings.resizable = true;
	shared_ptr<ofAppBaseWindow> mainWindow = ofCreateWindow(settings);

	settings.width = 300;
	settings.height = 300;
	settings.setPosition(ofVec2f(0,0));
	settings.resizable = false;
	shared_ptr<ofAppBaseWindow> multiWindowApp = ofCreateWindow(settings);

	shared_ptr<ofApp> mainApp(new ofApp);
	shared_ptr<MultiWindow> multiWindow(new MultiWindow);

	ofRunApp(multiWindowApp, multiWindow);
	ofRunApp(mainWindow, mainApp);
	ofRunMainLoop();
}
