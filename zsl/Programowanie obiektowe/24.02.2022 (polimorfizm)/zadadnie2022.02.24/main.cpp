#include <iostream>
using namespace std;
//Piotr Gierba 2pT - Grupa 2, zadanie z lekcji na ocenê 2022.02.24

struct Date{
    unsigned short int dd, mm, yyyy;
};

class Sprzedawca{
  public:
    string imie;
    string nazwisko;
    int kod_sprzedawcy;
    Date do_kiedy_zatrudniony;
    string dzial;
    int wynagrodzenie;

    Sprzedawca();
    Sprzedawca(string pImie, string pNazwisko, int pKod_sprzedawcy, Date pDo_kiedy_zatrudniony, string pDzial, int pWynagrodzenie);
    ~Sprzedawca();

    virtual void showData(){
        cout << "Imiê: " << imie << "\nNazwisko: " << nazwisko << "\nKod sprzedawcy: " << kod_sprzedawcy << "\nDo kiedy zatrudniony\nRok: " << do_kiedy_zatrudniony.yyyy << "\nMiesi¹c: " << do_kiedy_zatrudniony.mm << "\nDzieñ: " << do_kiedy_zatrudniony.dd << "\nDzia³: " << dzial << "\nWynagrodzenie: " << wynagrodzenie << " z³ " << endl;
    }
};

Sprzedawca::Sprzedawca(){

}

Sprzedawca::Sprzedawca(string pImie, string pNazwisko, int pKod_sprzedawcy, Date pDo_kiedy_zatrudniony, string pDzial, int pWynagrodzenie){
    imie=pImie;
    nazwisko=pNazwisko;
    kod_sprzedawcy=pKod_sprzedawcy;
    do_kiedy_zatrudniony=pDo_kiedy_zatrudniony;
    dzial=pDzial;
    wynagrodzenie=pWynagrodzenie;
}

Sprzedawca::~Sprzedawca(){

}



class Kierownik_sprzedazy: public Sprzedawca{
  public:
    string uprawnienia;
    float dodatek_funkcyjny;

    Kierownik_sprzedazy();
    Kierownik_sprzedazy(string pUprawnienia, float pDodatek_funkcyjny);
    Kierownik_sprzedazy(string pImie, string pNazwisko, int pKod_sprzedawcy, Date pDo_kiedy_zatrudniony, string pDzial, int pWynagrodzenie, string pUprawnienia, float pDodatek_funkcyjny) : Sprzedawca(pImie, pNazwisko, pKod_sprzedawcy, pDo_kiedy_zatrudniony, pDzial, pWynagrodzenie){
        uprawnienia=pUprawnienia;
        dodatek_funkcyjny=pDodatek_funkcyjny;
    }
    ~Kierownik_sprzedazy();

    virtual void showData(){
        cout << "Imiê: " << imie << "\nNazwisko: " << nazwisko << "\nKod sprzedawcy: " << kod_sprzedawcy << "\nDo kiedy zatrudniony\nRok: " << do_kiedy_zatrudniony.yyyy << "\nMiesi¹c: " << do_kiedy_zatrudniony.mm << "\nDzieñ: " << do_kiedy_zatrudniony.dd << "\nDzia³: " << dzial << "\nWynagrodzenie: " << wynagrodzenie << " z³ " << "\nUprawnienia: " << uprawnienia << "\nDodatek funkcyjny: " << dodatek_funkcyjny << "%" << endl;
    }
    void placa_finalna();
};

Kierownik_sprzedazy::Kierownik_sprzedazy(){

}

Kierownik_sprzedazy::Kierownik_sprzedazy(string pUprawnienia, float pDodatek_funkcyjny){
    uprawnienia=pUprawnienia;
    dodatek_funkcyjny=pDodatek_funkcyjny;
}

Kierownik_sprzedazy::~Kierownik_sprzedazy(){

}

void Kierownik_sprzedazy::placa_finalna(){
    float placa=wynagrodzenie+wynagrodzenie*dodatek_funkcyjny;
    cout << "\nWynagrodzenie z uwzglêdnieniem dodatku wynosi: " << placa << " z³ " << endl;
}

int main()
{
    setlocale(LC_CTYPE, "polish");

    Sprzedawca sprzedawca1=Sprzedawca("Jan", "Kowalski", 1234, {23, 12, 2022}, "Artyku³y budowlane", 3250);
    sprzedawca1.showData();

    cout << endl << endl;

    Kierownik_sprzedazy kierownik_sprzedazy1("Filip", "Nowak", 9999, {31, 12, 2024}, "Biuro", 6500, "Wszystko (ALL)", 0.10);
    kierownik_sprzedazy1.showData();
    cout << endl;
    kierownik_sprzedazy1.placa_finalna();



    return 0;
}
