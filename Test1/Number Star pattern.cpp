#include<iostream>
using namespace std;


int main(){

  // Write your code here
int n;
    cin>>n;
            for(int j=1;j<=n;j++)
                cout<<j;
            for(int k=n;k>=1;k--)
                cout<<k;
            cout<<"\n";
    for(int i=2;i<=n;i++)
    {
       for(int j=1;j<=n+1-i;j++)
            cout<<j;
        for(int k=1;k<=(i-1)*2;k++)
            cout<<"*";
        for(int x=n+1-i;x>=1;x--)
            cout<<x;
        cout<<"\n";
    }
}


