#include <stdio.h>
#include <stdlib.h>

void main(){
    char n_str[15],m_str[15] ;
    long long n,m ;

    fgets(n_str,15,stdin);
    n = atoll(n_str);
    fgets(m_str,15,stdin);
    m = atoll(m_str);

    long long a=n,b=m,c ;
    while(b!=0){
        c = b;
        b = a%b;
        a = c;
    }
    printf("GCD: %lld\n",a);
}