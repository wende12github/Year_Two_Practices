//Solution by WENDMAGEGN T.
//Software Engineer.

//Questions 2. /*Write a function based C++ program that find the Fibonacci series of a given number.*/ 
               /*Define a function named fibonacci that has one argument with default argument and returns integer.*/ 
               /*The function is called both with parameter and without parameter.*/

#include<iostream>
using namespace std;

int fibonacci(int n =10 ){
    int fib;
    cout<<"The Fibonacci Searise is: "<<endl;
     if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int fib1 = 0;
        int fib2 = 1;
        fib = 0;
        
        for (int i = 2; i < n; i++) {
            fib = fib1 + fib2;
            fib1 = fib2;
            fib2 = fib;
            cout<<" "<<fib<<", ";
        }
        
        
        return fib;
    }   
     
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int result = fibonacci(num);
    cout << "\nFibonacci series of " << num << ": " << result <<endl;
    
    int defaultResult = fibonacci();
    cout << "\nFibonacci series with default argument: " << defaultResult <<endl;
   
    
    return 0;
}
