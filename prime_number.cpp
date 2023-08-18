#include <iostream>

void range(int low, int upper);

int main(){
    int low;
    int upper;

    std::cout << "PRIME NUMBER IN RANGE" << '\n';
    std::cout << "------------------------------------------" << '\n';
    std::cout << "Introduce a lower limit and an upper limit" << '\n';
    
    //std::cout << "LOWER LIMIT (except negative numbers and 1): ";
    do{
    std::cout << "LOWER LIMIT (except negative numbers and 1): ";    
    std::cin >> low;
    }while(low <= 1);

    do{
    std::cout << "UPPER LIMIT (except negative numbers and 1): ";
    std::cin >> upper;
    }while(upper <=1 );

    range(low, upper);
 
    return 0;
}

void range(int low, int upper){
    int y;
    for (int i = low; i <= upper; i++){
        int count = 0;
        for (int z = low; z <= upper; z++){
            //y = i/z;
            y = i%z;
            //int count = 0;
            if(y == 0){
            //std::cout << "*";
            count++;
            }
        }

        if(count == 1){
                    std::cout << i << '\n';
                    //std::cout << " " << count;
                }
        
        //std::cout << '\n';
    }

}