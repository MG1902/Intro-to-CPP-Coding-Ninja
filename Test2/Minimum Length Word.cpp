int strlen(char input[])
{
    int len = 0; 
    for(int i = 0; input[i] != '\0'; i++) 
    {
         len++;
    }
        return len; 
}
void minLengthWord(char input[], char output[]){ 
    int minStart = -1;
    int minLength = 2147483647;
    int currentStart = 0;
    int i = 0;
    int len = strlen(input);
    for(; i < len; i++){ 
        if(input[i] == ' '){
            int currentWordLength = i - currentStart;
            if(currentWordLength < minLength){
                minStart = currentStart; 
                minLength = currentWordLength;
            }
            currentStart = i + 1;
        }
    }
    if(minStart == -1){
        for(int i = 0; i <= len; i++) { 
            output[i] = input[i];
        }
    }
    else{
        int currentWordLength = i - currentStart;
        if(currentWordLength < minLength){
            minStart = currentStart;
            minLength = currentWordLength;
        } 
        int j = 0;
        for(int i = minStart; i < minStart + minLength; i++) {
            output[j++] = input[i];
        }
        output[j] = '\0';
    }
}
