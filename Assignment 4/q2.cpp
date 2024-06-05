#include<iostream>
using namespace std;
int main()
{
int a=100,b=500,rem,ans,num;
cout<<"Armstrong Numbers Between "<<a<<" and "<<b<<" are:"<<endl;
for(int i =a;i<=b;i++){

  ans=0;
  num=i;
  while(num!=0){
   rem=num%10;
   ans+=rem*rem*rem;
   num=num/10;
  }
  if(i==ans){
    cout<<i<<" ";
  }
}

return 0;
}