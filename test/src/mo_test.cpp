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


MapObject::MapObject(int _coordX, int _coordY){
  coordX = _coordX;
  coordY = _coordY;
  sprite = ' ';
}


class WallMO : public MapObject{
public:
  WallMO(int _coordX, int _coordY):MapObject(_coordX, _coordY){
    sprite = '*';
  }
};


int main(int argc, char const *argv[]) {
  MapObject * mo = new WallMO(10,12);
  std::cout << mo->coordX <<" "<< mo->coordY<<" "<<mo->getSprite() << '\n';
  return 0;
}
