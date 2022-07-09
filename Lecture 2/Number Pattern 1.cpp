
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
        for(int j=i;j<2*i;j++)
            cout<<j;
        cout<<"\n";
    }
  
}


