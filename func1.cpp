#include "middle.h"
#include <iostream>
using namespace std;
void itc_num_print(int number){
    cout << number;
}  //1

int itc_len_num(long long number){
    long long s = 10, p=0;
    s = number;
    while(s!=0){
        s = s/10;
        p+=1;
    }
    return p;

}   //2

int itc_sum_num(long long number){
long long s = 10, p=0, h;
    s = number;
    while(s!=0){
        h = s%10;
        p+=h;
        s = s/10;
    }
    return p;
}   //3

 long long itc_multi_num(long long number){
 long long s = 10, p=1, h;
    s = number;
    while(s!=0){
        h = s%10;
        p=p*h;
        s = s/10;
    }
    return p;
 }  //4

 int itc_max_num(long long number){
 long long s = 10, p=0, h;
    if(number<0){
        number = number*(-1);
    }
    s = number;
    while(s!=0){
        h = s%10;
        if(h>p){
            p=h;
        }
        s = s/10;
    }
    return p;
 }  //5
