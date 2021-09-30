#include <iostream>

using namespace std;

struct Date {
  unsigned short int dd, mm, yyyy;
};

class Worker{
  public:
  unsigned int id {};
  string name{}, surname{};
  Date dateBirthday {};

  void showAllData();
  void setData(unsigned int x, string name, string surname, Date dateBirthday){
    Worker::id=x;
    Worker::name=name;
    Worker::surname=surname;
    Worker::dateBirthday=dateBirthday;
  }
};

  void Worker::showAllData(){
    cout << "Dane pracownika:\n" << "Id: " << id
    << "\nImiê i nazwisko: " << name << " " << surname
    << "\nData urodzenia: " << dateBirthday.dd << "-"
    << dateBirthday.mm << "-"
    << dateBirthday.yyyy;
  }

int main()
{
    setlocale(LC_CTYPE,"polish");
    Worker pracownik;
    pracownik.setData(100,"Janusz","Nowak",{16,9,2021});
    pracownik.showAllData();
    return 0;
}
