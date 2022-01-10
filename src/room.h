#pragma once
#include <vector>
#include "tileObject.h"
#include "wallTO.h"


class Room{
public:
  std::vector<std::vector<TileObject>> room_vector;


  Room(unsigned sizeX, unsigned sizeY){
    for (size_t i = 0; i < sizeX; i++) {
      std::vector<TileObject> temp;
      for (size_t j = 0; j < sizeY; j++) {
        if(i == 0 || j == 0 || i == sizeX - 1 || j == sizeY - 1){
          temp.push_back(WallTO());
        }
        else{
          temp.push_back(TileObject());
        }
      }
      room_vector.push_back(temp);
    }
  }
};
