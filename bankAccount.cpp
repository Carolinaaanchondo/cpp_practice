#include <iostream>
using namespace std;
const int SECURITY_PIN_CODE=123;

int main(){
    
double balance=1000;
    int pin;
    while(true){
        
        cout<<"enter your 3 digit pin first:";
        cin>>pin;
        if(pin==SECURITY_PIN_CODE){
            cout<<"choose menu options.\n1.Show balance\n2.Deposit\n3.Withdraw\n4.Exit:";
            int menu;
            double deposit;
            double withdraw;
            cin>>menu;
            if(menu==1){
                cout<<"Your most recent balance is "<<balance<<endl;
            }else if(menu==2){
                cout<<"enter amount to deposit:"<<endl;
                cin>>deposit;
                balance=balance+deposit;
                cout<<"deposit successfull"<<endl;
            }else if(menu==3){
                cout<<"enter amount to withdraw:"<<endl;
                cin>>withdraw;
                if(withdraw>balance){
                    cout<<"not enough funding."<<endl;
                }else{
                    
                    balance=balance-withdraw;
                    cout<<"withdraw successfull"<<endl;
                }
            }else if(menu==4){
                cout<<"good bye";
                break;
            }
        }else{
            cout<<"incorrect pin!";
        }
        
        
    }
}