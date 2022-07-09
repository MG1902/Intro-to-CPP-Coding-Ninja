void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    int carry = 0;
    int j = size2-1,i = size1-1;
    int k = max(size1,size2);
    while(j >= 0 && i >= 0){
        
        output[k] = (input1[i] + input2[j] + carry)%10;
        
        if((input1[i] + input2[j]) > 9){
            carry = 1;
        }
        else{
            carry = 0;
        }
        i--;j--;k--;
    }
    
    
    
    if(j < 0){
        while( i >= 0){
            output[k] = (input1[i] + carry)%10;
            
            if((input1[i] + carry) > 9){
                carry = 1;
            }
            else{
                carry = 0;
            }
            i--;k--;
        }
 
    }
    
    
    if(i < 0){
        while( j >= 0){
            output[k] = (input2[j] + carry)%10;
            
            if((input2[j] + carry) > 9){
                carry = 1;
            }
            else{
                carry = 0;
            }
            j--;k--;
        }
        
        
    }
    
     while(k >= 0){
            output[k] = carry;
            k--;
        }
    
}
