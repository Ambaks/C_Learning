// Uses a randomly generated number between 1-3 to play rock paper scissors with the pc.

#include<iostream>

int main(){

char choice;
int points;
bool winner = false;
std::cout<<"**********Rock Paper Scissors**********\n";
std::cout<<"Let's begin!\n";

void compare();

do{
    std::cout<<"Rock, paper, scissors? (R, P, S)";
    std::cin>>choice;
    compare();
}while(!winner);
std::cout<<"***************************************";
}