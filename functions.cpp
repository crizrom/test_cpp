#include <iostream>

void github(std::string oracion);

int main()
{
    std::string sentence = "This is a sentence amigos";
    github(sentence);
    github(sentence);
    github(sentence);
    github(sentence);

    return 0; 
}

void github(std::string oracion){
    std::cout << oracion << std::endl;
}