#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include "tiles/emptyTO.h"
#include "tiles/wallTO.h"


class Grid {
protected:
  unsigned grid_sizeX;
  unsigned grid_sizeY;
public:
  std::vector<std::vector<std::shared_ptr<TileObject>>> grid_vec;


  Grid(unsigned _grid_sizeX, unsigned _grid_sizeY){
    grid_sizeX = _grid_sizeX;
    grid_sizeY = _grid_sizeY;

    for (size_t i = 0; i < grid_sizeX; i++) {
      std::vector<std::shared_ptr<TileObject>> temp;
      for (size_t j = 0; j < grid_sizeY; j++) {
          temp.push_back(std::make_shared<WallTO>());
      }
      grid_vec.push_back(temp);
    }
  }
};
