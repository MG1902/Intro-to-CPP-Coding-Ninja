/*
You can use minimum value of integer as -2147483647 and 
maximum value of integer as 2147483647
*/
void findLargest(int **input, int nRows, int mCols)
{
    //Write your code here

    int max=-2147483648;
    int row=-1;
    int col=-1;
    int rf=0,cf=0;
    if(nRows==0&&mCols==0)
        cout<<"row 0"<<" "<<max;
    else
    {
        for(int i=0;i<nRows;i++)
    {
        int sum=0;
        for(int j=0;j<mCols;j++)
        {
           sum=sum+input[i][j]; 
        }
        if(sum>max)
        {
            max=sum;
            row=i;
            rf=1;
        }
    }
    for(int i=0;i<mCols;i++)
    {
        int sum=0;
        for(int j=0;j<nRows;j++)
        {
           sum=sum+input[j][i]; 
        }
        if(sum>max)
        {
            max=sum;
            col=i;
            rf=0;
        }
    }
    if(rf==1)
        cout<<"row"<<" "<<row<<" "<<max;
    else 
         cout<<"column"<<" "<<col<<" "<<max;
    }
        
}
