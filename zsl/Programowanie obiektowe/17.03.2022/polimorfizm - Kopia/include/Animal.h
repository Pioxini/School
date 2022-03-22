#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>


class Animal{
  public:
    void className(){
        std::cout << "Klasa Animal\n";
    }
    virtual void speak(){
        std::cout << "DŸwiêk zwierzaka\n";
    }

};



#endif // ANIMAL_H
