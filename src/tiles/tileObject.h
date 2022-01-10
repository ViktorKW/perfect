#pragma once
#include <iostream>


class TileObject{
public:
  virtual char get_sprite() = 0;
  virtual ~TileObject() = 0;
};


TileObject::~TileObject(){
  std::cout << "Destroyed TileObject" << '\n';
}
