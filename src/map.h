#pragma once
#include <iostream>
#include <vector>
#include "tileObject.h"
#include "wallTO.h"


class Map {
public:
  const unsigned map_size;
  std::vector<std::vector<TileObject>> map_vec;


  Map(unsigned _map_size = 32):map_size(_map_size){
    for (size_t i = 0; i < map_size; i++) {
      std::vector<TileObject> temp;
      for (size_t j = 0; j < map_size; j++) {
        if(i == 0 || j == 0 || i == map_size - 1 || j == map_size - 1){
          temp.push_back(WallTO());
        }
        else{
          temp.push_back(TileObject());
        }
      }
      map_vec.push_back(temp);
    }
  }
};
