#include <iostream>

using namespace std;

class Worker {
  public:
	string name, surname;
	
	Worker();
	Worker(string pName, string pSurname);
	
	~Worker(){
		cout << "Definicja destruktora\n";
	}
	
	void getData();
	void createObjectWorker();
};

Worker::Worker(){
	cout << "Konstruktor domyœlny\n";
}

Worker::Worker(string pName, string pSurname):
	name {pName},
	surname {pSurname}
	{
		cout << "Konstruktor parametryczny\n";
	}

void Worker::getData(){
	cout << "Imiê i nazwisko: " << name << " " <<surname << endl;
}

void createObjectWorker(){
	Worker worker;
	worker.getData();
	cout << "Wywo³anie funkcji createObjectWorker\n";
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	Worker nowak = Worker("Janusz", "Nowak");
	nowak.getData();
	
	cout << "\nWskaŸnik\n";
	Worker *p_kowalski = new Worker("Jan", "Kowalski");
	p_kowalski->getData();

	delete p_kowalski;
	
	createObjectWorker();

	return 0;
}
