#pragma once

#include<string>
#include "SDL.h"
class Object2DProps
{
public:
	Object2DProps(std::string textureID, int xPos, int yPos, int width, int height, SDL_RendererFlip Rflip = SDL_FLIP_NONE) {
		this->textureID = textureID;
		this->xPos = xPos;
		this->yPos = yPos;
		this->width = width;
		this->height = height;
		this->RFlip = RFlip;
	}

	inline int getWidth() { return width; };
	inline int getHeight() { return height; };
	inline int getXPos() { return xPos; };
	inline int getYPos() { return yPos; };

	inline SDL_RendererFlip getRFlip() { return RFlip; };
	inline std::string getTextureID() { return textureID; };



private:
	int xPos;
	int yPos;
	int height;
	int width;
	std::string textureID;
	SDL_RendererFlip RFlip;
};

