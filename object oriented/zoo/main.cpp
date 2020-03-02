# include <iostream>
# include "classes.h"

int main () {

  std::cout << "Press 1 for animal \n Press 2 for plant" << std::endl ;
  int option ;
  std::cin >> option ;

  if (option==1){

      std::cout << "Enter the name of the animal !" <<std::endl ;
      string jina ;
      std::cin >> jina ;

//    instantiating an object    

      animal jina ;
       
//    filling the animals age 
      std::cout << "Enter the age of the animal !" << std::endl ;
      std::cin >> jina.age ;

//     filling the animals sex
      std::cout << "Enter the sex of the animal !" << std::endl ;
      std::cin >> jina.sex ;
  
//     filling the animal's name
      std::cout << "Enter the name of the animal !" << std::endl ;
      std::cin >> jina.name ;  




  }
  

}