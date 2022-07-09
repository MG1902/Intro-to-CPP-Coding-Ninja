#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin>>n;
    if(n==0)
        cout<<"0";
    else
    {
        while(n%10==0)
        n=n/10;
    while(n!=0)
    {
        int digit=n%10;
        cout<<digit;
        n=n/10;    
    }    
     
    }
}
