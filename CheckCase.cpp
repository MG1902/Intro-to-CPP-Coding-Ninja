#include<iostream>
using namespace std;

int main() {
	// Write your code here
    char c;
    cin>>c;
    int x=c;
    if(x>=65&&x<=90)
        cout<<"1"<<"\n";
    else if(x>=97&&x<=122)
        cout<<"0"<<"\n";
    else
        cout<<"-1"<<"\n";
        
	
}
