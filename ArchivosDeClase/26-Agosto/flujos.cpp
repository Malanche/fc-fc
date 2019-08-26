#include<iostream>

int main(int argc, char **argv){
    // For para mortales
    /*
    for(int i = 0; i < 2; std::cout << i << std::endl){
        i++;
    }

    // For para avanzados (cuando tenga sentido)
    int my_array[] = {0,4,6,7};
    for(int x: my_array){
        std::cout << x << std::endl;
    }

    int s = 0;
    while(s != 3) {
        std::cout << "Aún no valgo 3 :(" << std::endl;
        s++;
    }
    std::cout << "Valgo 3! :D" << std::endl;
    
    if(s < 2){
        std::cout << "El número es menor a 2" << std::endl;
    } else if(s == 3){
        std::cout << "El número es 3" << std::endl;
    } else {
        std::cout << ":v" << std::endl;
    }
    */

    int s = 1;
    switch(s){
        case 0:
            std::cout << "Valgo cero :v" << std::endl;
            break;
        case 1:
        case 2:
            std::cout << "Valgo uno, o dos :v" << std::endl;
            break;
        case 3:
            std::cout << "Valgo tres :v" << std::endl;
            break;
        default:
            std::cout << "Valgo algo que no es ni 0,1,2 ni 3 :v" << std::endl;
            break;
    }
    return 0;
}