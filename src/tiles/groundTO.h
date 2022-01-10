#pragma once
#include "tileObject.h"


class GroundTO : public TileObject{
public:
  char get_sprite(){
    return '.';
  }
  ~GroundTO(){
    std::cout << "Destroyed GroundTO" << '\n';
  }
};
