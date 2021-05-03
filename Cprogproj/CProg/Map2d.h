#ifndef MAP2D_H
#define MAP2D_H

#include <vector>
#include <string>
//#include "Layer.h"

class Map2d {
	public:
		Map2d() {};
		~Map2d() {};

		void update();
		void render();
		
		//inline std::vector<Layer*> getLayers() { return m_layers; }

	private:
		friend class MapParser;
		//std::vector<Layer*> m_layers;
			
};

#endif