#include <iostream>

using namespace std;

class Worker{
  public:
    string name;
    string surname;
  Worker(){
    cout << "Konstruktor domyœlny dla Worker" << endl;
  }
  Worker(string pName, string pSurname){
    name=pName;
    surname=pSurname;
  }
  void showData(){
    cout << "Imiê: " << name << "\nNazwisko: " << surname << endl;
  }
};

class Teacher : public Worker{
  public:
    string subject;
  Teacher(){
    cout << "Konstruktor domyœlny dla Teacher" << endl;
  }
  Teacher(string pName, string pSurname, string pSubject){
    name=pName;
    surname=pSurname;
    subject=pSubject;
  }
  void showData(){
    cout << "Imiê: " << name << "\nNazwisko: " << surname << "\nPrzedmiot uczony: " << subject << endl;
  }
};

class Principal : public Worker{
  public:
    string nameOfSchool;
  Principal(){
    cout << "Konstruktor domyœlny dla Principal" << endl;
  }
  Principal(string pName, string pSurname, string pNameOfSchool){
    name=pName;
    surname=pSurname;
    nameOfSchool=pNameOfSchool;
  }
  void showData(){
    cout << "Imiê: " << name << "\nNazwisko: " << surname << "\nSzko³a, w której jest dyrektorem: " << nameOfSchool << endl;
  }
};

class Supervising : public Worker{
  public:
    string yourClass;
  Supervising(){
    cout << "Konstruktor domyœlny dla Supervising" << endl;
  }
  Supervising(string pName, string pSurname, string pYourClass){
    name=pName;
    surname=pSurname;
    yourClass=pYourClass;
  }
  void showData(){
    cout << "Imiê: " << name << "\nNazwisko: " << surname << "\nKlasa wychowawcza: " << yourClass << endl;
  }
};

class Secretary : public Worker{
  public:
    int yearOfBirthday;
  Secretary(){
    cout << "Konstruktor domyœlny dla Secretary" << endl;
  }
  Secretary(string pName, string pSurname, int pYearOfBirthday){
    name=pName;
    surname=pSurname;
    yearOfBirthday=pYearOfBirthday;
  }
  void showData(){
    cout << "Imiê: " << name << "\nNazwisko: " << surname << "\nRok urodzenia: " << yearOfBirthday << endl;
  }
};

int main()
{
    setlocale(LC_CTYPE, "polish");

    Supervising supervising1("Jan","Nowak","2pT");
    supervising1.showData();

    return 0;
}
