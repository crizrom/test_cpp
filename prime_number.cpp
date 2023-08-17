#include <iostream>

void range(int low, int upper);

int main(){
    int low;
    int upper;

    std::cout << "DIVIDE NUMBER IN RANGE" << '\n';
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
    double y;
    for (int i = low; i <= upper; i++){
        for (int z = low; z <= upper; z++){
            y = i/z;
            std::cout << y << " ";
        }
        
        std::cout << '\n';
    }

}