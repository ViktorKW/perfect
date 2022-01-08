#pragma once
#include "map_pieces.h"
#include <iostream>

class MapGeneretor{
public:
  MapGeneretor(int sizeX3 = 3, int sizeY3 = 3){
    for (size_t i = 0; i < sizeX3; i++) {
      for (size_t j = 0; j < sizeY3; j++) {
        std::cout<<map_pieces3[i][j];
      }
      std::cout<<std::endl;
    }
  }
};
