#include "ofApp.h"
#include "ofMain.h"

//========================================================================
int main(int argc, char** argv) {
  // Use OpenGL 4.1
  ofGLWindowSettings glSettings;
  glSettings.setSize(1024, 768);
  glSettings.windowMode = OF_WINDOW;
  glSettings.setGLVersion(4, 1);

  ofCreateWindow(glSettings);

  return ofRunApp(new ofApp());
}
