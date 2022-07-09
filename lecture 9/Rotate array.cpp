void rotate(int *input, int d, int n)
{
    //Write your code here
   int input1[n];
    int k=0;
    for(int i=d;i<n;i++)
    {
        input1[k]=input[i];
        k++;
    }
  for(int i=0;i<d;i++)
    {
        input1[k]=input[i];
        k++;
    }
   for(int i=0;i<k;i++)
       input[i]=input1[i];
        
}
