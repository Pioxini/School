#include <iostream>

using namespace std;

class Test{
  public:
    int a;
};

class Worker{
  public:
    string name;
    string surname;
    string nationality;
    unsigned short int yearBirthday;
    float height;
    char gender;

    void showNameSurname(){
        cout << "Imiê i nazwisko " << name << " " << surname;
    }
    //deklaracja (prototyp) metody showAllData
    void showAllData();

};

void Worker::showAllData(){
    string genderDescription;
    switch(gender){
        case 'm':
        genderDescription="Mê¿czyzna";
        break;
        case 'k':
        genderDescription="Kobieta";
        break;
        default:
        genderDescription="-";
    }
    cout << "Imiê i nazwisko: " << name << " " << surname << "\n"
         << "Narodowoœæ: " << nationality << ", rok urodzenia: "
         << yearBirthday << "\n Wzrost: " << height << ", p³eæ: " << genderDescription;
};

int main()
{
    setlocale(LC_CTYPE,"polish");
    cout << "Hello world!!!" << endl;
    Test newObject;
    //cout << newObject.a;

    Worker pracownik;
    pracownik.name="Jan";
    pracownik.surname="Kowalski";
    pracownik.nationality="Polska";
    pracownik.yearBirthday=1998;
    pracownik.height=190;
    pracownik.gender='m';
    cout << pracownik.name << endl << endl;
    pracownik.showAllData();

    return 0;

}
