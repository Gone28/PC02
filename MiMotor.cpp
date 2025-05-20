
#include <iostream>
#include "MainGame.h"

int main()
{
	MainGame game;
	game.run();
	system("PAUSE");
	

#include "GLTexture.h"
#include "ImageLoader.h"

GLTexture texture1 = ImageLoader::LoadPNG("resources/img1.png");
GLTexture texture2 = ImageLoader::LoadPNG("resources/img2.png");
GLTexture texture3 = ImageLoader::LoadPNG("resources/img3.png");
GLTexture texture4 = ImageLoader::LoadPNG("resources/img4.png");

glEnable(GL_TEXTURE_2D);

glBindTexture(GL_TEXTURE_2D, texture1.id);
glBegin(GL_QUADS);
glTexCoord2f(0.0f, 0.0f); glVertex2f(100, 100);    
glTexCoord2f(1.0f, 0.0f); glVertex2f(300, 100);
glTexCoord2f(1.0f, 1.0f); glVertex2f(300, 300);
glTexCoord2f(0.0f, 1.0f); glVertex2f(100, 300);
glEnd();

glBindTexture(GL_TEXTURE_2D, texture2.id);
glBegin(GL_QUADS);
glTexCoord2f(0.0f, 0.0f); glVertex2f(400, 100);    
glTexCoord2f(1.0f, 0.0f); glVertex2f(600, 100);
glTexCoord2f(1.0f, 1.0f); glVertex2f(600, 300);
glTexCoord2f(0.0f, 1.0f); glVertex2f(400, 300);
glEnd();

glBindTexture(GL_TEXTURE_2D, texture3.id);
glBegin(GL_QUADS);
glTexCoord2f(0.0f, 0.0f); glVertex2f(100, 350);    
glTexCoord2f(1.0f, 0.0f); glVertex2f(300, 350);
glTexCoord2f(1.0f, 1.0f); glVertex2f(300, 550);
glTexCoord2f(0.0f, 1.0f); glVertex2f(100, 550);
glEnd();

glBindTexture(GL_TEXTURE_2D, texture4.id);
glBegin(GL_QUADS);
glTexCoord2f(0.0f, 0.0f); glVertex2f(400, 350);    
glTexCoord2f(1.0f, 0.0f); glVertex2f(600, 350);
glTexCoord2f(1.0f, 1.0f); glVertex2f(600, 550);
glTexCoord2f(0.0f, 1.0f); glVertex2f(400, 550);
glEnd();
glDisable(GL_TEXTURE_2D);


    return 0;
}