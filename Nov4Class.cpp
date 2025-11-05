#include <iostream>
#include <string>
using namespace std;

void sayHello(string name); //Prototype: this function is declared before initialization
int findLocation(string text, string target);
int addNumber(int x, int y, int z);

int main(){
    int location=findLocation("hello, how are you","how"); //find is a string method that returns Location or index of target word in the
    cout<<location;
    cout<<endl;
    cout<<addNumber(10, 20, 20)<<endl;
    string name;
    cout<<"Enter user name: ";
    cin>>name;
    sayHello(name);
    string John="John Doe";
    cout<<John.length();
}

void sayHello(string name){
    cout<<"Welcome "<<name<<endl;
    int pinCode=1234;
    cout<<"Your pincode is "<<pinCode;
}

int findLocation(string text, string target){
    int location=text.find(target);
    return location;
}

int addNumber(int x, int y, int z){ //x, y, z are my parameters or input data
    return x+y+z;
}