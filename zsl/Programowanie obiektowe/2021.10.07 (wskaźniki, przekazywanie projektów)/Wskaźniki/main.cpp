#include <iostream>

using namespace std;

class Worker {
  public:
    string name, surname; //zmienna instancyjna
    void getDate(); //prototyp
};

void Worker::getDate(){
    cout << "Imiê i nazwisko: " << name << " " << surname << endl;
}

int main()
{
    setlocale(LC_CTYPE,"polish");

    Worker kowalski;

    Worker *p_kowalski;
    p_kowalski = &kowalski;

    cout << "Adres obiektu kowalski: " << p_kowalski << endl;
    p_kowalski->name="Janusz";
    kowalski.getDate();
    p_kowalski->getDate();

    return 0;
}
