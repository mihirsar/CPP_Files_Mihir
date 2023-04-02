#include<iostream>
using namespace std;

/*
Problem Statement 
Write a program in C++ to perform following operations on complex numbers Add, Subtract,
Multiply, Divide, Complex conjugate. Design the class for complex number representation
and the operations to be performed. The objective of this assignment is to learn the concepts
classes and objects.
*/

class complex{
    private:
    int real1, imag1, real2, imag2;

    public:

    void displaymenu(void){
        cout<<"Enter choice for which Operation to be performed.\n";
        cout<<"1.Set values of first complex number.\n";
        cout<<"2.Read first complex number.\n";
        cout<<"3.Addition of Complex Numbers.\n";
        cout<<"4.Subtraction of Complex Numbers.\n";
        cout<<"5.Multiplication of Complex Numbers.\n";
        cout<<"6.Division of Complex Numbers.\n";
        cout<<"7.Complex Conjugate of Complex Number.\n";

    }
    void setval(void){
        cout<<"Enter the real part of 1st number: ";
        cin>>real1;
        cout<<"Enter imaginary part of 1st number: ";
        cin>>imag1;
    }

    void getval(void){
        if (imag1>0){
            cout<<"1st complex num is: "<<real1<<" + "<<imag1<<"j\n";
        }
        else{
            cout<<"1st complex num is: "<<real1<<imag1<<"j\n";
        }
    }

    void complex_add(void){
        int resR, resI;
        cout<<"Enter 2nd complex num to perform addition operation\n";
        cout<<"Enter the real part of 2nd number: ";
        cin>>real2;
        cout<<"Enter imaginary part of 2nd number: ";
        cin>>imag2;

        cout<<"Entered Complex num is: ";
        if (imag1>0){
            cout<<"2nd complex num is: "<<real2<<" + "<<imag2<<"j\n";
        }
        else{
            cout<<"2nd complex num is: "<<real2<<imag2<<"j\n";
        }

        resR = real1 + real2;
        resI = imag1 + imag2;

        if (resI>0){
            cout<<"Resultant complex num is: "<<resR<<" + "<<resI<<"j\n";
        }
        else{
            cout<<"Resultant complex num is: "<<resR<<resI<<"j\n";
        }
    }

    void complex_subtract(void){
        int resR, resI;
        cout<<"Enter 2nd complex num to perform subtraction operation\n";
        cout<<"Enter the real part of 2nd number: ";
        cin>>real2;
        cout<<"Enter imaginary part of 2nd number: ";
        cin>>imag2;
        
        cout<<"Entered Complex num is: ";
        if (imag1>0){
            cout<<"2nd complex num is: "<<real2<<" + "<<imag2<<"j\n";
        }
        else{
            cout<<"2nd complex num is: "<<real2<<imag2<<"j\n";
        }

        resR = real1 - real2;
        resI = imag1 - imag2;

        if (resI>0){
            cout<<"Resultant complex num is: "<<resR<<" + "<<resI<<"j\n";
        }
        else{
            cout<<"Resultant complex num is: "<<resR<<resI<<"j\n";
        }
    }

    void complex_mult(void){
        int resR, resI;
        cout<<"Enter 2nd complex num to perform subtraction operation\n";
        cout<<"Enter the real part of 2nd number: ";
        cin>>real2;
        cout<<"Enter imaginary part of 2nd number: ";
        cin>>imag2;

        if (imag1>0 && imag2>0){
            resR = real1*real2 - imag1*imag2;
            resI = real1*imag2 + imag1*real2;
        }
        if (imag1>0)

    }

    void complex_div(void){}

    void complex_conjugate(void){
        int resR, resI;
        cout<<"Conjugate of 1st complex num is being computed";
        resI = imag1 * -1;
        if (resI>0){
            cout<<"Resultant complex num is: "<<resR<<" + "<<resI<<"j\n";
        }
        else{
            cout<<"Resultant complex num is: "<<resR<<resI<<"j\n";
        }
    }

};

int main(){
    int choice = 0;
    complex c1;//object c1 is created
   
    do{
        c1.displaymenu();
        cout<<"Enter your choice here: ";
        cin>>choice;

        switch(choice){

        case 1://setval
        c1.setval();
        break;

        case 2://getval
        c1.getval();
        break;

        case 3://add
        c1.complex_add();
        break;

        case 4://subtract
        c1.complex_subtract();
        break;

        case 5://multipliction
        c1.complex_mult();
        break;

        case 6://division
        c1.complex_div();
        break;

        case 7://conjugate
        c1.complex_conjugate();
        break;

        case 0://exit
        cout<<"Exited\n";
        break;

        default:
        cout<<"Invalid Choice\n";
    }
    }while(choice != 0);
    
    c1.complex_add();
    c1.complex_subtract();
    return 0;
}