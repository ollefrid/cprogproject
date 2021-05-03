#ifndef TILELAYER_H
#define TILELAYER_H

#include <vector>
#include <string>
//#include "Layer.h"
//#include "Vector2D.h"

/* Layer for tiles */

struct Tileset {
	std::string name, source;
	int tileWidth, tileHeight, tileCount;
	int numRows, numCols;
};

class TileLayer : public Layer {
	public:
		TileLayer(std::vector<std::vector<int>> tileIDs, Tileset tileset);
		virtual ~TileLayer() {};

		virtual void render();
		virtual void update();

		void setNumRows(numRows) { m_numRows = numRows; };
		void setNumCols(numCols) { m_numCols = numCols; };

	private:
		int m_numRows, m_numCols;
		Vector2D m_pos;
		Vector2D m_vel;
		std::vector<std::vector<int>> m_tileIDs;
		Tileset m_tileset;
};

#endif