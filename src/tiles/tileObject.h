#pragma once
#include <iostream>


class TileObject{
public:
  TileObject(){
    #if DEBUG_MODE
    std::cout << "Created TileObject" << '\n';
    #endif
  }
  virtual ~TileObject() = 0;
  virtual char get_sprite() = 0;
};


TileObject::~TileObject(){
  #if DEBUG_MODE
  std::cout << "Destroyed TileObject" << '\n';
  #endif
}
