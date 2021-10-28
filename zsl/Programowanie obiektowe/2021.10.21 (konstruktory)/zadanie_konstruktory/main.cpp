#include <iostream>
using namespace std;

class Book{
  public:
	string title;
	string author=[50];
	
	void getTitle();
	void getAuthor();
	void addAuthor();
	
	Book(string pTitle, string pAuthor[50]);
};

void Book::getTitle(){
	cout << "Tytul: " << title << endl;
}

void Book::getAuthor(){
	cout << "Autor: " << author << endl;
}

void Book::addAuthor(){
	int i=0;
	cout << "Podaj autora: " << endl;
	cin >> author[i];
	i++;
}

Book::Book(string pTitle, string pAuthor[50]){
	string title = pTitle;
	string author = pAuthor[50];
}


int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	Book ksiazka1;
	ksiazka1.addAuthor();
	ksiazka1.getAuthor();
	ksiazka1.getTitle();
	
	return 0;
}
