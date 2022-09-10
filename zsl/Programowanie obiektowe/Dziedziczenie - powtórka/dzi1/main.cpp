#include <iostream>

using namespace std;

class Worker {
  private:
    string name;
    string surname;
    int id;
  public:
    Worker(){}
    Worker(string pName, string pSurname, int pId){
        name=pName;
        surname=pSurname;
        id=pId;
    }
    ~Worker(){};
    void setName(string pName){
        name=pName;
    }
    void setSurname(string pSurname){
        surname=pSurname;
    }
    void setId(int pId){
        id=pId;
    }
    string getName(){
        return name;
    }
    string getSurname(){
        return surname;
    }
    int getId(){
        return id;
    }
    void getData();
};

void Worker::getData(){
        cout << "Imiê: " << name << "\nNazwisko: " << surname << "\nID: " << id << endl;
    }

class Teacher: public Worker{
  private:
    string subject;
  public:
    Teacher(){}
    Teacher(string pSubject){
        subject=pSubject;
    }
    Teacher(string pName, string pSurname, int pId, string pSubject) : Worker(pName, pSurname, pId){
        subject=pSubject;
    }
    ~Teacher(){}
    void setSubject(string pSubject){
        subject=pSubject;
    }
    string getSubject(){
        return subject;
    }
    void getData(){
        cout << "Imiê: " << getName() << "\nNazwisko: " << getSurname() << "\nID: " << getId() << "\nPrzedmiot: " << subject << endl;
    }
};

class Supervising: public Teacher{
  private:
    string ownClass;
  public:
    Supervising(){}
    Supervising(string pOwnClass){
        ownClass=pOwnClass;
    }
    Supervising(string pName, string pSurname, int pId, string pSubject, string pOwnClass) : Teacher(pName, pSurname, pId, pSubject){
        ownClass=pOwnClass;
    }
    void setOwnClass(string pOwnClass){
        ownClass=pOwnClass;
    }
    string getOwnClass(){
        return ownClass;
    }
    void getData(){
        cout << "Imiê: " << getName() << "\nNazwisko: " << getSurname() << "\nID: " << getId() << "\nPrzedmiot: " << getSubject() << "\nKlasa wychowawcza: " << ownClass << endl;
    }
};

int main()
{
    setlocale(LC_CTYPE, "polish");

    Worker worker1("Jan", "Testowy", 1);
    worker1.getData();

    cout << endl << endl;

    Teacher teacher1=Teacher("Marcin", "Najman", 2, "Wychowanie Fizyczne");
    teacher1.getData();

    cout << endl << endl;

    Supervising supervising1("Krzysztof", "Kêdziora", 3, "Fizyka", "2pT");
    supervising1.getData();

    cout << endl << endl;

    Supervising *wskaznik;
    wskaznik=&supervising1;
    wskaznik->setOwnClass("3pT");
    wskaznik->getData();

    return 0;
}
