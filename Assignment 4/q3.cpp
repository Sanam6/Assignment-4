#include<iostream>
using namespace std;
int main()
{
int n,sum=0;
cout<<"Enter the Number: ";
cin>>n;
for(int i =1;i<=n;i++){
    sum+=i;
}
cout<<"Sum of "<<n<<" Natural Number: "<<sum;

return 0;
}