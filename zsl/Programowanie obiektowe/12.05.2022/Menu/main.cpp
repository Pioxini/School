#include <iostream>
#include "CSquare.h"
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "polish");
	
	int choice;
	
	do
	{
		cout << "Menu:\n0. Wyjœcie\n1. Program 1\nWybór opcji:";
		cin >> choice;
		
		switch(choice){
		case 0:
			cout << "Dziêkujemy!\n\n";
		return 0;
		case 1:
			{
				cout << "Wybra³eœ program 1\n\n";
				CSquare square;
				square.setSide(10.0);
				cout << "D³ugoœæ boku: " << square.getSide() << endl;
				cout << "Obwód kwadratu: " << square.perimeter() << endl;
				cout << "Obwód kwadratu: " << square.area() << endl;
				break;
			}
		default:
			cout << "B³êdny numer opcji!\n\n";
			choice=0;
		}
		break;	
	}
	while(choice != 0);
	
	return 0;
}
