char* toHex(int num) {
    char *s = (char*) malloc(sizeof(char) * 9), temp;
    int i = 0, j, val;

    /* Consider the number as unsigned, no concept of -ve / + ve in hexadecimal */
    unsigned n = (unsigned) num;

    if(n == 0) return "0";

    while(n){
        val = (n % 16);
        s[i ++] = (val < 10) ? val + '0': val % 10 + 'a';
        n /= 16;
    }
    s[i] = '\0';

    /* Reverse the string */
    for(i = 0, j = strlen(s) - 1; i < j; i ++, j --){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
}
    return s;          
}