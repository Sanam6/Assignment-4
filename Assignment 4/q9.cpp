#include<iostream>
using namespace std;
int main()
{
int n,x1=2,x2=2;;
bool flag1=1,flag2=1;
cout<<"Enter a +ve integer: ";
cin>>n;
while(x1<n){
flag1=1;
x2=x1;
for(int i=2;i<x1;i++){
    if(x1%i==0){
        flag1=0;
    }
}
if(flag1==1){
    while(x2<n){
    flag2=1;
    for(int i=2;i<x2;i++){
    if(x2%i==0){
        flag2=0;
    }
}
if(flag2==1&&n==x1+x2){
    cout<<n<<" = "<<x1<<" + "<<x2<<endl;
}
x2++;
}}
x1++;
}
return 0;
}