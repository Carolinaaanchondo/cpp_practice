#include <cmath>
#include <iostream>
using namespace std;

double areaOfCircle(float radius=2);

int main(){
   cout<<areaOfCircle(40);
}

double areaOfCircle(float radius){
    return 3.14*pow(radius,2);
}