#include <iostream>
using namespace std;

class Person{
  protected:
    string name;
    string surname;
  public:
    Person(){};
    Person(string pName, string pSurname){
        name=pName;
        surname=pSurname;
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
    virtual void showData()=0;
};

class Worker : public Person{
  protected:
    string position;
  public:
    Worker(){}
    Worker(string pName, string pSurname, string pPosition) : Person(pName, pSurname){
        position=pPosition;
    }
    void setPosition(string pPosition){
        position=pPosition;
    }
    string getPosition(){
        return position;
    }
    void showData(){
        cout << "Imiê i nazwisko " << name << " " << surname << endl;
    }
};

class Student : public Person{
  protected:
    string classAtSchool;
  public:
    Student(){}
    Student(string pName, string pSurname, string pClassAtSchool) : Person(pName, pSurname){
        classAtSchool=pClassAtSchool;
    }
    void setClassAtSchool(string pClassAtSchool){
        classAtSchool=pClassAtSchool;
    }
    string getClassAtSchool(){
        return classAtSchool;
    }
    void showData(){
        cout << "Imiê i nazwisko " << name << " " << surname << ", klasa: " << classAtSchool << endl;
    }
};

int main()
{
    setlocale(LC_CTYPE, "polish");

    //Person osoba1;

    Worker pracownik1;
    pracownik1.setName("Janusz");
    pracownik1.setSurname("Kowalski");
    pracownik1.setPosition("Programista");
    cout << "Dane pracownika:\n";
    pracownik1.showData();

    Student uczen1;
    uczen1.setName("Anna");
    uczen1.setSurname("Kowalska");
    uczen1.setClassAtSchool("2PT");
    uczen1.showData();

    return 0;
}
