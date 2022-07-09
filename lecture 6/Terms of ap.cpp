#include<iostream>
using namespace std;
int main() {
	int n;
	int i;
    long long res;
	int flag = 0;
	cin >>n;
	for(i = 1; flag<n;i++ )
	{ 
		res = ((3*i) + 2);
		if(res % 4 != 0) 
		{
				cout <<res<<" ";
				flag++;
		}	
	}
}
