#include <iostream>

using namespace std;

int main(){
    int acc=0;
    int positive;
    

    while(positive>0){
    
        cout<<"Please enter a positive integer: ";
        cin>>positive;

        acc+=positive;
        positive--;
    }
}