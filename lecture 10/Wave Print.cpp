void wavePrint(int **input, int nRows, int mCols)
{
    int cs=0,rs=0,ce=mCols-1,re=nRows-1;
    while(cs<=ce ){
        if(cs%2==0){
        for(int row=rs;row<=re;row++){
            cout<<input[row][cs]<<" ";
        }
        cs++;
        }
        else{
        for(int row=re;row>=rs;row--){
            cout<<input[row][cs]<<" ";
        }
      cs++;  
    }
    }
}
