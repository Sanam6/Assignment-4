#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter num: ";
cin>>n;
for(int i =0;i<2*n-1;i++){
for(int j=0;j<2*n-1;j++){
    if((j==i)||(j==2*n-2-i)){
        cout<<"*";
    }
    else{
        cout<<" ";
    }
}
cout<<endl;
}
     

return 0;
}