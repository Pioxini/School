#include <iostream>

using namespace std;

class konto_bankow{
  private:
    int pesel;
    int pin;
    double saldo_konta;
    string typ_konta;
  public:
    int nr_konta;

    konto_bankow();
    konto_bankow(int pPesel, int pNr_konta, int pPin, double pSaldo_konta, string pTyp_konta);

    void showData();

    int getPesel();
    int getPin();
    double getSaldo_konta();
    string getTyp_konta();
    int getNr_konta();

    void setPesel(int pPesel);
    void setPin(int pPin);
    void setSaldo_konta(double pSaldo_konta);
    void setTyp_konta(string pTyp_konta);
    void setNr_konta(int pNr_konta);
};

void konto_bankow::showData(){
    cout << "Pesel: " << pesel << "\nNumer konta: " << nr_konta <<
    "\nPin: " << pin << "\nSaldo konta: " << saldo_konta <<
    "\nTyp konta: " << typ_konta << endl;
}

konto_bankow::konto_bankow(){}

konto_bankow::konto_bankow(int pPesel, int pNr_konta, int pPin, double pSaldo_konta, string pTyp_konta){
    pesel=pPesel;
    nr_konta=pNr_konta;
    pin=pPin;
    saldo_konta=pSaldo_konta;
    typ_konta=pTyp_konta;
}

int konto_bankow::getPesel(){
    return pesel;
}
int konto_bankow::getPin(){
    return pin;
}
double konto_bankow::getSaldo_konta(){
    return saldo_konta;
}
string konto_bankow::getTyp_konta(){
    return typ_konta;
}
int konto_bankow::getNr_konta(){
    return nr_konta;
}

void konto_bankow::setPesel(int pPesel){
    pesel=pPesel;
}
void konto_bankow::setPin(int pPin){
    pin=pPin;
}
void konto_bankow::setSaldo_konta(double pSaldo_konta){
    saldo_konta=pSaldo_konta;
}
void konto_bankow::setTyp_konta(string pTyp_konta){
    typ_konta=pTyp_konta;
}
void konto_bankow::setNr_konta(int pNr_konta){
    nr_konta=pNr_konta;
}
int main()
{
    setlocale(LC_CTYPE, "polish");

    konto_bankow k1(12345678,87654321,4433,15000,"Normalne");
    k1.showData();

    konto_bankow k2;
    k2.setPesel(826492163);
    k2.setPin(1111);
    k2.setSaldo_konta(275000);
    k2.setTyp_konta("Firmowe");
    k2.setNr_konta(74329237);
    cout << endl << endl << "Pesel: " << k2.getPesel() << "\nNumer konta: " << k2.getNr_konta() <<
    "\nPin: " << k2.getPin() << "\nSaldo konta: " << k2.getSaldo_konta() <<
    "\nTyp konta: " << k2.getTyp_konta() << endl;

    return 0;
}
