#include <iostream>
#include<cmath>
#include<limits>
#include<unordered_map>
#include <algorithm> 
#include<vector>

int main() {

    double my_num_1;
    std::string units;
    std::unordered_map<std::string, char> options = {
        {"cm", 'c'},
        {"m" , 'm'},
        {"ft", 'f'},
        {"in", 'i'}
    };
    char selector = 'x';
    double smallest = std::numeric_limits<double>::max(), largest = std::numeric_limits<double>::lowest();
    double meters_accum = 0;
    std::vector<double> all_meters;


    while (std::cin >> my_num_1 >> units){
        double meters = 0;
        double cm = 0;
        double ft = 0;
        double inches = 0;

        if(options.count(units)){
            selector = options[units];
        }
        else selector = 'x';
        
        switch (selector)
        {
        case 'c':
            cm = my_num_1;
            meters = cm / 100.0;
            inches = cm / 2.54;
            ft = inches / 12.0;
            all_meters.push_back(meters);
            break;

        case 'm':
            meters = my_num_1;
            cm = meters * 100;
            inches = cm/2.54;
            ft = inches / 12.0;
            all_meters.push_back(meters);
            break; 

        case 'f':
            ft = my_num_1;
            inches = ft * 12.0;
            cm = inches * 2.54;
            meters = cm / 100;
            all_meters.push_back(meters);
            break;

        case 'i':
            inches = my_num_1;
            ft = my_num_1 / 12.0;
            cm = inches * 2.54;
            meters = cm / 100;
            all_meters.push_back(meters);
            break;
        
        case 'x':
        default:
            break;
        }

        meters_accum += meters;

        std::cout << "Entered:\n" 
        << meters << " meters.\n" 
        << cm << " centimeters.\n" 
        << ft << " feet.\n" 
        << inches << " inches\n" << "\n";

        std::cout << "Total meters entered: " << meters_accum << "\n";

        
        if (meters < smallest){
            std::cout << "The current entry is the smallest meters so far\n";
            smallest = meters;
        }
        if (meters > largest){
            std::cout << "The current entry is the largest meters so far\n";
            largest = meters;
        }
        std::cout << "\n";
    }

    std::sort(all_meters.begin(), all_meters.end());
    std::cout << "All the quantities you entered (in meters):\n";
    for (double mt : all_meters){
        std::cout << mt << " m\n";
    }
    std::cout << "The smallest entry was: " << smallest << " meters.\n";
    std::cout << "The largest entry was: " << largest << " meters.\n";
    std::cout << "Total: " << all_meters.size() << " entries.\n";

}