// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Hello! What is your name, stranger?" << std::flush;
    std::cin >> str;
    std::cout << "Nice to meet you, " << str << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
