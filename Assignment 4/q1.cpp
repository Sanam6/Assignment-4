#include<iostream>
using namespace std;
int main()
{

int n,ans=1;
cout<<"Enter the number: ";
cin>>n;
int i=n;
do{
    ans*=i;
    i--;
}while(i>0);
cout<<"Factorial of "<<n<<" is: "<<ans;

return 0;
}