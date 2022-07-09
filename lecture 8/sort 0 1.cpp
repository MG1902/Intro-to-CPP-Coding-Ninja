void sortZeroesAndOne(int *input, int size)
{
    //Write your code here
    int i=0;
    int j=size-1;
    while(i<=j)
    {
        if(input[i]==1)
        {
            swap(input[i],input[j]);
                j--;
        }
        else
            i++;
    }
}
