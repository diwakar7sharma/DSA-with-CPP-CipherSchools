#include<iostream>
using namespace std;
int main(){

    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;

    //if 

    if(a>b){
        cout<<"First Number Entered is greater than the Second Number Entered."<<endl;
    }
    if(b>a){
        cout<<"First Number Entered is greater than the Second Number Entered."<<endl;
    }

    //if-else

    float y;
    cout<<"Enter your percentile : ";
    cin>>y;
    cout<<"You Recieved Grade : ";
    if(y>=90)
        cout<<"O"<<endl;
    else if(y<90 && y>=80)
        cout<<"A"<<endl;
    else if(y<80 && y>=70)
        cout<<"B"<<endl;
    else if(y<70 && y>=60)
        cout<<"C"<<endl;
    else if(y<60 && y>=50)
        cout<<"D"<<endl;
    else
        cout<<"F - You have Failed your Exams.";

    //switch 
    //switch statements prints all the cases after a satisfied one.(needs break to stop)
    int x;
    cout<<"Enter a Number : ";
    cin>>x;
    switch(x){
    case 1:
        cout<<"X stores value 1.";
        break;
    case 2:
        cout<<"X stores value 2.";
        break;
    case 3:
        cout<<"X stores value 3.";
        break;
    default:
        cout<<"Number is Bigger than 3.";
        break;
    }
    return 0;
}