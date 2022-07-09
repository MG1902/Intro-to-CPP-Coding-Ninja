void replaceCharacter(char input[], char c1, char c2) {
    // Write your code here
    for(int i=0;i<strlen(input);i++)
    {
        if(input[i]==c1)
            input[i]=c2;
    }
}
