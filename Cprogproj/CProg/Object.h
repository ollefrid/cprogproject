#pragma once
class Object
{
public:
	virtual void draw() = 0;
	virtual void update() = 0;
	virtual void clean() = 0;
};

