#include <iostream>

//Write a recursive function that produces the power for base^exp

int pow(int base, int exp){

    if(exp == 0){

        return 1; 
        
    }

    else{
        
        return base * pow(base, exp - 1);

    }

}

int main(){

    std::cout << pow(2, 4);

    return 0;
}