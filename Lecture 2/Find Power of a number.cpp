#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int x,n;
    cin>>x>>n;
    int power=1;
    for(int i=1;i<=n;i++)
        power=power*x;
    cout<<power<<"\n";
    
	
}
