
#include <bits/stdc++.h>
using namespace std;
 void emi_calculator(){
          int money;
cout<<"eneter the amount of money you want to borrow "<<endl;
cin>>money;
int month;
cout<<"eneter the number of month in which you will pay the loan"<<endl;
cin>>month;
int down_payment;
cout<<"eneter the  down paymnet amount "<<endl;
cin>>down_payment;
float intrest;
cout<<"eneter the amount of intrest"<<endl;
cin>>intrest;
float answer;
int net_amount=(money-down_payment);
answer=(net_amount+(net_amount*intrest)/100)/month;
cout<<"total amount that you need to pay is "<<(answer*month)+down_payment<<endl;
cout<<"total amount of intrest you neeed to pay is "<<(net_amount*intrest)/100<<endl;
cout<<"the monthly emi that you need to pay is "<<answer<<endl;

     }

int main (){
     emi_calculator();
return 0;
}