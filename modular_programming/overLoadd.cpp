//Solution by WENDMAGEGN T.
//Software Engineer.

//Questions 1. /*Write a function based program to find the square of integer and rational number.*/ 
               /*Use two function of the same name that accept integer and double parameters by reference.*/
#include<iostream>
using namespace std;

int square(int &num){
    return num * num;
}
double square(double &num){

    return num * num;
}
int main(){
    int n1;
    cout<<"Enter the integer numbers: ";
    cin>>n1;

    cout<<"The Square of the number is: "<<square(n1);
    
    double n;
    cout<<"\nEnter the rational number: ";
    cin>>n;
    cout<<"The Rational numbers: "<<square(n);
    //square(n);
    return 0;
}
