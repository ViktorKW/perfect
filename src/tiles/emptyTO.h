#pragma once
#include "tileObject.h"


class EmptyTO : public TileObject{
public:
  char get_sprite(){
    return ' ';
  }
  ~EmptyTO(){
    std::cout << "Destroyed EmptyTO" << '\n';
  }
};
