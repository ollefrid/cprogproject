#ifndef MAPPARSER_H
#define MAPPARSER_H

#include <vector>
#include <string>

#include "Map2d.h"
//#include "TileLayer.h"


class MapParser {
public:
	MapParser() {};
	~MapParser() {};

	Map2d* parseMap(char* fileName) {};
	//TileLayer* parseTileLayer() {TiXmlElement* layer, Tileset mapTileset, int numRows, int numCols};
	//Tileset parseTileset(std::string filename);
};

#endif