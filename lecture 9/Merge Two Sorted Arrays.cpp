void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    //Write your code here   
    int i=0;
    int j=0;
    int k=0;
    while(i<size1&&j<size2)
    {
        if(arr1[i]<arr2[j])
        {
            ans[k++]=arr1[i++];
        }
        else
        {
            ans[k++]=arr2[j++];
        }
    }
    while(i<size1)
    {
        ans[k++]=arr1[i++];
    }
    while(j<size2)
    {
        ans[k++]=arr2[j++];
    }
}
