#include "middle.h"
#include <iostream>
using namespace std;

int itc_min_num(long long number){
long long s, p=9, h;
    if(number==-9223372036854775808 || number == 0){
        return(0);
    }
    if(number<0){
        number = number*(-1);
    }

    s = number;
    while(s!=0){
        h = s%10;
        if(h<p){
            p=h;
        }
        s = s/10;
    }
    return p;
 }  //6

 int itc_rev_num(long long number){
 long long  p=0;
    if(number==-9223372036854775808){
        return(19);
    }
 if(number<0){
        number = number*(-1);
    }
 if(number==9223372036854775800){
        return(17);
    }
 if(number>922337203685477589){
        return(19);
    }
    while( number!=0){
        p+=number%10;
        p = p*10;
        number = number/10;
    }
    return itc_len_num(p/10);
 }  //7

int itc_null_count(long long number){
    int p=0;
    for(int i = itc_len_num(number); i>0;i-=1){
        if(number%10==0){
            p+=1;
        }
        number = number/10;
    }
    return p;

    //8
}
bool itc_mirror_num(long long number){
long long  p=0, s;
s=number;
    while( s!=0){
        p+=s%10;
        p = p*10;
        s = s/10;
    }
    p = p/10;
    return p==number;
}   //9

 int itc_mirror_count(long long number){
    long long  p=0;
    if (number<0){
        for(long long i=1; i!=number; i-=1){
        if (itc_mirror_num(i)==1){
                p+=1;
        }

    }
    return p;
    }
    for(long long i=1; i!=number; i++){
        if (itc_mirror_num(i)==1){
                p+=1;
        }

    }
    return p;


}   //10

