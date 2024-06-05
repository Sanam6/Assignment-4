#include<iostream>
using namespace std;
int main()
{
int n,num=2;
bool flag=0,prime=1;
cout<<"Enter the number of Lines: ";
cin>>n;
for(int i =0;i<n;i++){
    for(int j=0;j<n-i;j++){
        cout<<" ";
    }
    for(int j=0;j<i+1;j++){
    flag=0;
  
    while(flag!=1){
          prime=1;
        for(int k=2;k<num;k++){
            if(num%k==0){
                flag=0;
                prime=0;
            }
        }
        if(prime==1){
            cout<<num<<" ";
            flag=1;
        }
        num++;
    }
    
    }
    cout<<endl;
    
}

return 0;
}