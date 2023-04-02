#include<iostream>
using namespace std;
# define pi 3.1415

/*Write a C++ program that illustrates the concept of Function over loading*/

float area(double side){//gives area of square
    return side * side;
}

float area(float length, float breadth){//gives area of rectangle
    return length * breadth;
}

float area(float base, float height, float dummy){//gives area of triangle
    return 0.5 * base * height;
}

float area(float radius){//gives area of circle
    return pi * radius * radius;
}

void displayUnit(){
    cout << "Enter your choice for unit:" << endl;
    cout << "1. milimeter" << endl;
    cout << "2. centimeter" << endl;
    cout << "3. meter" << endl;
    cout << "4. kilometer" << endl;
}

void displayMenu() {
    cout << "Enter your choice:" << endl;
    cout << "1. Area of Circle" << endl;
    cout << "2. Area of Square " << endl;
    cout << "3. Area of Rectangle" << endl;
    cout << "4. Area of Triangle" << endl;
    cout << "0. Exit" << endl;
}

int main(){
    int choice;
    double side;
    float radius, base, height, length, breadth;
    int unit_choice;

    do {
    displayUnit();
    cout << "Enter choice here: ";
    cin >> unit_choice;

    displayMenu();
    cout<<"Enter your choice here: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter radius of circle: ";
            cin >> radius;
            cout << "Area of circle is " << area(radius);
            switch(unit_choice){
                case 1:
                cout<<" mm^2\n";
                break;

                case 2:
                cout<<" cm^2\n";
                break;

                case 3:
                cout<<" m^2\n";
                break;

                case 4:
                cout<<" km^2\n";
                break;

                default:
                cout << "Invalid choice" << endl;
            }
            break;
        case 2:
            cout << "Enter side of square: ";
            cin >> side;
            cout << "Area of square is " << area(side);
            switch(unit_choice){
                case 1:
                cout<<" mm^2\n";
                break;

                case 2:
                cout<<" cm^2\n";
                break;

                case 3:
                cout<<" m^2\n";
                break;

                case 4:
                cout<<" km^2\n";
                break;

                default:
                cout << "Invalid choice" << endl;
            }
            break;
        case 3:
            cout << "Enter length of rectangle: ";
            cin >> length;
            cout << "Enter breadth of rectangle: ";
            cin >> breadth;
            cout << "Area of rectangle is " << area(length, breadth);
            switch(unit_choice){
                case 1:
                cout<<" mm^2\n";
                break;

                case 2:
                cout<<" cm^2\n";
                break;

                case 3:
                cout<<" m^2\n";
                break;

                case 4:
                cout<<" km^2\n";
                break;

                default:
                cout << "Invalid choice" << endl;
            }
            break;
        case 4:
            cout << "Enter base of triangle: ";
            cin >> base;
            cout << "Enter height of triangle: ";
            cin >> height;
            cout << "Area of triangle is " << area(base, height, 0);
            switch(unit_choice){
                case 1:
                cout<<" mm^2\n";
                break;

                case 2:
                cout<<" cm^2\n";
                break;

                case 3:
                cout<<" m^2\n";
                break;

                case 4:
                cout<<" km^2\n";
                break;

                default:
                cout << "Invalid choice" << endl;
            }
            break;
        case 0:
            cout << "Exited" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }
    
    }while(choice != 0);
}