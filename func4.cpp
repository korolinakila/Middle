 #include "middle.h"
#include <iostream>
using namespace std;


 int itc_rev_oct_num(long long number){
    long long ost, dva=1, main, sum=0;
    ost = number;
    while(ost!=0){
    main = (ost%10)*dva;
    sum+=main;
    dva = dva*8;
    ost = ost/10;
    }
    return sum;
 }  //16

int itc_covert_num(long long number, int ss){
    long long main, ost=1, p=0;
    main = number;
while(main!=0){
    ost = ost*10+main%ss;
    main = main/ss;
    }
    while( ost!=0){
        p+=ost%10;
        p = p*10;
        ost = ost/10;
    }
    return(p/100);
}   //17

int itc_rev_covert_num(long long number, int ss){
    long long ost, dva=1, main, sum=0;
    ost = number;
    while(ost!=0){
    main = (ost%10)*dva;
    sum+=main;
    dva = dva*ss;
    ost = ost/10;
    }
    return sum;
}   //18

