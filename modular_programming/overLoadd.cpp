//Solution by WENDMAGEGN T.
//Software Engineer.
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
