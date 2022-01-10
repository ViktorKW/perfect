#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>


#include "map.h"
#include "room.h"


class MapGeneretor{
public:
  static void /*Map*/ generate_map(unsigned map_size = 32, unsigned room_min_sizeX, unsigned room_min_sizeY){
    Map map(map_size);
    std::vector<Room>rooms;


    srand (time(NULL));


    for (size_t i = 0; i < map_size/4; i++) {
      rooms.push_back(Room(rand() % room_min_sizeX + 1, rand() % room_min_sizeY + 1));
    }

    for (size_t k = 0; k < rooms.size(); k++) {
      for (size_t i = 0; i < rooms.room_vector.size(); i++) {
        for (size_t j = 0; j < rooms.room_vector[i].size(); j++) {
          std::cout <<rooms.room_vector[i][j].getSprite();
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
