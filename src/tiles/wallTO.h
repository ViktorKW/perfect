#pragma once
#include <iostream>
#include "tileObject.h"


class WallTO : public TileObject{
public:
  WallTO(){
    #if DEBUG_MODE
    std::cout << "Created WallTO" << '\n';
    #endif
  }
  ~WallTO(){
    #if DEBUG_MODE
    std::cout << "Destroyed WallTO" << '\n';
    #endif
  }
  char get_sprite(){
    return '#';
  }
};
