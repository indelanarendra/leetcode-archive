#include<math.h>
int countNumbersWithUniqueDigits(int n) {
    int a,b;
    int temp =1;
    int ans=1;
    int i=9;
    for (a=1;a<=n;a++){
        if(n == 0) return ans;
        for(b=1;b<=a;b++){
            if(b>2) i-=1;
            temp = temp*i;
        }
        ans+=temp;
        temp =1;
        i =9;
    }
return ans;
 }    
    