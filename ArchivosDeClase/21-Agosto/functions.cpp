#include<iostream>

int suma(int a, int b){
    return a+b;
}

void saluda(){
    std::cout << "Hola!!!!!" << std::endl;
}

int main(int argcount, char **argvalues){
    std::cout << argcount << std::endl;
    saluda();
    return 0;
}