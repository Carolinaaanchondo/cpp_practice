#include <iostream>
using namespace std;

void add(int a, int b);

int main(){
    add(8, 3);
    cin.get();
    return 0;
}

void add(int a, int b){
    cout<<(a+b);
}

void sub(int a, int b)