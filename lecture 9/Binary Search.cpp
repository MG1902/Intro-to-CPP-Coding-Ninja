int binarySearch(int *input, int n, int val)
{
    //Write your code here
    int start=0;
    int end=n-1;
    int mid=(start+(end-start)/2);
    while(start<=end)
    {
        if(input[mid]==val)
            return mid;
        else if(input[mid]<val)
            start=mid+1;
        else
            end=mid-1;
        mid=(start+(end-start)/2);
            
    }
    return -1;
}
