bool isPermutation(char input1[], char input2[]) {
    
    int m=strlen(input1);
    int n=strlen(input2);
    long long int sum=0,sum1=0;
    for(int i=0;i<m;i++){
        sum+=input1[i];
    }
    for(int i=0;i<n;i++){
        sum1+=input2[i];
    }
    
    if(sum==sum1){
        return true;
    }
    else {
        return false;
        }    
    
    
}
