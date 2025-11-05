#include <cmath>
#include <iostream>
using namespace std;

double areaOfCircle(float radius=2);//default parameter, when input argument is skipped or missing, default parameter is used.
int addNumber(int x, int y, int z=20, int w=10);
int multThree(int a, int b, int c=20);//int a is mandatory and int c is default. Your defaults should always be at the right.

int main(){
   cout<<areaOfCircle()<<endl;
   cout<<addNumber(40, 50)<<endl;
   cout<<addNumber(40, 50, 10)<<endl;
   cout<<addNumber(40, 50, 10, 1000)<<endl;//Since z and w are default, if we hadn't specified their values as 10 and 1000, they would've been 20 and 10.
    cout<<multThree(5, 3);
}

double areaOfCircle(float radius){
    return 3.14*pow(radius,2);
}

int addNumber(int x, int y, int z, int w){
    return x+y+z+w;
}

int multThree(int a, int b, int c){
    return a*b*c;
}