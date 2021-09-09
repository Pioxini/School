#include <iostream>
using namespace std;

class Rectangle{
  public:
    float a;
    float b;
    float result_area(float a, float b);
    float result_ambit(float a, float b);
};

float Rectangle::result_area(float a,float b){
    return a*b;
};
float Rectangle::result_ambit(float a,float b){
    return a*2+b*2;
};

float a_pom, b_pom;

int main()
{
    cout << "Enter the dimensions of the rectangle: ";
    cin >> a_pom;
    cin >> b_pom;
    Rectangle area;
    Rectangle ambit;
    area.a=a_pom;
    area.b=b_pom;
    cout << "The area of the rectangle is: " << area.result_area(area.a,area.b) << endl;
    cout << "The ambit of the rectangle is: " << area.result_ambit(area.a,area.b);
    return 0;
}

