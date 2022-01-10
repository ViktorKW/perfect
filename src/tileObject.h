#pragma once
#include <iostream>


class TileObject{
protected:
  char sprite;
public:
/*  int coordX;
  int coordY;*/
  char getSprite(){
    return sprite;
  }

  /*TileObject(int _coordX, int _coordY){
    sprite = '.'
  }*/

  TileObject(){
    sprite = '.';
  }
};
