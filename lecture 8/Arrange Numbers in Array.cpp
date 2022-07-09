void arrange(int *arr, int n)
{
    //Write your code here
  int i=0;
    int j=n-1;
    int k=1;
    int m=2;
    while(i<j)
    {
        arr[i]=k;
        k+=2;
        i++;
        arr[j]=m;
        m+=2;
        j--;
    }
    arr[n/2]=n;
}
