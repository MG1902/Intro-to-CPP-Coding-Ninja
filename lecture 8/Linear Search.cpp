int linearSearch(int *arr, int n, int x)
{
    //Write your code here
    int index=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            index=i;
            return index;
        }
    }
    return -1;
}
