int arrayRotateCheck(int *input, int size)
{
    //Write your code here
    int count=1;
    bool check=false;
     for(int i = 0; i < size-1; i++){
        if(input[i] <= input[i+1]){
            count++;
        }
     }
    if(check==false)
        return 0;
    else
    return count;
}
