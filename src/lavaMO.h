#pragma once
#include "mapObject.h"


class LavaMO : public MapObject{
public:
  LavaMO(int _coordX, int _coordY):MapObject(_coordX, _coordY){
    sprite = '*';
  }
};
