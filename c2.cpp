#include <iostream>
using namespace std;
int main()
{
    float m1, m2, m3,sum,avg;
    cin >> m1 >> m2 >> m3;
  //  float sum=0.00;
    sum = m1 + m2 + m3;
    // float avg=0.00;
    avg= sum/3;
    cout<<"avg is "<<avg<<"\n";
    float perc=(sum*100)/30;

    cout<<"percentage is "<<perc;
    if(perc> 80 && perc <=100)
     cout<<"\n a";
     else if(perc>70 && perc<=80)
       cout<<"\n b";

         else if(perc>60 && perc<=70)
         cout<<"\n c";
         
         else
         cout<<"\nfail";
     
}