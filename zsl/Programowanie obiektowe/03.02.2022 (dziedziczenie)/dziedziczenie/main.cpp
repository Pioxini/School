#include <iostream>
using namespace std;

//Piotr Gierba 2pT G1

class Worker{
  protected:
    string name, surname;
  public:
    Worker(){
      name="Imi�";
      surname="Nazwisko";
      cin >> name;
      cin >> surname;
      cout << "Konstruktor domyslny klasy Worker\n\n";
    };
    Worker(string pName, string pSurname){
      name=pName;
      surname=pSurname;
      cout << "Konstruktor parametryczny klasy Worker\n\n";
    }
    string showData(){
      return "Imie i nazwisko: " + name + " " + surname + "\n\n";
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

class Teacher: public Worker{
  protected:
    string subjectInSchool;
  public:
    Teacher(){
      subjectInSchool="Przedmiot szkolny";
      cin >> subjectInSchool;
      cout << "Konstruktor domyslny klasy Teacher\n\n";
    };
    Teacher(string pName, string pSurname, string pSubjectInSchool){
      name=pName;
      surname=pSurname;
      subjectInSchool=pSubjectInSchool;
      cout << "Konstruktor parametryczny klasy Teacher\n\n";
    }

    Teacher(string pName, string pSurname): Worker(pName, pSurname){
      cout<<"Konstruktor parametryczny z okresleniem konstruktora klasy bazowej\n\n";
    }
    string showData(){
      return "Imie i nazwisko: " + name + " " + surname + ",zaj�cia: " + subjectInSchool + "\n\n";
    }
    void setSubjectInSchool(string pSubjectInSchool){
        subjectInSchool=pSubjectInSchool;
    }
    string getSubjectInSchool(){
        return subjectInSchool;
    }
};

int main()
{
    setlocale(LC_CTYPE, "polish");
    //Worker pracownik1;
    //Worker pracownik2("Janusz", "Nowak");

    //Teacher nauczyciel1;
    //Teacher nauczyciel2("Janusz","Kowalski","programowanie obiektowe");
    //Teacher nauczyciel2 = Teacher("Janusz","Kowalski","programowanie obiektowe");

    Teacher nauczyciel2("Janusz","Kowalski");
    cout<<nauczyciel2.getName();

    return 0;
}
/*Zadanie 2

1. Mechanizm dziedziczenia polega na tym, �e klasa y mo�e by� zdefiniowana przy u�yciu innej istniej�cej, stworzonej ju� wcze�niej klasy x.
Mo�na wi�c powiedzie�, �e klasa y b�dzie "dziedziczy�a" elementy cz�onkowskie klasy x.
Korzy�ci� z zastosowania mechanizmu dziedziczenia jest skr�cenie ilo�ci kodu spowodowane brakiem konieczno�ci przepisywania
tych samych element�w cz�onkowskich do nowo utworzonych klas, poniewa� te mog� skorzysta� z element�w cz�onkowskich
wcze�niej ju� utworzonych klas.

2. Klasa bazowa to klasa wcze�niej ju� istniej�ca na podstawie kt�rej powstaje nowa inna klasa.
Klasa pochodna to nowo utworzona klasa, kt�ra dziedziczy elementy cz�onkowskie po klasie bazowej.

3. �a�cuch dziedziczenia to zbi�r klas po��czonych ze sob� mechanizmem dziedziczenia.

4. -Specyfikator public (dziedziczenie publiczne) w klasie bazowej powoduje, �e jej publiczne
elementy cz�onkowskie s� r�wnie� dost�pne jako publiczne w klasie pochodnej, chronione jako chronione a prywatne
nie s� dost�pne bezpo�rednio ale mo�na do nich uzyka� dost�p poprzez wykorzystywanie metod klasy bazowej.
-Specyfikator protected (dziedziczenie chronione) w klasie bazowej powoduje, �e jej elementy sk�adowe publiczne i
chronione s� dost�pne tak�e w klasie pochodnej w wersji chronionej. Prywatne elementy nie s� dla niej w spos�b bezpo�redni dost�pne.
-Specyfikator private (dziedziczenie prywatne) w klasie bazowej powoduje, �e elementy sk�adowe publiczne i chronione s�
dost�pne w klasie pochodnej jako prywatne a elementy sk�adowe prywatne nie s� dost�pne w spos�b bezpo�redni.

5. Dziedziczenie hierarchiczne - jest to dziedziczenie w kt�rym klasa bazowa ma wiele innych klas pochodnych.
Dziedziczenie wielokrotne - jest to dziedziczenie polegaj�ce na tym, �e jedna klasa pochodna dziedziczy po wi�kszej ilo�ci
klas bazowych.

6. Klasa pochodna nie dziedziczy konstruktor�w po klasie bazowej. Wywo�anie konstruktora klasy pochodnej mo�e jednak
powodowa� wywo�anie konstruktora klasy bazowej.
*/

