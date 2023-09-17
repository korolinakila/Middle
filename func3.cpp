#include "middle.h"
#include <iostream>
using namespace std;

int itc_second_max_num(long long number){
 long long s = 10, p=0, h, g=0;
    if(number<0){
        number = number*(-1);
    }
    if(number/10==0){
        return -1;
    }
    s = number;
    while(s!=0){
        h = s%10;
        if(h>p){
            g=p;
            p=h;
        }
        if(h>g && h<p){
            g=h;
        }
        s = s/10;
    }
    return g;
}   //11


int itc_second_simple_max_num(long long number){
 long long s, p=0, h, g=0, j, u=1;
    if(number<0){
        number = number*(-1);
    }
    if(number/10==0){
        return -1;
    }
    s = number;
    h = s%10;
        if(h>p){
            p=h;
        }
        if(h>g && h<p){
            g=h;
        }
        s = s/10;
        j=h;
    while(s!=0){
        h = s%10;
        if(h>j || h<j){
            u=0;
        }
        j=h;
        if(h>p){
            g=p;
            p=h;
        }
        if(h>g && h<p){
            g=h;
        }
        s = s/10;
    }
    if(u==1){
        return -1;
    }
    else{
    return g;
    }
}   //12

long long itc_bin_num(long long number){
    long long main, ost=1, p=0;
    main = number;
while(main!=0){
    ost = ost*10+main%2;
    main = main/2;
    }
    while( ost!=0){
        p+=ost%10;
        p = p*10;
        ost = ost/10;
    }
    return(p/100);
}   //13

 long long itc_oct_num(long long number){
     long long main, ost=1, p=0;
    main = number;
while(main!=0){
    ost = ost*10+main%8;
    main = main/8;
    }
    while( ost!=0){
        p+=ost%10;
        p = p*10;
        ost = ost/10;
    }
    return(p/100);
 }  //14

 int itc_rev_bin_num(long long number){
     long long ost, dva=1, main, sum=0;
     ost = number;
 while(ost!=0){
    main = (ost%10)*dva;
    sum+=main;
    dva = dva*2;
    ost = ost/10;
    }
    return sum;
 }  //15
