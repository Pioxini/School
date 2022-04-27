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
        cout << "Podaj zawartoœæ pliku: ";
        string zawartosc;
        getline(cin, zawartosc, 'x');
        File << zawartosc << endl;


        // Create a text string, which is used to output the text file
		string myText;

		// Read from the text file
		ifstream MyReadFile(name);

		// Use a while loop together with the getline() function to read the file line by line
		while (getline (MyReadFile, zawartosc)) {
  		// Output the text from the file
  			cout << zawartosc;
		}

		// Close the file
		MyReadFile.close();



        File.close();
        //if(File.is_open()){cout << "True";}else{cout << "False";}
    }
    else{
        cout << "B³¹d!";
    }

//Odczyt pliku w konsoli


}

