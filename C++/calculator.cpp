#include <iostream>
#include <cmath>

int main(){

    char op;
    std::string header = "**********CALCULATOR**********\n";
    std::string footer = "******************************";
    char ask;
    double result;
    double num1;
    double num2;
    bool end = true;


    std::cout<<header;

    while(end){

    std::cout<<"Enter a number: ";
    std::cin>>num1;
    
    std::cout<<"Enter an operand: ";
    std::cin>>op;
    
    std::cout<<"Enter a second number: ";
    std::cin>>num2;

    switch(op){

        case '+':
            result = num1 + num2;
            std::cout<<"The result is: "<<result<<"\n";
            break;
        case '-':
            result = num1 - num2;
            std::cout<<"The result is: "<<result<<"\n";
            break;
        case '*':
            result = num1 * num2;
            std::cout<<"The result is: "<<result<<"\n";
            break;
        case '/':
            result = num1 / num2;
            std::cout<<"The result is: "<<result<<"\n";
            break;
        }
    std::cout<<"Continue? (y/n)";
    std::cin>>ask;
    switch(ask){
        case 'y':
        break;
        case 'n':
            end = false;
        }

    }
    std::cout<<footer;
    return 0;
}