void removeAllOccurrencesOfChar(char input[], char c) {
    // Write your code here
    int count=0;
    int k=0;
for(int i=0;i<strlen(input);i++)
{
    if(input[i]!=c)
    {
        input[k]=input[i];
        k++;
    }
}
    input[k]='\0';
}
