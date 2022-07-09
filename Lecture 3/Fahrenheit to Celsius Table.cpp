
#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int s,e,w;
    cin>>s>>e>>w;
    for(int i=s;i<=e;i+=w)
    {
        cout<<i<<" "<<((i-32)*5)/9<<"\n";
    }
}


