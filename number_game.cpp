// CODESOFT TASK 1
#include<bits/stdc++.h>
using namespace std;

int main()
{
   cout<<"---WELCOME TO NUMBER GIESSING GAME---"<<endl;
   srand(time(0));
   int random=(rand()%100)+1;
   int num;
   int noOfAttempts=0;
   do{
      cout<<"Guess the number : ";
      cin>>num;
      noOfAttempts++;
      if(num<random){
           if(num>(random-3) && num<(random+3) )
                cout<<" You are close,come on!!"<<endl;
           else
                cout<<" You are too Low!!"<<endl;
        }
      else if(num>random){
          if(num>(random-3) && num<(random+3) )
                cout<<" You are close,come on!!"<<endl;
           else
                cout<<" You are too High!!"<<endl;
        }
      else{
          cout<<"--Wow,You are Right!!--"<<endl;
        }
      }while(num!=random);
      cout<<" No of attempts taken to find = "<<noOfAttempts<<endl;
      return 0;
}
/* decleration :
       This program is truely done with my knowledge and  also I included
       guessing the number closely
                                                      -- AKSAY M-- */
