#include<iostream>
using namespace std;


int solve(int n)
{
        if(n<=1)
        return n;
return solve(n-1)+solve(n-2);
}
int main(){
    //Write your code here.   
    int n;
    cin>>n;
    cout<<solve(n)<<"\n";
}
