#include <iostream>

using namespace std;

class Worker {
  public:
    string name, surname;
    void getData();
};

void Worker::getData(){
    cout << "Imiê i nazwisko: " << name << " " << surname << endl;
}

Worker& setData(Worker&);
void getData(const Worker&);

int main()
{
    setlocale(LC_CTYPE,"polish");

    Worker worker;

    worker = setData(worker);

    getData(worker);

    return 0;
}

//Definicje funkcji zewnêtrznych

Worker& setData(worker& p){
    cout << "Podaj imiê: ";
    cin >>p.name;
    cout << "Podaj nazwisko: ";
    cin >> p.surname;
}
