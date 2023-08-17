#include<bits/stdc++.h>
using namespace std;
int main(){
    system("color 3");
    int rnum=rand()%100+1;
    int flag=1; int num;
    cout<<"NUMBER GUESSING GAME "<<endl;
    cout<<"Guess a Number between 1 and 100"<<endl;
    do
    {
        cin>>num;
        if(num==rnum){
            cout<<"Congratulations !! Your Guess is Correct "<<endl;
            system("color 2");
            flag=0;
        }
        else if(num>rnum){
           cout<<"Your Guess is Too High ! "<<endl;
           system("color 4");
        }
        else if(num<rnum){
           cout<<"Your Guess is Too Low ! "<<endl;
           system("color 4");
        }
}while (flag==1 );
return 0;
}