#include <iostream>

using namespace std;

struct Date{
    unsigned short int dd, mm, yyyy;
};

class Car{
  public:
    unsigned int id;
    string brand="nieznana", model, color;
    unsigned short int power;
    float price;
    Date dateOfProduction;

    getData();

    Car(int pId){
    	id=pId;
	}
};

Car::getData(){
    cout << "Identyfikator: " << id << "\nMarka: " << brand << "\nmodel: " << model << "\nMoc: " << power << "\nCena: " << price << "PLN\nRocznik: " << dateOfProduction.yyyy<<endl;
}

int main()
{
    setlocale(LC_CTYPE, "polish");

    Car opel(10);
    opel.getData();
    return 0;
}
