char highestOccurringChar(char input[]) {
    // Write your code here
    int ind=0;
    int a[123]={0};
    int len=strlen(input);
    for(int i=0;i<len;i++)
    {
        int index=input[i];
        a[index]++;
    }
    int max= -1;
    for(int i=97;i<123;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
             ind=i;
        }
    }
    return char(ind);
}
