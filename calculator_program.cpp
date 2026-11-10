#include <iostream>
using namespace std;
class Calculator{
    public:
        int sum(int a,int b){
            int sum = a + b;
            return sum;
        }
        double sum(double a,double b){
            int sum = a + b;
            return sum;
        }
        int diff(int a,int b){
            int diff = a - b;
            return diff;
        }
        double diff(double a,double b){
            int diff = a - b;
            return diff;
        }
        int product(int a,int b){
            int product = a * b;
            return product;
        }
        double product(double a,double b){
            int product = a * b;
            return product;
        }
        int divide(int a,int b){
            int divide = a / b;
            return divide;
        }
        double divide(double a,double b){
            int divide = a / b;
            return divide;
        }
        int modulo(int a,int b){
            int modulo = a % b;
            return modulo;
        }
};

int main(){
    int choice;
    Calculator c;
    cout<<"1.Add"<<endl;
    cout<<"2.Subtract"<<endl;
    cout<<"3.Multiply"<<endl;
    cout<<"4.Divide"<<endl;
    cout<<"5.Modulo"<<endl;
    cout<<"Enter a choice:";
    cin>>choice;
    if(choice == 1){cout<<"Sum is: "<<c.sum(5,8)<<endl;}
    else if(choice == 2){cout<<"Difference is: "<<c.diff(69.8,52.4)<<endl;}
    else if(choice == 3){cout<<"Product is: "<<c.product(45,100)<<endl;}
    else if(choice == 4){cout<<"Division is: "<<c.divide(12.5,4.0)<<endl;}
    else if(choice == 5){cout<<"Remainder is: "<<c.modulo(60,12)<<endl;}
    else{cout<<"Enter a valid choice:";}
    return 0;
}