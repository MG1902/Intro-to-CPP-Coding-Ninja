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
        char c=i+64;
        for(char j=c;j<=2*i+63;j++)
            cout<<j;
        cout<<"\n";
    }
}
