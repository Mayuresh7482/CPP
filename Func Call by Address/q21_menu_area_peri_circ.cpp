#include <iostream>

using namespace std;
const int PI = 3.14159;
double perimetercircle(double radius)
{

    double circumference = 2 * PI * radius;
    return circumference;
}

double areaCircle(double radius)
{
    double area = PI * radius;
    return area;
}
double areaPerimeter(double length, double width)
{

    double area = length * width;
    return area;
}

double perimeter(double length, double width)
{

    double peri = 2 * (length + width);
    return peri;
}
int main()
{
    int choice;
    do
    {
        int radius, length, width;
        cout << "Enter your choice : " << endl;
        cout << "1. perimeter of Circle \n 2. area of circle \n 3. area of perimeter \n 4. perimeter of rectangle \n 5.exit ..." << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter radius for perimeter of circle : " << endl;
            cin >> radius;
            cout << "Perimeter of Circle is : " << perimetercircle(radius) << endl;
            break;
        case 2:
            cout << "Enter radius for area of circle : " << endl;
            cin >> radius;
            cout << "Area of Circle is : " << areaCircle(radius) << endl;
            break;
        case 3:
            cout << "Enter length for area of rectangle : " << endl;
            cin >> length;
            cout << "Enter width for area of rectangle : " << endl;
            cin >> width;
            cout << "Area of Circle is : " << areaPerimeter(length, width) << endl;
            break;
        case 4:
            cout << "Enter length for perimeter of rectangle : " << endl;
            cin >> length;
            cout << "Enter width for perimeter of rectangle : " << endl;
            cin >> width;
            cout << "Perimeter of Rectangle is : " << perimeter(length, width) << endl;
            break;
        case 5:
            cout << "good bye ... " << endl;
        default:
            cout << "Invalid input !!! plz try again ... " << endl;
        }
    } while (choice != 5);

    return 0;
}