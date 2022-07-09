void pushZeroesEnd(int *input, int size)
{
    int k=0;
    for(int i=0;i<size;i++)
    {
        if(input[i]!=0)
        {
            input[k]=input[i];
            k++;
        }
    }
    while(k<size)
    {
        input[k]=0;
        k++;
    }
}
