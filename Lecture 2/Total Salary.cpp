#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
	int s;
    char x;
    cin>>s>>x;
    double hra=0.2*s;
    double da=0.5*s;
    double pf=0.11*s;
    double total=s+hra+da-pf;
    if(x=='A')
        total=total+1700;
    else if(x=='B')
        total=total+1500;
    else
        total=total+1300;
    cout<<llround(total)<<"\n";
}
