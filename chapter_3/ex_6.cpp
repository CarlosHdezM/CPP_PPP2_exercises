#include <iostream>

int main(){
    int a = 0, b = 0, c = 0;
    int smallest, middle, largest;
    std::cout << "Please enter three integer numbers (separated by spaces): ";
    std::cin >> a >> b >> c;


    if (a < b){
        smallest = a;
        largest = b;
    } 
    else {
        smallest = b;
        largest = a;
    }
    
    // Put c in the correct place
    if (c <= smallest){
        middle = smallest;
        smallest = c;
    }
    else if (smallest < c && c < largest){
        middle = c;
    }
    else if (largest <= c){
        middle = largest;
        largest = c;
    }

    std::cout << smallest << ", " << middle << ", " << largest << "\n";

    return 0;



}