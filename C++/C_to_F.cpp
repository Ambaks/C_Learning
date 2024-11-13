#include <iostream>
//#include <cmath>

int main(){

    double temp;
    double new_temp;
    char unit;
    char ask;
    bool run = true;

    while(run){

    std::cout << "What do you want to convert ? (C / F)\n";
    std::cin >> unit;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(unit == 'C' || unit == 'c'){
        new_temp = temp*(9.0/5)+32;
        unit = 'F';
        std::cout<<new_temp<<" degrees "<<unit<< " \n";
        std::cout<<"Another? (y/n): ";
        std::cin>>ask;
        switch(ask){
        case 'y':
        break;
        case 'n':
            run = false;
            break;
        default:
            std::cout<<"Unrecognized.\n";
            run = false;
        }

    } else if (unit == 'F' || unit == 'f'){
        new_temp = (temp-32)*(5.0/9);
        unit = 'C';
        std::cout<<new_temp<<" degrees "<<unit<<" \n";

        std::cout<<"Another? (y/n): ";
        std::cin>>ask;
        switch(ask){
        case 'y':
        break;
        case 'n':
            run = false;
            break;
        default:
            std::cout<<"Unrecognized, shutting down.\n";
            run = false;
        }
        
    } else{
        std::cout<<"You did not enter a valid unit.";
    }

}
std::cout<<"Until next time!\n";
return 0;
}