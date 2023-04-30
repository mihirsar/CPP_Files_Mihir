#include<iostream>
using namespace std;
/*
Problem Statement:
Write a program in C++ to overload unary operators for complex class. 
*/

class complex{
    double real, imag;

    public:
    complex(){
        real = 0;
        imag = 0;
    }

    complex(double r, double i){
        real = r;
        imag = i;
    }

    void displaymenu(){
        cout<<"\n    <---MENU--->\n1.Enter complex number.\n2.Positive\n3.Negative\n4.Exit\n";
    }

    void getval(){
        cout<<"Enter the complex number in real & imaginary part in spaced manner: ";
        cin>>real>>imag;
    }

    void display(){
        if (imag > 0){
            cout<<real<<" + "<<imag<<"j\n";
        }
        else{
            cout<<real<<" - "<<-imag<<"j\n";
        }
    }

    complex operator+(){
        return complex(real, imag);
    }

    complex operator-(){
        return complex(-real, -imag);
    }
};

int main(){
    int choice;
    complex c1, c2, c3;
    double r, i;

    do{
    c1.displaymenu();
    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice){

        case 1://getval num
        c1.getval();
        cout<<"Entered number is: ";
        c1.display();
        break;

        case 2://positive
        c2 = +c1;
        cout<<"Resultant number is: ";
        c2.display();
        break;

        case 3://negative
        c3 = -c1;
        cout<<"Resultant number is: ";
        c3.display();
        break;

        case 4:
        cout<<"Exited...\n";
        break;

        default:
        cout<<"Invalid Choice!\n";
        break;

        }
    }while(choice != 4);

    return 0;
}