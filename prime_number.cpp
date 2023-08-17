#include <iostream>

void range(int low, int upper);

int main(){
    int low;
    int upper;

    std::cout << "PRIME NUMBER IN RANGE" << '\n';
    std::cout << "------------------------------------------" << '\n';
    std::cout << "Introduce a lower limit and an upper limit" << '\n';
    
    std::cout << "LOWER LIMIT: ";
    std::cin >> low;
    std::cout << "UPPER LIMIT: ";
    std::cin >> upper;
    range(low, upper);

    return 0;
}

void range(int low, int upper){
    for (int i = low; i <= upper; i++){
        std::cout << i;
    }

}