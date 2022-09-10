#include <iostream>

using namespace std;

class Worker{
  private:
    string name;
    string surname;
  public:
  Worker(){
    cout << "Konstruktor domy�lny dla Worker" << endl;
  }
  Worker(string pName, string pSurname){
    name=pName;
    surname=pSurname;
  }
  void showData(){
    cout << "Imi�: " << name << "\nNazwisko: " << surname << endl;
  }
  void setName(string pName){
    name=pName;
  }
  void setSurname(string pSurname){
    surname=pSurname;
  }
  string getName(){
    return name;
  }
  string getSurname(){
    return surname;
  }
};

class Teacher : public Worker{
  private:
    string subject;
  public:
  Teacher(){
    cout << "Konstruktor domy�lny dla Teacher" << endl;
  }
  Teacher(string pName, string pSurname, string pSubject){
    setName(pName);
    setSurname(pSurname);
    subject=pSubject;
  }
  void showData(){
    cout << "Imi�: " << getName() << "\nNazwisko: " << getSurname() << "\nPrzedmiot uczony: " << subject << endl;
  }
  void setSubject(string pSubject){
    subject=pSubject;
  }
  string getSubject(){
    return subject;
  }
};

class Principal : public Worker{
  private:
    string nameOfSchool;
  public:
  Principal(){
    cout << "Konstruktor domy�lny dla Principal" << endl;
  }
  Principal(string pName, string pSurname, string pNameOfSchool){
    setName(pName);
    setSurname(pSurname);
    nameOfSchool=pNameOfSchool;
  }
  void showData(){
    cout << "Imi�: " << getName() << "\nNazwisko: " << getSurname() << "\nSzko�a, w kt�rej jest dyrektorem: " << nameOfSchool << endl;
  }
  void setNameOfSchool(string pNameOfSchool){
    nameOfSchool=pNameOfSchool;
  }
  string getNameOfSchool(){
    return nameOfSchool;
  }
};

class Supervising : public Worker{
  private:
    string yourClass;
  public:
  Supervising(){
    cout << "Konstruktor domy�lny dla Supervising" << endl;
  }
  Supervising(string pName, string pSurname, string pYourClass){
    setName(pName);
    setSurname(pSurname);
    yourClass=pYourClass;
  }
  void showData(){
    cout << "Imi�: " << getName() << "\nNazwisko: " << getSurname() << "\nKlasa wychowawcza: " << yourClass << endl;
  }
  void setYourClass(string pYourClass){
    yourClass=pYourClass;
  }
  string getYourClass(){
    return yourClass;
  }
};

class Secretary : public Worker{
  private:
    int yearOfBirthday;
  public:
  Secretary(){
    cout << "Konstruktor domy�lny dla Secretary" << endl;
  }
  Secretary(string pName, string pSurname, int pYearOfBirthday){
    setName(pName);
    setSurname(pSurname);
    yearOfBirthday=pYearOfBirthday;
  }
  void showData(){
    cout << "Imi�: " << getName() << "\nNazwisko: " << getSurname() << "\nRok urodzenia: " << yearOfBirthday << endl;
  }
  void setYearOfBirthDay(int pYearOfbirthday){
    yearOfBirthday=pYearOfbirthday;
  }
  int getYearOfBirthday(){
    return yearOfBirthday;
  }
};

int main()
{
    setlocale(LC_CTYPE, "polish");

    Supervising supervising1("Jan","Nowak","2pT");
    supervising1.showData();

    return 0;
}
