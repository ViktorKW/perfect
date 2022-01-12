#pragma once
#include <iostream>
#include "tileObject.h"


class GroundTO : public TileObject{
public:
  GroundTO(){
    #if DEBUG_MODE
    std::cout << "Created GroundTO" << '\n';
    #endif
  }
  ~GroundTO(){
    #if DEBUG_MODE
    std::cout << "Destroyed GroundTO" << '\n';
    #endif
  }
  char get_sprite(){
    return '.';
  }
};
