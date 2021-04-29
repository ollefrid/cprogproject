#pragma once
#include "Object.h"
#include "Object2DProps.h"
//#include "Vector2D.h"

class Object2D : public Object
{
public:

	// beh�vs dessa d� de finns i superklassen???
	virtual void draw() = 0;
	virtual void update() = 0;
	virtual void clean() = 0;

protected:
	int m_width;
	int m_height;
	
	//Vector2D m_pos;
};

