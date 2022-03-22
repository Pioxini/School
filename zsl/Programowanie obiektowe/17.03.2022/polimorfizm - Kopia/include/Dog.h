#ifndef DOG_H
#define DOG_H

class Dog : public Animal{
  public:
    void className(){
        std::cout << "Klasa Dog\n";
    }
    virtual void speak(){
        std::cout << "HauHau!!!\n";
    }

};

#endif // DOG_H
