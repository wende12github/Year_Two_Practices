//Solution by WENDMAGEGN T.
//Software Engineer

#include<iostream>
using namespace std;

void pattern(char symbol){
    int size = 5;
    char uSymbol;
    cout<<"Enter the size of the pattern: ";
    cin>>size;
    
    
    for(int i=0; i<size; i++){
        for(int j=0; j<i; j++){
            cout<<symbol<<" ";
        }
        cout<<endl;
    }

}

int main(){
    char symbol = '*';
    char uSymbol;
    int choice;
    cout<<"Enter the Choice: ";
    cin>>choice;
    if(choice ==1){
        pattern(symbol);
    }else{
        cout << "Enter the symbol for the pattern (default is '*'): ";
        cin >> uSymbol;
        pattern(uSymbol);
    }
    
    return 0;
}
