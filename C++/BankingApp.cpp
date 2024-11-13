// I consider this program unfinished. Needs additional checks for sufficient balance etc...

#include <iostream>

char choice;
int starting_cash = 100;
void depositMoney();
void withdrawMoney();


int main(){
    bool end = true;
    std::cout<<"Welcome to the bank.";
    do{
    std::cout<<"Your balance is $"<<starting_cash<<".\nWhat would you like to do? W - withdraw, D - deposit, B - show balance, Q - quit\n";
    std::cin>>choice;
    switch(choice){

        case 'W' | 'w':
            withdrawMoney();
            break;

        case 'D' | 'd':
            depositMoney();
            break;

        case 'B' | 'b':
            break;
        
        case 'Q' | 'q':
            std::cout<<"Until next time!";
            end = false;
            break;

        default:
            std::cout<<"Did not enter a valid character.\n";

        }
    }while(end);
}

void withdrawMoney(){
    int amt;
    std::cout<<"Enter an amount to withdraw: ";
    std::cin>>amt;
    ::starting_cash -= amt;
    std::cout<<amt<<"$ has successfully been withdrawn.";

}
void depositMoney(){

     int amt;
    std::cout<<"Enter an amount to deposit: ";
    std::cin>>amt;
    ::starting_cash += amt;
    std::cout<<amt<<"$ has successfully been deposited.";

}