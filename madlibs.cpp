//Authors: 
#include <iostream>
#include <string>

int main()
{
  int hour;
  std::cout<< "Name a number 1-24"<<std::endl;
  std::cin>> hour;
  int min;
  std::cout<< "Name a number 1-60"<<std::endl;
  std::cin>> min;
  std::string name;
  std::cout<< "Give a name"<<std::endl;
  std::cin>> name;
  std::string place;
  std::cout<< "Name a place where people meet"<<std::endl;
  std::cin>> place;
  std::string name2;
  std::cout<< "Give another name"<<std::endl;
  std::cin>> name2;
  std::string adj;
  std::cout<< "Give an adjective"<<std::endl;
  std::cin>> adj;
  double gpa;
  std::cout<< "Give a number with decimals bethween 3 and 4"<<std::endl;
  std::cin>> gpa;
  std::cout<< "At " << hour << ":" << min << " pm " << name << " went to " << place <<std::endl;
  std::cout<<" \"man " << name2 << " madlibs are " << adj << " \"" << std::endl;
  std::cout<<" \"I wish I was a " << gpa << " student\""<<std::endl;
  return 0;
}
