#include <iostream>
#include <string>
using namespace std;
//functions that can accept arguments, they need parameters.
//accepts a string as its only argument
//has a single string parameter value
void foo(int x, int y)
{
    cout<<(x+y)<<endl;//two integer parameter variables
}
int main(){
    //call function and pass it a string "argument"
    //a literal or variable can be an argument.
    
    foo(8, 3);
    cin.get();//pause the program
    return 0;
}