#pragma once

#include <vector>


class Tiles
{
private:


	 std::vector<char> RackTiles;//Vector Containing character which is tiles
	 Tiles();//Default Constructor
	 static Tiles* TilesInst_;
public:

	
	static Tiles* getTiles();//function to get current rack of tiles
	std::vector<char> getRackTiles();
	bool addTiles(char tile);//function to add a tile to the rack
	bool exchngTiles(char Current,char New);//function to exchange tiles with server

};

