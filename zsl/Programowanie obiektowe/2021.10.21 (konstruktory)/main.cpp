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
    
    Car(unsigned int, string);
    
    Car(unsigned int pId, string pBrand, string pModel, string pColor, unsigned short int pPower, float pPrice, Date pDateOfProduction);
};

Car::getData(){
    cout << "Identyfikator: " << id << "\nMarka: " << brand << "\nmodel: " << model << "\nMoc: " << power << "\nCena: " << price << "PLN\nRocznik: " << dateOfProduction.yyyy<<" r."<<endl<<endl;
}
Car::Car(unsigned int pId, string pBrand){
	id=pId;
	brand=pBrand;
}
Car::Car(unsigned int pId, string pBrand, string pModel, string pColor, unsigned short int pPower, float pPrice, Date pDateOfProduction){
	id=pId;
	brand=pBrand;
	model=pModel;
	color=pColor;
	power=pPower;
	price=pPrice;
	dateOfProduction=pDateOfProduction;
}

int main()
{
    setlocale(LC_CTYPE, "polish");

    Car opel(10, "Opel");
    opel.getData();
    
    Car fiat(11, "Fiat");
    fiat.getData();
    
    Car porsche(8, "Porsche", "Panamera", "Czarny", 500, 1500000, {1, 10, 2021});
    porsche.getData();
    return 0;
}

