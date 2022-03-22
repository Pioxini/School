#include <iostream>
#include "Animal.h"
#include "Dog.h"

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "polish");

    Dog *wskDog = new Dog();
    wskDog->className();
    wskDog->speak();

    Animal *wskAnimal = new Dog();
    wskAnimal->className();
    wskAnimal->speak();

    Animal x;
    wskAnimal = &x;
    wskAnimal->className();
    wskAnimal->speak();

    return 0;
}
