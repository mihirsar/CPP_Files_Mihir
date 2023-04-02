#include<iostream>
using namespace std;

/*1. Write a program in C++ to sort the numbers in an array using separate functions for read,
display, sort and swap. The objective of this assignment is to learn the concepts of input,
output, functions, call by reference in C++.
*/

void swap(int* a, int* b){
   int temp = *a;
   *a = *b;
   *b = temp;
}

void read_arr(int* A, int size){
   for (int i=0; i<size; i++){
      cout<<"Enter an element: ";
      cin>>A[i];
   }
}

void display(int* A, int size){
   for (int i=0; i<size; i++){
      cout<<A[i]<<" ";
   }
}

void Bubblesort(int* A, int size){
   for(int i=0; i<size-1; i++){//for loop for passes
      //cout<<"No. of Passes = "<<i+1;
      for(int j=0; j<size-1-i; j++){
         if (A[j] > A[j+1]){
            //cout<<"No. of Iterations = "<<j+1;
            swap(A[j], A[j+1]);
         }
      }
   }
}

int main(){
   int arr[5];

   read_arr(arr, 5);
   cout<<"Original Array is: \n";
   display(arr, 5);

   Bubblesort(arr, 5);
   
   cout<<"\nSorted Array is: \n";
   display(arr, 5);
   return 0;
}