#pragma once
#include "map.h"
#include "mapDrawer.h"


class MapManager{
private:
  Map*map;
  MapDrawer*mapDrawer;
public:
  MapManager(Map*_map);
  ~MapManager();
};
