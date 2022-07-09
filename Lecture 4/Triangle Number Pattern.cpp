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
        int j=i;
        for(int k=1;k<=j;k++)
            cout<<j;
        cout<<"\n";
    }
  
}
