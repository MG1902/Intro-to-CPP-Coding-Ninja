void printTable(int start, int end, int step) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
     int cel = 1;
    for(int i=start; i <= end; i+=step){
        cel = (i-32) * 5/9;
        cout<< i << "\t"<<cel << endl;
    }
    
}


