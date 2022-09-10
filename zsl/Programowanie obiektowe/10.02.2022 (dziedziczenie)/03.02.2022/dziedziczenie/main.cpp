#include <iostream>
using namespace std;

//Piotr Gierba 2pT G1

class Worker{
  protected:
    string name, surname;
  public:
    Worker(){
      name="Imiê";
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
      return "Imie i nazwisko: " + name + " " + surname + ",zajêcia: " + subjectInSchool + "\n\n";
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

1. Mechanizm dziedziczenia polega na tym, ¿e klasa y mo¿e byæ zdefiniowana przy u¿yciu innej istniej¹cej, stworzonej ju¿ wczeœniej klasy x.
Mo¿na wiêc powiedzieæ, ¿e klasa y bêdzie "dziedziczy³a" elementy cz³onkowskie klasy x.
Korzyœci¹ z zastosowania mechanizmu dziedziczenia jest skrócenie iloœci kodu spowodowane brakiem koniecznoœci przepisywania
tych samych elementów cz³onkowskich do nowo utworzonych klas, poniewa¿ te mog¹ skorzystaæ z elementów cz³onkowskich
wczeœniej ju¿ utworzonych klas.

2. Klasa bazowa to klasa wczeœniej ju¿ istniej¹ca na podstawie której powstaje nowa inna klasa.
Klasa pochodna to nowo utworzona klasa, która dziedziczy elementy cz³onkowskie po klasie bazowej.

3. £añcuch dziedziczenia to zbiór klas po³¹czonych ze sob¹ mechanizmem dziedziczenia.

4. -Specyfikator public (dziedziczenie publiczne) w klasie bazowej powoduje, ¿e jej publiczne
elementy cz³onkowskie s¹ równie¿ dostêpne jako publiczne w klasie pochodnej, chronione jako chronione a prywatne
nie s¹ dostêpne bezpoœrednio ale mo¿na do nich uzykaæ dostêp poprzez wykorzystywanie metod klasy bazowej.
-Specyfikator protected (dziedziczenie chronione) w klasie bazowej powoduje, ¿e jej elementy sk³adowe publiczne i
chronione s¹ dostêpne tak¿e w klasie pochodnej w wersji chronionej. Prywatne elementy nie s¹ dla niej w sposób bezpoœredni dostêpne.
-Specyfikator private (dziedziczenie prywatne) w klasie bazowej powoduje, ¿e elementy sk³adowe publiczne i chronione s¹
dostêpne w klasie pochodnej jako prywatne a elementy sk³adowe prywatne nie s¹ dostêpne w sposób bezpoœredni.

5. Dziedziczenie hierarchiczne - jest to dziedziczenie w którym klasa bazowa ma wiele innych klas pochodnych.
Dziedziczenie wielokrotne - jest to dziedziczenie polegaj¹ce na tym, ¿e jedna klasa pochodna dziedziczy po wiêkszej iloœci
klas bazowych.

6. Klasa pochodna nie dziedziczy konstruktorów po klasie bazowej. Wywo³anie konstruktora klasy pochodnej mo¿e jednak
powodowaæ wywo³anie konstruktora klasy bazowej.
*/

