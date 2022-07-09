#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int c=n-i;
        for(int k=1;k<=c;k++)
            cout<<" ";
        for(int j=1;j<=2*i-1;j++)
            cout<<"*";
        cout<<"\n";
    }
  
}


