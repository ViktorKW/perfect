#include <iostream>
#include <typeinfo>
#include <memory>

class MyBase{
public:
  MyBase(){
    std::cout << "Create MyBase" << '\n';
  }
  virtual ~MyBase()=0;
};

MyBase::~MyBase(){
  std::cout << "Destroyed MyBase" << '\n';
}

class EmptySpace:public MyBase{
public:
  EmptySpace(){
    std::cout << "Create EmptySpace" << '\n';
  }

  ~EmptySpace(){
    std::cout << "Destroyed EmptySpace" << '\n';
  }
};

class Wall:public MyBase{
public:
  Wall(){
    std::cout << "Create Wall" << '\n';
  }
  ~Wall(){
    std::cout << "Destroyed Wall" << '\n';
  }
};

class Lava:public MyBase{
public:
  Lava(){
    std::cout << "Create Lava" << '\n';
  }
  ~Lava(){
    std::cout << "Destroyed Lava" << '\n';
  }
};

int main(int argc, char const *argv[]) {
  std::unique_ptr<MyBase> m = std::make_unique<Lava>();
  if(dynamic_cast<Lava*>(m.get())){
    std::cout << "it's Lava" << '\n';
  }
  else if(dynamic_cast<EmptySpace*>(m.get())){
    std::cout << "it's EmptySpace" << '\n';
  }
  else if(dynamic_cast<Wall*>(m.get())){
    std::cout << "it's Wall" << '\n';
  }
}
