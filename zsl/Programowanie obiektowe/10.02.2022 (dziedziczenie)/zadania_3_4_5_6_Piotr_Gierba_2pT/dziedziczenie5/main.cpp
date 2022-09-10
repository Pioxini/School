#include <iostream>

using namespace std;

class Car{
  public:
    string brand;
    string model;
    int yearOfProduction;
  Car(){
    cout << "Konstruktor domyœlny klasy Car" << endl;
  }
  Car(string pBrand, string pModel, int pYearOfProduction){
    brand=pBrand;
    model=pModel;
    yearOfProduction=pYearOfProduction;
  }
  void showData(){
    cout << "Marka: " << brand << "\nModel: " << model << "\nRok produkcji:" << yearOfProduction << endl;
  }
};

class Truck: public Car{
  public:
    string type;
  Truck(){
    cout << "Konstruktor domyœlny klasy Truck" << endl;
  }
  Truck(string pBrand, string pModel, int pYearOfProduction, string pType){
    brand=pBrand;
    model=pModel;
    yearOfProduction=pYearOfProduction;
    type=pType;
  }
  void showData(){
    cout << "Marka: " << brand << "\nModel: " << model << "\nRok produkcji: " << yearOfProduction << "\nTyp: " << type << endl;
  }
};

class Bus: public Car{
  public:
    int standingPlaces;
    int sittingPlaces;
  Bus(){
    cout << "Konstruktor domyœlny klasy Bus" << endl;
  }
  Bus(string pBrand, string pModel, int pYearOfProduction, int pStandingPlaces, int pSittingPlaces) : Car(pBrand, pModel, pYearOfProduction){
    standingPlaces=pStandingPlaces;
    sittingPlaces=pSittingPlaces;
  }
  void showData(){
    cout << "Marka: " << brand << "\nModel: " << model << "\nRok produkcji: " << yearOfProduction << "\nMiejsca stoj¹ce: " << standingPlaces << "\nMiejsca siedz¹ce: " << sittingPlaces << endl;
  }
};

int main()
{
    setlocale(LC_CTYPE, "polish");

    Bus transkom("MAN", "Lion's City", 2009, 35, 45);
    transkom.showData();

    return 0;
}
