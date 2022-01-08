#pragma once
#include <iostream>


class MapObject{
protected:
  char sprite;
public:
  int coordX;
  int coordY;
  char getSprite(){
    return sprite;
  }

  MapObject(int _coordX, int _coordY);
};
