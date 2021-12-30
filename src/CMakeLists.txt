cmake_minimum_required(VERSION 3.13.4)

project(perfect)

add_executable(${PROJECT_NAME} 
  main.cpp
  map.cpp
  mapManager.cpp
  mapDrawer.cpp
  mapObjects/mapObject.cpp
)
