#pragma once
#include <iostream>
#include "tileObject.h"


class EmptyTO : public TileObject{
public:
  EmptyTO(){
    #if DEBUG_MODE
    std::cout << "Created EmptyTO" << '\n';
    #endif
  }
  ~EmptyTO(){
    #if DEBUG_MODE
    std::cout << "Destroyed EmptyTO" << '\n';
    #endif
  }
  char get_sprite(){
    return ' ';
  }
};
