#include <iostream>
using namespace std;
int main()
{
    char shape;
    float radius, length, width, base, height, area;

    cout << "Select a shape(c for circle,r for rectangle & t for triangle)";
    cin >> shape;
    switch (shape)
    {
    case 'c':
        cout << "enter radius of circle: ";
        cin >> radius;
        area = 3.1416 * radius * radius;
        cout << "area of circle is: " << area;
        break;
    case 'r':
        cout << "enter lenght of rectangle: ";
        cin >> length;
        cout << "enter width of rectangle: ";
        cin >> width;
        area = length * width;
        cout << "area of rectangle is: " << area;
        break;
    case 't':
        cout << "enter base of triangle: ";
        cin >> base;
        cout << "enter height of triangle: ";
        cin >> height;
        area = 0.5 * base * height;
        cout << "area of triangle is: " << area;
        break;

    default:
        cout << "Invalid shape";
        break;
    }
}