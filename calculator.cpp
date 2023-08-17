#include<bits/stdc++.h>
using namespace std;
int calci(float num1,float num2){
    cout<<"Choose Operation to be performed:- "<<endl;
    cout<<"1. Addition 2. Subtraction\n3. Multiplication 4. Division "<<endl;
   
    int choice;
    
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"The Sum of "<<num1<<" and "<<num2<<" is "<<num1+num2;
        break;
    case 2:
        cout<<"The Subtraction of "<<num1<<" and "<<num2<<" is "<<num1-num2;
        break;
    case 3:
        cout<<"The Product of "<<num1<<" and "<<num2<<" is "<<num1*num2;
        break;
    case 4:
        cout<<"The Division of "<<num1<<" and "<<num2<<" is "<<num1/num2;
        break;

    default:
        cout<<"Invalid arithmetic operation"<<endl;
        break;
    }

}

int main(){
    float num1,num2;
    system("color 6");
    cout<<"Enter the two Numbers : "<<endl;
    cin>>num1>>num2;
    calci(num1,num2);
    char opr;
    do
    {   
    cout<<"\nWant to perform more operation ? ";
    cout<<"(if yes press 'y' otherwise 'n') "<<endl;
    cin>>opr;
    if(opr=='n') break;
    calci(num1,num2);
    }while(opr=='y');
    return 0;
}