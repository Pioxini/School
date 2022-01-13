#include <iostream>
using namespace std;

//https://pastebin.com/PD2Fbs54

class Worker {
  public:
  string name {""}, surname {""};
  string getData(){
    return name + " " + surname;
  }
};

class Teacher : public Worker {
  public:
    string school_subject {""};
    string getData(){
    return name + " " + surname + ", zajêcia: " + school_subject;
  }
};

class Supervising : public Teacher{
  public:
    string school_class {""};
    string getData(){
    return name + " " + surname + ", zajêcia: " + school_subject + ", klasa: " + school_class;
    };
};

int main()
{
    setlocale(LC_CTYPE, "polish");
    Teacher nowak;
    nowak.name = "Jan";
    nowak.surname = "Nowak";
    nowak.school_subject = "Programowanie obiektowe";
    cout << nowak.getData();
    Supervising supervising;
    supervising.name = "Krzysztof";
    supervising.surname = "Przyk³adowy";
    supervising.school_subject = "Matematyka";
    supervising.school_class = "2pT";
    cout << endl << supervising.getData();

    return 0;
}
