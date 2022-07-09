#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
 
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k=n-i;
        int x=k;
        while(x--)
            cout<<k;
        cout<<"\n";
    }
        
}


