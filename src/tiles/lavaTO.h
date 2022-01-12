#pragma once
#include <iostream>
#include "tileObject.h"


class LavaTO : public TileObject{
public:
  LavaTO(){
    #if DEBUG_MODE
    std::cout << "Created LavaTO" << '\n';
    #endif
  }
  ~LavaTO(){
    #if DEBUG_MODE
    std::cout << "Destroyed LavaTO" << '\n';
    #endif
  }
  char get_sprite(){
    return '*';
  }
};
