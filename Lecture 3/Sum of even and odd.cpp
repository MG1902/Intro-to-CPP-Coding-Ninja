#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin>>n;
    long long sum1=0;
    long long sum2=0;
    while(n!=0)
    {
        int d=n%10;
        if(d%2==0)
            sum1+=d;
        else
            sum2+=d;
        n=n/10;
    }
    cout<<sum1<<" "<<sum2<<"\n";
}
