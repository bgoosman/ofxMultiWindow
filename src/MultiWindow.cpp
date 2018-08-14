#include "MultiWindow.h"

void MultiWindow::setup() {
    ofBackground(0);
    ofSetVerticalSync(false);
}

void MultiWindow::update() {

}

void MultiWindow::draw() {
    ofSetColor(ofColor::aquamarine);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
}
