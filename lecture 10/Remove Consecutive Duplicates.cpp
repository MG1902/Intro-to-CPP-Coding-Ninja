void removeConsecutiveDuplicates(char input[]) {
    // Write your code here
    char c=input[0];
    int count=1;
    for(int i=0;input[i]!='\0';)
    {
        if(input[i]==c)
            i++;
        else
        {
            input[count]=input[i];
            count++;
            c=input[i];
            i++;
        }
    }
    input[count]='\0';
}
