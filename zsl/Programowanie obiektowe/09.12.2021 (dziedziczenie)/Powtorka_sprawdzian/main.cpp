#include <iostream>

using namespace std;

class Car{
  public:
    string brand;
    string model;
    string color;
    unsigned short int year;
    static int s_numberOfWheels;

    void setPrice(double pPrice);
    void setRegistration(string pRegistration);
    void showData();
    double getPrice();
    string getRegistration();

    Car(string pBrand, string pModel, string pColor, unsigned short int pYear, double pPrice, string pRegistration);
    Car(string pBrand, string pModel, unsigned short int pYear);
    Car();
    ~Car();

  private:
    double price;
    string registration;
};

Car::Car(){
    cout << "Wywo³anie kontruktora domyœlnego" << endl;
}

Car::Car(string pBrand, string pModel, string pColor, unsigned short int pYear, double pPrice, string pRegistration){
    brand=pBrand;
    model=pModel;
    color=pColor;
    year=pYear;
    price=pPrice;
    registration=pRegistration;
}

Car::Car(string pBrand, string pModel, unsigned short int pYear){
    brand=pBrand;
    model=pModel;
    year=pYear;
}

Car::~Car(){
    cout << "Wywo³anie destruktora" << endl;
}

void Car::showData(){
    cout << "Marka: " << brand << "\nModel: " << model << "\nKolor: " << color << "\nRok: " << year << "\nCena: " << price << "\nRejestracja: " << registration << endl;
}

void Car::setPrice(double pPrice){
    price=pPrice;
}

void Car::setRegistration(string pRegistration){
    registration=pRegistration;
}

double Car::getPrice(){
    return price;
}

string Car::getRegistration(){
    return registration;
}

int main()
{
    setlocale(LC_CTYPE,"polish");

    Car fiat=Car("Fiat","Multipla","szary",2000,2000.99,"PO320GW");
    fiat.showData();

    Car *superauto;
    superauto=&fiat;
    superauto->showData();
    superauto->setPrice(2000);
    superauto->showData();

    return 0;
}


/* Przeci¹¿anie konstruktorów polega na u¿yciu wiêcêj ni¿ jednego konstruktora w klasie.

   Przyk³ady:
   Car(string pBrand, string pModel, string pColor, unsigned short int pYear, double pPrice, string pRegistration);
    Car(string pBrand, string pModel, unsigned short int pYear);
    Car();
*/
