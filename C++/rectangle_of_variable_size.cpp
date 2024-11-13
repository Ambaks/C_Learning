#include <iostream>


int main(){
    int length;
    int width;
    char symbol;

    std::cout<<"Enter Symbol: \n";
    std::cin>>symbol;
    std::cout<<"Enter rectangle length: \n";
    std::cin>>length;
    std::cout<<"Enter rectangle width: \n";
    std::cin>>width;

    for(int i = 1; i <= width; i++){
        for(int j = 1; j <= length; j++){
            std::cout<<symbol;
        }
    std::cout<<'\n';
}
if(length == width){
        std::cout<<"It's a square!\n";
    }
}
