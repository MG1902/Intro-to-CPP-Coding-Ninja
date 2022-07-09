bool checkPalindrome(char str[]) {
    // Write your code here
    bool flag=true;
    int i=0;
    int j=strlen(str)-1;
    while(i<=j)
    {
        if(str[i]!=str[j])
            flag=false;
        i++;
        j--;
    }
    return flag;
}
