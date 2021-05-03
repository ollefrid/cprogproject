#ifndef LAYER_H
#define LAYER_H


//Base class for layers (background, the layer with platforms, objects, etc.)
class Layer {
	public:
		virtual void update() = 0;
		virtual void render() = 0;
};

#endif#pragma once