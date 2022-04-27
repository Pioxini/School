#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "polish");

    cout << "Nazwa pliku: ";
    char name[20];
    cin >> name;
    ofstream File;
    File.open(name, ios_base::app); //in, out, app
    if(File.is_open()){
        //cout << "Plik otwarty";
        cout << "Podaj zawartość pliku: ";
        string zawartosc;
        getline(cin, zawartosc, 'x');
        File << zawartosc << endl;
        File.close();
        //if(File.is_open()){cout << "True";}else{cout << "False";}
    }
    else{
        cout << "Błąd!";
    }

//Odczyt pliku w konsoli


}
