#include <iostream>

using namespace std;

class Computer{
  private:
    string brand;
    string model;
  public:
  void setBrand(string pBrand){
    brand=pBrand;
  }
  void setModel(string pModel){
    model=pModel;
  }
  string getBrand(){
    return brand;
  }
  string getModel(){
    return model;
  }
  void showData(){
    cout << "Marka " << brand << "\nModel: " << model << endl;
  }
  Computer(){
    cout << "Konstruktor domyœlny dla Computer" << endl;
  }
  Computer(string pBrand, string pModel){
    brand=pBrand;
    model=pModel;
  }
};

class PC: public Computer{
  private:
    string tower;
  public:
  void setTower(string pTower){
    tower=pTower;
  }
  string getTower(){
    return tower;
  }
  void showData(){
    cout << "Marka " << getBrand() << "\nModel: " << getModel() << "\nObudowa: " << getTower() << endl;
  }
};

class Laptop: public Computer{
  private:
    int screenDiagonal;
    string color;
  public:
  void setScreenDiagonal(int pScreenDiagonal){
    screenDiagonal=pScreenDiagonal;
  }
  void setColor(string pColor){
    color=pColor;
  }
  int getScreenDiagonal(){
    return screenDiagonal;
  }
  string getColor(){
    return color;
  }
  void showData(){
    cout << "Marka " << getBrand() << "\nModel: " << getModel() << "\nPrzek¹tna: " << getScreenDiagonal() << "\nKolor obudowy: " << getColor() << endl;
  }
  Laptop(){
    cout << "Konstruktor domyœlny dla Laptop" << endl;
  }
  Laptop(string pBrand, string pModel, int pScreenDiagonal, string pColor){
    setBrand(pBrand);
    setModel(pModel);
    screenDiagonal=pScreenDiagonal;
    color=pColor;
  }
};

int main()
{
    setlocale(LC_CTYPE, "polish");

    Laptop laptop1("Asus", "TUF Series", 20, "Czarna");
    laptop1.showData();

    return 0;
}
