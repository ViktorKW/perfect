#pragma once
#include <iostream>
#include "tileObject.h"


class WallTO : public TileObject{
public:
  char get_sprite(){
    return '#';
  }
  ~WallTO(){
    std::cout << "Destroyed WallTO" << '\n';
  }
};
