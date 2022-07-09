#include <iostream>
using namespace std;

void print2DArray(int **input, int row, int col) {
	// Write your code here
    
for(int i=0;i<row;i++)
{
 int x=row-i;
    while(x--)
    {
        for(int j=0;j<col;j++)
     cout<<input[i][j]<<" ";
          cout<<"\n";
    }
}
}


