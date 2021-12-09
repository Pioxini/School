#include <iostream>

using namespace std;

class Worker{
    private:
    float salary;
    public:
    string name, surname;
    void setSalary(float pSalary);
    float getSalary();
};

class Teacher: public Worker{
  public:
    string MedicalSpecialization;
};

void Worker::setSalary(float pSalary){
    salary=pSalary;
}
float Worker::getSalary(){
    return salary;
}

int main()
{
    setlocale(LC_CTYPE,"polish");

    Worker nowak;
    nowak.name="Janusz";
    nowak.surname="Nowak";
    nowak.setSalary(2000);
    //nowak.MedicalSpecialization;
    cout << "Obiekt klasy Worker: " << nowak.name << " " << nowak.surname << endl;
    cout << "Zarobki: " << nowak.getSalary() << " z³" << endl;

    Teacher kowal;
    kowal.name="Anna";
    kowal.surname="Kowal";
    kowal.MedicalSpecialization="Kardiolog";
    cout << "Obiekt klasy Teacher: " << kowal.name << " " << kowal.surname << endl;
    cout << "Specjalizacja: " << kowal.MedicalSpecialization << endl;

    return 0;
}
