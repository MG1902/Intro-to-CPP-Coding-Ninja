#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        char c=n+65-i;
        for(char j=c;j<=n+64;j++)
            cout<<j;
        cout<<"\n";
        
    }
    
}
