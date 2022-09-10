#include <iostream>

using namespace std;

class Car{
  private:
    string brand;
    string model;
    int yearOfProduction;
  public:
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
    void setBrand(string pBrand){
        brand=pBrand;
    }
    void setModel(string pModel){
        model=pModel;
    }
    void setYearOfProduction(int pYearOfProduction){
        yearOfProduction=pYearOfProduction;
    }
    string getBrand(){
        return brand;
    }
    string getModel(){
        return model;
    }
    int getYearOfProduction(){
        return yearOfProduction;
    }
};

class Truck: public Car{
  private:
    string type;
  public:
  Truck(){
    cout << "Konstruktor domyœlny klasy Truck" << endl;
  }
  Truck(string pBrand, string pModel, int pYearOfProduction, string pType){
    setBrand(pBrand);
    setModel(pModel);
    setYearOfProduction(pYearOfProduction);
    type=pType;
  }
  void showData(){
    cout << "Marka: " << getBrand() << "\nModel: " << getModel() << "\nRok produkcji: " << getYearOfProduction() << "\nTyp: " << type << endl;
  }
  void setType(string pType){
    type=pType;
  }
  string getType(){
    return type;
  }
};

class Bus: public Car{
  private:
    int standingPlaces;
    int sittingPlaces;
  public:
  Bus(){
    cout << "Konstruktor domyœlny klasy Bus" << endl;
  }
  Bus(string pBrand, string pModel, int pYearOfProduction, int pStandingPlaces, int pSittingPlaces) : Car(pBrand, pModel, pYearOfProduction){
    standingPlaces=pStandingPlaces;
    sittingPlaces=pSittingPlaces;
  }
  void showData(){
    cout << "Marka: " << getBrand() << "\nModel: " << getModel() << "\nRok produkcji: " << getYearOfProduction() << "\nMiejsca stoj¹ce: " << standingPlaces << "\nMiejsca siedz¹ce: " << sittingPlaces << endl;
  }
  void setStandingPlaces(int pStandingPlaces){
    standingPlaces=pStandingPlaces;
  }
  void setSittingPlaces(int pSittingPlaces){
    sittingPlaces=pSittingPlaces;
  }
  int getStandingPlaces(){
    return standingPlaces;
  }
  int getSittingPlaces(){
    return sittingPlaces;
  }
};

int main()
{
    setlocale(LC_CTYPE, "polish");

    Bus transkom("MAN", "Lion's City", 2009, 35, 45);
    transkom.showData();

    return 0;
}
