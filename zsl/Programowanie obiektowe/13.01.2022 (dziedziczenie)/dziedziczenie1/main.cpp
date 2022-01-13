#include <iostream>
using namespace std;

//https://pastebin.com/PD2Fbs54

class Worker {
  private:
  string name {""}, surname {""};

  public:
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
  string getData(){
    return getName() + " " + getSurname();
  }
};

class Teacher : public Worker {
  private:
    string school_subject {""};
  public:
    void setSchool_subject(string pSchool_subject){
        school_subject=pSchool_subject;
    }
    string getSchool_subject(){
        return school_subject;
    }
    string getData(){
    return getName() + " " + getSurname() + ", zajêcia: " + school_subject;
  }
};

class Supervising : public Teacher{
  private:
    string school_class {""};
  public:
    string getSchool_class(){
        return school_class;
    }
    void setSchool_class(string pSchool_class){
        school_class=pSchool_class;
    }
    string getData(){
    return getName() + " " + getSurname() + ", zajêcia: " + getSchool_subject() + ", klasa: " + school_class;
    };
};

int main()
{
    setlocale(LC_CTYPE, "polish");
    Teacher nowak;
    nowak.setName("Jan");
    nowak.setSurname("Nowak");
    nowak.setSchool_subject("Programowanie obiektowe");
    cout << nowak.getData();
    Supervising supervising;
    supervising.setName("Krzysztof");
    supervising.setSurname("Przyk³adowy");
    supervising.setSchool_subject("Matematyka");
    supervising.setSchool_class("2pT");
    cout << endl << supervising.getData();

    return 0;
}
