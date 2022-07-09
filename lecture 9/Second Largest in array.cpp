int findSecondLargest(int *input, int n)
{
    //Write your code here
    int max=-2147483648 ;
    int secmax=-2147483648 ;
    for(int i=0;i<n;i++)
    {
        if(input[i]> max) { 
            secmax = max;
            max =input[i];
        } 
        else if(input[i]> secmax && input[i] != max) {
            secmax = input[i];
        }
    }
    return secmax;
}
