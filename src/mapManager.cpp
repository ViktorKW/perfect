#include "mapManager.h"


MapManager::MapManager(Map*_map){
  map = _map;
  mapDrawer = new MapDrawer;
}


MapManager::~MapManager(){
  delete map;
  delete mapDrawer;
}
