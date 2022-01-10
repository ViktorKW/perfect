#pragma once
#include "tileObject.h"


class LavaTO : public TileObject{
public:
  char get_sprite(){
    return '*';
  }
};
