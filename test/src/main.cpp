#include <iostream>
#include <typeinfo>
#include <memory>

class MyBase{
public:
  virtual void my_print()=0;
  MyBase(){
    std::cout << "Create MyBase" << '\n';
  }
  virtual ~MyBase() = 0;
};
MyBase::~MyBase(){
  std::cout << "Destroyed MyBase" << '\n';
}


class EmptySpace:public MyBase{
public:
  void my_print(){
    std::cout << "EmptySpacePrint" << '\n';
  }

  EmptySpace(){
    std::cout << "Create EmptySpace" << '\n';
  }

  ~EmptySpace(){
    std::cout << "Destroyed EmptySpace" << '\n';
  }
};


int main(int argc, char const *argv[]) {
  std::unique_ptr<MyBase> obj = std::make_unique<EmptySpace>();
  std::unique_ptr<MyBase> obj2 = obj;
  obj2->my_print();
  /*std::unique_ptr<MyBase> m = std::make_unique<Lava>();
  if(dynamic_cast<Lava*>(m.get())){
    std::cout << "it's Lava" << '\n';
  }
  else if(dynamic_cast<EmptySpace*>(m.get())){
    std::cout << "it's EmptySpace" << '\n';
  }
  else if(dynamic_cast<Wall*>(m.get())){
    std::cout << "it's Wall" << '\n';
  }*/
}
