#include "cgvTexture.h"

// Constructor and destructor methods

cgvTexture::cgvTexture(unsigned char *file, unsigned int w, unsigned int h) {
	
	
	glGenTextures(1, &idTexture);
	glBindTexture(GL_TEXTURE_2D, idTexture);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, w, h, 0, GL_RGB, GL_UNSIGNED_BYTE, file);
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE/*GL_REPLACE*/);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	
	
}

void cgvTexture::apply(void) {
  glBindTexture(GL_TEXTURE_2D, idTexture);
  
}

cgvTexture::~cgvTexture() {
  glDeleteTextures(1, &idTexture); 
}
