#include <bits/stdc++.h>
using namespace std;
 
string DecimalToBinary(int num)
{
    string str;
      while(num){
      if(num & 1)
        str+='1';
      else // 0
        str+='0';
      num>>=1;  
    }   
      return str;
}
 
void reverse(string str)
{
  for(int i=str.size()-1 ; i>=0 ; i--)
   cout<< str[i];
}
 
int main() {
    int n;
    cin>>n;
    if(n==0)
        cout<<"0";
    else
      reverse( DecimalToBinary(n) );
    return 0;
}
