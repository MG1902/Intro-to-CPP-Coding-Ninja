string getCompressedString(string &input) {
    // Write your code here.
    int len=input.length();
    string output="";
     int s=0;
    int count=0;
    int i=0;
    while(i<len)
    {
        if(input[s]==input[i])
        {
            count++;
            i++;
        }
        else
        {
         
            if(count>1)
                 output+=input[s]+to_string(count);
        else
        {
             output+=input[s];
        }
            count=1;
            s=i;
            i++;
        }
    }
    return output;
}
