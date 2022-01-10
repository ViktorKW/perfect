#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>


#include "map.h"
#include "room.h"


class MapGeneretor{
public:
  static void /*Map*/ generate_map(unsigned map_size = 32){
    Map map(map_size);
    std::vector<Room>vec;


    srand (time(NULL));


    for (size_t i = 0; i < map_size/4; i++) {
      vec.push_back(Room(rand() % (map_size/8) + 4, rand() % (map_size/8) + 4));
    }

    for (Room item : vec) {
      for (size_t i = 0; i < item.room_vector.size(); i++) {
        for (size_t j = 0; j < item.room_vector[i].size(); j++) {
          std::cout <<item.room_vector[i][j].getSprite();
        }
        std::cout << '\n';
      }
      std::cout << '\n';
      std::cout << '\n';
      std::cout << '\n';
    }


    /*return map;*/
  }
};
