void trimSpaces(char input[]) {
    // Write your code here
    int count=0;
    for(int i=0;i<strlen(input);i++)
    {
        if(input[i]!=' ')
        {
            input[count]=input[i];
            count++;
        }
    }
    input[count]='\0';
}
