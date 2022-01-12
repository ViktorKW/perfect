#include <iostream>
#include <typeinfo>
#include <memory>
#include <vector>


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
  std::vector<std::shared_ptr<MyBase>> v;
  {
    std::cout << "Inner scope" << '\n';
    v.push_back(std::make_shared<EmptySpace>());
    v.push_back(std::make_shared<EmptySpace>());
    v.push_back(std::make_shared<EmptySpace>());
    v.push_back(std::make_shared<EmptySpace>());
  }
  std::vector<std::vector<std::shared_ptr<MyBase>>> super_v;
  super_v.push_back(std::move(v));
  for(auto i_vec : super_v){
    for(auto item : i_vec){
      item->my_print();
    }
  }
  std::cout << "Exit Inner Scope" << '\n';
}
