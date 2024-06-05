#include<iostream>
using namespace std;
int main()
{
int n,temp,num=0,rem;
cout<<"Enter the number: ";
cin>>n;
temp=n;
while(temp!=0){
rem=temp%10;
if(num==0){
    num=rem;
}
else{
    num=num*10+rem;
}
temp=temp/10;
}

cout<<"Reverse : "<<num;

return 0;
}