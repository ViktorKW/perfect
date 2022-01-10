#include <iostream>
#include <typeinfo>


class MyBase{
public:
  virtual ~MyBase()=0;
};

MyBase::~MyBase(){
  std::cout << "MyBase" << '\n';
}

class EmptySpace:public MyBase{
public:
  ~EmptySpace(){
    std::cout << "EmptySpace" << '\n';
  }
};

class Wall:public MyBase{
public:
  ~Wall(){
    std::cout << "Wall" << '\n';
  }
};

class Lava:public MyBase{
public:
  ~Lava(){
    std::cout << "Lava" << '\n';
  }
};

int main(int argc, char const *argv[]) {
  MyBase *m = new EmptySpace;
  if(dynamic_cast<Lava*>(m)){
    std::cout << "it's Lava" << '\n';
  }
  else if(dynamic_cast<EmptySpace*>(m)){
    std::cout << "it's EmptySpace" << '\n';
  }
  else if(dynamic_cast<Wall*>(m)){
    std::cout << "it's Wall" << '\n';
  }

}
