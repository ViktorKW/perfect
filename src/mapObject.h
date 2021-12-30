#pragma once
#include <iostream>


class MapObject{
public:
  const std::string objSprite;
  int coordX;
  int coordY;
  MapObject(int _coordX, int _coordY);
};
