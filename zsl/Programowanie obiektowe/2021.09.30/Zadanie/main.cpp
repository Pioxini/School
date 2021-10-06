#include <iostream>

using namespace std;

class Student {
  public:
    static string s_class;
    static string s_profession;
    string name;
    string surname;

    static void show_class_profession()
    {
        cout << "Klasa: " << s_class <<
        endl << "Zawód: " << s_profession << endl;
    }

    void show_name_surname(string name, string surname)
    {
        cout << "Imiê: " << name <<
        endl << "Nazwisko: " << surname << endl;
    }
};

string Student::s_class="2pT";
string Student::s_profession="Programista";

int main()
{
    setlocale(LC_CTYPE,"polish");
    Student uczen;
    uczen.show_name_surname("Piotr","Gierba");
    uczen.show_class_profession();



    /*zdefiniuj klasê uczeñ zawieraj¹c¹ 2 zmienne klasowe (static) s_klasa, s_zawod.
    Zmienniej s_klasa przypisz nazwê swojej klasy.Zmiennej s_zawod przypisz zawod którym siê kszta³cisz.
    Zdefiniuj zmienne instancyjne Imiê i nazwisko.
    Zdefiniuj metodê statyczn¹ wyœwietlaj¹c¹ zawód i klasê.
    Zdefiniuj metodê cz³onkowsk¹ wyœwietlaj¹ce i ustawiaj¹ce dane dla zmiennych cz³onkowskich*/
    return 0;
}
