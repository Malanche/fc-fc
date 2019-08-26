#include<iostream>
int main(){
    char a = 1; //0b0000 0001
                //0b1111 1110
    //El negativo asociado es 
                //0b0000 0010
    char b=3;   //0b0000 0011
    char c=8;   //0b0000 1000
    char d=127;
    d+=2;
    std::cout << ((int) d) << std::endl;
    // 0b0000 0010
    return 0;
}