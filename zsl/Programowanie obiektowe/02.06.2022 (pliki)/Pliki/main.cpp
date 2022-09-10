#include <iostream>
#include <fstream>>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "polish");
	
	ofstream file("plik.txt");
	
	
	string text = "Janusz Kowalski";
	int age = 20;
	double area  = 10.5;
	
	int tab[10];
	for(int i=0;i<10;i++){
		tab[i] = i+1;
	}
	
	if(file){
		cout << "ok\nzapis danych do pliku";
		file << text << endl;
		file << "Wiek: " << "\t" << age << endl;
		file << "Pole wynosi: " << "\t" << area << endl;
		
		file << "Zawartoœæ tablicy:\n";
		
		for(int i=0;i<10;i++){
			file << tab[i] << " ";
		}
		
		file << endl;
		
		file.close();
	}
	else{
		cout << "nie uda³o siê otworzyæ pliku";
	}
	
	return 0;
}
