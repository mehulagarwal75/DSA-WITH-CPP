// Q.1 Write a Program to find the area of a circle.
// Q.2 Write a Program to find the area of a rectangle.
// Q.3 Write a Program to find the area of a triangle.
// Q.4 Write a Program to find Simple interest.
// Q.5 Write a Program to find the Perimeter of the circle.

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





    // Q.2 Write a Program to find the area of a rectangle.
     float length, width, a;

    cout << "Enter length of the rectangle: ";
    cin >> length;

    cout << "Enter width of the rectangle: ";
    cin >> width;

    a = length * width;

    cout << "Area of the rectangle is: " << a << endl;

}