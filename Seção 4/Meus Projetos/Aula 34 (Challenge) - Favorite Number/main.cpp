#include <iostream>

int main(){
    int favorite_number;

    std::cout << "Enter Your Favorite Number Between 1 and 100: ";
    std::cin >> favorite_number;
    std::cout << "Amazing!! That's My Favorite Number Too!" << std::endl;

    std::cout << "No really!! "+std::to_string(favorite_number)+" is MY Favorite Number Too!!";
    //Alternativamente, a instrução acima pode ser escrita da seguinte maneira --> std::cout << "No really!! " << favorite_number << " is MY Favorite Number Too!!";

    return 0;
}