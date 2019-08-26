#include <cstdio>
#include <iostream>

int main(){
    float s = 1.0/0; //Inf
    float a = -1.0/0; //-Inf
    float t = -1.0/0 * 0; //NaN
    printf("%x\n",*((unsigned int*) &s));
    return 0;
}