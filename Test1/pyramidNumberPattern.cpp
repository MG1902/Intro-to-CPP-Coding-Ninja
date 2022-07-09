#include<iostream>
using namespace std;

int main(){

  // Write your code here  
  int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
            cout<<" ";
            for(int x=i;x>=1;x--)
                cout<<x;
            for(int y=2;y<=i;y++)
                cout<<y;
        cout<<"\n";
    }
  
}

