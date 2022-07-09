#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }
    int j=0;
    while(j<m)
    {
         long long sum=0;
        for(int i=0;i<n;i++)
            sum=sum+a[i][j];
        cout<<sum<<" ";
        j++;
    }
  
}


