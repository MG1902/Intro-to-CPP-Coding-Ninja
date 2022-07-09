void printSubstrings(char input[]) {
    // Write your code here
    for(int i=0;i<strlen(input);i++)
    {
        for(int j=i;j<strlen(input);j++)
        {
            for(int k=i;k<=j;k++)
                cout<<input[k];
            cout<<"\n";
        }
    }

}
