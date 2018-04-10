#include<iostream>
#define PI 3.1416
using namespace std;
int main()
{
    float radius, area, circum;

    cout << "\n\n Find the area and the circumference of a circle : \n";
    cout << "-------------------------------------------------------\n";

    cout << " Input the radius(1/2 of diameter) of a circle : ";
    cin >> radius;

    circum = 2 * PI * radius;
    area = PI * (radius * radius);

    cout << " The area of a circle is "<< area << " The circumference of a circle is " << circum << endl;

    cout << endl;
    return 0;
}
