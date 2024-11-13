#include <iostream>
#include <cmath>

int main(){

    double a;
    double b;
    double c;

    std::cout <<"Enter size for a: ";
    std::cin >> a;

    std::cout <<"Enter size for b: ";
    std::cin >> b;
 
    c = sqrt(pow(b,2)+ pow(a,2));
    std::cout<<"The hypotenuse is: " << c;




    return 0;
}