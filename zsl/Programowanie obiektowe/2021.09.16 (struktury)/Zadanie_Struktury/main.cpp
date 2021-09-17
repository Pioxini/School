#include <iostream>

using namespace std;

struct Date {
  unsigned short int dd, mm, rrrr;
};

struct User {
    string login{}, password{}, status{}, account_type{};
    unsigned int id {};
    Date dateOfAccountCreation {};

    void showAllData();
    void setId(unsigned short int dd1, unsigned short int mm1, unsigned short int rrrr1, unsigned int id1, string login1, string password1, string status1, string account_type1){
        dateOfAccountCreation.dd=dd1;
        dateOfAccountCreation.mm=mm1;
        dateOfAccountCreation.rrrr=rrrr1;
        id=id1;
        login=login1;
        password=password1;
        status=status1;
        account_type=account_type1;
    }
};

void User::showAllData(){
    cout << "Login: " << login
    << "\nHas³o: " << password
    << "\nStatus: " << status
    << "\nTyp konta: " << account_type
    << "\nId: " << id
    << "\nData utworzenia konta: " << dateOfAccountCreation.dd
    << "-" << dateOfAccountCreation.mm
    << "-" << dateOfAccountCreation.rrrr;
  }

int main()
{
    setlocale(LC_CTYPE,"polish");
    User uzytkownik;
    uzytkownik.setId(16,9,2021,250,"programista","obiektowy123","Aktywny","user");
    uzytkownik.showAllData();
    return 0;
}
