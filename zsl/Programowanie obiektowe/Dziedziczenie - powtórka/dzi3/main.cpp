#include <iostream>

using namespace std;

class Person {
  private:
    string name;
    string surname;
  public:
    Person(){}
    Person(string pName, string pSurname):
        name{pName},
        surname{pSurname}
    {}
    ~Person(){}

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
    void showData(){
        cout << "Imiê: " << name << "\nNazwisko: " << surname << endl;
    }

};

class Principal: public Person {
  private:
    string schoolName;
  public:
    Principal(){}
    Principal(string pSchoolName){
        schoolName=pSchoolName;
    }
    Principal(string pName, string pSurname, string pSchoolName) : Person(pName, pSurname){
        schoolName=pSchoolName;
    }
    ~Principal(){}

    void setSchoolName(string pSchoolName){
        schoolName=pSchoolName;
    }
    string getSchoolName(){
        return schoolName;
    }
    void showData(){
        cout << "Imiê: " << getName() << "\nNazwisko: " << getSurname() << "\nNazwa szko³y: " << schoolName << endl;
    }
};

class Janitor: private Principal{
  private:
    int age;
  public:
    Janitor(){}
    Janitor(int pAge){
        age=pAge;
    }
    Janitor(string pName, string pSurname, string pSchoolName, int pAge) : Principal(pName, pSurname, pSchoolName){
        age=pAge;
    }
    ~Janitor(){}

    void setAge(int pAge){
        age=pAge;
    }
    int getAge(){
        return age;
    }
    void showData(){
        cout << "Imiê: " << getName() << "\nNazwisko: " << getSurname() << "\nNazwa szko³y: " << getSchoolName() << "\nWiek: " << age << endl;
    }
};

int main()
{
    setlocale(LC_CTYPE, "polish");

    Person p1=Person("Jan", "Kowalski");
    p1.showData();

    cout << endl << endl;

    Person *wsk;
    wsk=&p1;
    wsk->setName("Dominik");
    wsk->showData();

    cout << endl << endl;

    Principal principal1("Jerzy", "Brzêczyszczykiewicz", "Szko³a im. Marcina Najmana");
    principal1.showData();
    cout << endl << endl;
    principal1.setSurname("Zmiana");
    principal1.showData();

    cout << endl << endl;
    Janitor j1=Janitor("Bogus³awa", "Nowak", "Szko³a im. wielkiej depresji", 61);
    j1.showData();


    return 0;
}
