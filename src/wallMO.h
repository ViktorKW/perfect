#pragma once
#include "mapObject.h"


class WallMO : public MapObject{
public:
  WallMO(int _coordX, int _coordY):MapObject(_coordX, _coordY){
    sprite = '#';
  }
};
