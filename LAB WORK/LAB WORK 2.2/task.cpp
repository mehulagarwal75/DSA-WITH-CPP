// Q.1 Write a Program to find the area of a circle.

#include<iostream>
using namespace std;

main()
{
    // Q.1 Write a Program to find the area of a circle.
    float radius, area;
    const float PI = 3.14;

    cout << "Enter radius of the circle: ";
    cin >> radius;

    area = PI * radius * radius;

    cout << "Area of the circle is: " << area << endl;

}