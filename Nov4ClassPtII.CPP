#include <cmath>
#include <iostream>
using namespace std;
string addNewCar(string inventory, string model, string year);
string searchCar(string inventory, string model);

// double areaOfCircle(float radius=2);//default parameter, when input argument is skipped or missing, default parameter is used.
// int addNumber(int x, int y, int z=20, int w=10);
// int multThree(int a, int b, int c=20);//int a is mandatory and int c is default. Your defaults should always be at the right.
// int divideNums(int x, int y);//This function will be picked up if you provide 2 parameters.
// int divideNums(int x, int y, int z);//This one will be picked if you provide 3.
// int divNums (int x);//This one will be picked if you provide only 1.
// string eligibility(int age, bool employed);
// string eligibility(int id);

// int main(){
//     // cout<<areaOfCircle()<<endl;
//     // cout<<addNumber(40, 50)<<endl;
//     // cout<<addNumber(40, 50, 10)<<endl;
//     // cout<<addNumber(40, 50, 10, 1000)<<endl;//Since z and w are default, if we hadn't specified their values as 10 and 1000, they would've been 20 and 10.
//     // cout<<multThree(5, 3);
//     cout<<eligibility(21, true)<<endl;
//     cout<<eligibility(50)<<endl;
// }

// string eligibility(int age, bool employed){
//     if(age>16 && employed==true){
//         return "eligible to get a loan";
//     }else if(age>16 && employed==false){
//         return "eligible to get a loan with higher APR";
//     }return "not eligible";
// }

// string eligibility(int id){
//     if(id>100){
//         return "eligible to get a loan";
//     }
//     return "not eligible";
// }

// // double areaOfCircle(float radius){
// //     return 3.14*pow(radius,2);
// // }

// // int addNumber(int x, int y, int z, int w){
// //     return x+y+z+w;
// // }

// // int multThree(int a, int b, int c){
// //     return a*b*c;
// // }

// // int divideNums(int x, int y){
// //     return x/y;
// // }

// // int divideNums(int x, int y, int z){
// //     return (x/y)/z;
// // }

// // int divNums (int x){
// //     return 10/x;
// // }

// string inventory="ford 2024. Honda 2001. Toyota 2010";

int main(){
    string inventory="Ford 2000.";

    while (true){
        cout<<"Select one\n1.List all cars\n2.Add new car\n3.Remove car\n4.Search car\n5.Exit\n";
        int option;
        cin>>option;
        
        if (option==1){
            if (inventory.length()==0){
                cout<<"You don't have any cars to display"<<endl;
            }else{
                cout<<inventory<<endl;
                break;
            }
        }
        else if(option==2){
            string model, year;
            cout<<"Enter your car model and year: ";
            cin>>model>>year;
            inventory=addNewCar(inventory, model, year);
        }

        else if(option==4){
            string model;
            cout<<"Enter car model to search: ";
            cin>>model;
            cout<<searchCar(inventory, model)<<endl;
        }
        else if(option==5){
            cout<<"Goodbye";
            break;
        }
    }
}

string addNewCar(string inventory, string model, string year){
    inventory=inventory+model+" "+year+". ";
    return inventory;
}

string searchCar(string inventory, string model){
int foundOrNot=inventory.find(model);
if(foundOrNot>-1){
    return "car found";
}return "car not found";
}

void listAllCars(string inventory){
    string singleCar="";
    int counter=1;

    for(int i=0;i<inventory.length();i++){
        if inventory([i]!='.'){
            singleCar="";
        }
    }
}