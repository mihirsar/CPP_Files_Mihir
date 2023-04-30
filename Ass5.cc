#include<iostream>
using namespace std;
/*
Problem Statement
Write a program in C++ to perform following operations on complex numbers Add, Subtract,
Multiply, Divide. Use operator overloading for these operations. The objective of this
assignment is to learn the concepts operator overloading.

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

	void setval(complex &c_1){
		cout<<"Enter number's real & imaginary part in spaced manner: ";
		cin>>c_1.real>>c_1.imag;
	}

    void display(){
        if (imag > 0){
            cout<<real<<" + "<<imag<<endl;
        }

        else {
            cout<<real<<" "<<imag<<endl;
        }
    }

	void displaymenu(void){
		cout<<"\n1.Enter first complex number\n2.Enter second complex number\n3.Add\n4.Subtract\n5.Multiply\n6.Divide\n7.Conjugate\n";
	}

    complex operator+(complex const& obj){
        complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
		return res;
    }

    complex operator-(complex const& obj){
        complex res; 
        res.real = real - obj.real;
        res.imag = imag - obj.imag;
		return res;
    }

     complex operator*(complex const& obj){
        complex res;
        res.real = real * obj.real;
        res.imag = imag * obj.imag;
		return res;
    }

    complex operator/(const complex& obj) {
        complex res;
        double den = obj.real * obj.real + obj.imag * obj.imag;
        res.real = ((real * obj.real + imag * obj.imag) / den);
        res.imag = (imag * obj.real - real * obj.imag) / den;
		return res;
    }

};
int main(){
	int choice;
	complex c, c1, c2, c3;
	
	do{
	c.displaymenu();
	cout<<"Enter your choice here: ";
	cin>>choice;

	switch(choice){
		case 1://1st num
		c1.setval(c1);
		break;

		case 2://2nd num
		c2.setval(c2);
		break;

		case 3://Add
		c3 = c1 + c2;
		c3.display();
		break;

		case 4://Subtract
		c3 = c1 - c2;
		c3.display();
		break;

		case 5://Multiply
		c3 = c1 * c2;
		c3.display();
		break;

		case 6://Division
		c3 = c1 / c2;
		c3.display();
		break;

		case 7://Exit
		cout<<"Exited\n";
		break;

		default:
		cout<<"Invalid Choice!\n";
		break;
		
	}
	}while(choice != 7);

    return 0;
}