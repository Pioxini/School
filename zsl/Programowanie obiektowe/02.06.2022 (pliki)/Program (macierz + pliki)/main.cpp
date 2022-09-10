#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "polish");
	int macierz[3][3];
	
	for(int i=0;i<3;i++){
		//cout << "Linia nr" << i+1 << endl;
		for(int j=0;j<3;j++){
			cout << "Podaj element [" << i << "][" << j << "]:";
			cin >> macierz[i][j];
		}
		cout << endl << endl;
	}
	
	cout << "Wypisywanie elementów macierza" << endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << "Element: [" << i << "][" << j << "] " << macierz[i][j] << " " <<endl;
		}
	}
	
	fstream file;
	file.open("plik.txt", ios::out);
	
	if(file.is_open()){
		cout << "Zapisywanie danych do pliku\n";
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				file << macierz[i][j] << "\t";
			}
			file << endl << endl;
		}
	}
	else{
		
	}
	
	
	
	return 0;
}
