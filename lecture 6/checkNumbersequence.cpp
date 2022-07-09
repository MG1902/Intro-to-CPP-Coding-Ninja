#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n;
    cin>>n;
    int a[n];
    int k=0;
    int flag=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;)
    {
        if(a[i-1]>a[i])
        {
            k++;
            i++;
        }
        else
            break;
    }
    for(int i=k+2;i<n;i)
    {
        if(a[i-1]<a[i])
            i++;
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    cout<<"false";
    else
        cout<<"true";
	
}
