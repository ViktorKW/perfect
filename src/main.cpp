#include <iostream>
#include "room.h"
#include "map.h"
#include "mapGenerator.h"


int main(int argc, char const *argv[]) {
  /*Room obj(10,20);

  for (size_t i = 0; i < obj.room_vector.size(); i++) {
    for (size_t j = 0; j < obj.room_vector[i].size(); j++) {
      std::cout <<obj.room_vector[i][j].getSprite();
    }
    std::cout << '\n';
  }*/

  MapGeneretor::generate_map();
  return 0;
}
