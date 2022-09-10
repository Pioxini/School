#include <iostream>

using namespace std;

struct Date{
    unsigned short int dd, mm, yyyy;
};

class Car{
  private:
    int id;
    Date vintage;
    int wheels;
    string brand;
    string model;
  public:
    Car();
    Car(int pId, Date pVintage, int pWheels, string pBrand, string pModel);
    ~Car();
    void setId(int pId);
    void setVintage(Date pVintage);
    void setWheels(int pWheels);
    void setBrand(string pBrand);
    void setModel(string pModel);

    int getId();
    Date getVintage();
    int getWheels();
    string getBrand();
    string getModel();

    void showData();
};

Car::Car(){

}

Car::Car(int pId, Date pVintage, int pWheels, string pBrand, string pModel){
    id=pId;
    vintage=pVintage;
    wheels=pWheels;
    brand=pBrand;
    model=pModel;
}

Car::~Car(){

}

void Car::setId(int pId){
    id=pId;
}

void Car::setVintage(Date pVintage){
    vintage=pVintage;
}

void Car::setWheels(int pWheels){
    wheels=pWheels;
}

void Car::setBrand(string pBrand){
    brand=pBrand;
}

void Car::setModel(string pModel){
    model=pModel;
}

int Car::getId(){
    return id;
}

Date Car::getVintage(){
    return vintage;
}

int Car::getWheels(){
    return wheels;
}

string Car::getBrand(){
    return brand;
}

string Car::getModel(){
    return model;
}

void Car::showData(){
    cout << "ID: " << id << "\nRocznik:\nRok: " << vintage.yyyy << "\nMiesi¹c: " << vintage.mm << "\nDzieñ: " << vintage.dd << "\nLiczba kó³: " << wheels << "\nMarka: " << brand << "\nModel: " << model << endl;
}

class Bus: public Car{
  private:
    int numOfDoors;
    int numOfStandingPlaces;
    int numOfSittingPlaces;
  public:
    Bus(){}
    Bus(int pNumOfDoors, int pNumOfStandingPlaces, int pNumOfSittingPlaces){
        numOfDoors=pNumOfDoors;
        numOfStandingPlaces=pNumOfStandingPlaces;
        numOfSittingPlaces=pNumOfSittingPlaces;
    }
    Bus(int pId, Date pVintage, int pWheels, string pBrand, string pModel, int pNumOfDoors, int pNumOfStandingPlaces, int pNumOfSittingPlaces) : Car(pId, pVintage, pWheels, pBrand, pModel){
        numOfDoors=pNumOfDoors;
        numOfStandingPlaces=pNumOfStandingPlaces;
        numOfSittingPlaces=pNumOfSittingPlaces;
    }
    ~Bus(){}

    void setNumOfDoors(int pNumOfDoors){
        numOfDoors=pNumOfDoors;
    }
    void setNumOfStandingPlaces(int pNumOfStandingPlaces){
        numOfStandingPlaces=pNumOfStandingPlaces;
    }
    void setNumOfSittingPlaces(int pNumOfSittingPlaces){
        numOfSittingPlaces=pNumOfSittingPlaces;
    }
    int getNumOfDoors(){
        return numOfDoors;
    }
    int getNumOfStandingPlaces(){
        return numOfStandingPlaces;
    }
    int getNumOfSitingPlaces(){
        return numOfSittingPlaces;
    }

    void showData(){
        cout << "ID: " << getId() << "\nRocznik:\nRok: " << getVintage().yyyy << "\nMiesi¹c: " << getVintage().mm << "\nDzieñ: " << getVintage().dd << "\nLiczba kó³: " << getWheels() << "\nMarka: " << getBrand() << "\nModel: " << getModel() << "\nLiczba Drzwi: " << numOfDoors << "\nLiczba miejsc stoj¹cych: " << numOfStandingPlaces << "\nLiczba miejsc siedz¹cych: " << numOfSittingPlaces << endl;
    }
};

int main()
{
    setlocale(LC_CTYPE, "polish");

    Car toyota=Car(1, {03, 12, 2007}, 4, "Toyota", "Prius");
    toyota.showData();

    cout << endl << endl;

    Car *wskaznik;
    wskaznik=&toyota;
    wskaznik->setModel("Corolla");
    wskaznik->showData();

    cout << endl << endl;

    Bus bus1(2, {15, 04, 2019}, 6, "Solaris", "Urbino 18 Mk. 4", 4, 50, 40);
    bus1.showData();

    return 0;
}
