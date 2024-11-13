#include <iostream>
int dblSecondDigit(std::string ccnum);
//int addSingleDigits();
//int addOddNumDigits();
//void finalCheck();


int main(){

std::string ccnum = "123456789123";
int x = dblSecondDigit(ccnum);
std::cout<<x;
    return 0;
}

//bool result(){}

int dblSecondDigit(std::string ccnum){
    char digit;
    int cardNum[20];
for(int i = 0; i < ccnum.length(); i++){
    digit = ccnum.at(i);
    if(i%2){
        cardNum[i] = (digit-'0')*2;
        std::cout<<"Doubled: "<<(digit-'0')*2<<'\n';
    } else {
        cardNum[i] = digit-'0';
        std::cout<<"Not Doubled: "<<digit-'0'<<'\n';
    }
}
return cardNum[19];
}

//int addSingleDigits(){}
//int addOddNumDigits(){}
//void finalCheck(){}