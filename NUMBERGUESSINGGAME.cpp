#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int i=1;
    int attempt,guessnumber;
    cout<<"Enter The Attempt=";
    cin>>attempt;
   
    srand(time(0));
    int number=rand()%100+1;
    while(i<=attempt){
         cout<<"enter the guess number(1 TO 100)=";
    cin>>guessnumber;
        if(number<guessnumber){
            cout<<"TOO HIGH"<<endl;
        }
        else if(number>guessnumber)
        {
            cout<<"TOO LOW"<<endl;
        }
        else{
          cout<<"CONGRULATION YOU ARE WINNER!";
        }
          i++;
    }
  
    cout<<"YOUR NUMBER IS="<<number;
    return 0;
}