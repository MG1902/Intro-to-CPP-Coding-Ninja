void bubbleSort(int *input, int size)
{
    //Write your code here
    for(int i=1;i<size;i++)
    {
        for(int j=0;j<size-i;j++)
        {
            if(input[j]>input[j+1])
            {
                swap(input[j],input[j+1]);
            }
        }
    }
}
