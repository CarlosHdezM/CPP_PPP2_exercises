#include <iostream>
//#include <stdexcept>

class Bad_area{};
class Random_stuff{};

int area(int length, int width){
    if(length<=0 || width <=0) throw Bad_area{};
    return length * width;
}


int framed_area(int x, int y) // calculate area within frame
{
    constexpr int frame_width = 2;
    return area(x-frame_width, y-frame_width);
}




int main()
    try {               // ---> This '{' is the '{' of main()
        int x = 1;
        int y = 2;
        int z = 4;

        int area1 = area(x,y);
        std::cout << "Succeeded calculation of area 1 with value " << area1 << '\n';
        int area2 = framed_area(1,z);
        std::cout << "Succeeded calculation of area 2 with value " << area2 << '\n';
        int area3 = framed_area(y,z);
        std::cout << "Succeeded calculation of area 3 with value " << area3 << '\n';
        double ratio = area1/area3;
        std::cout << "Succeeded calculation of ratio with value " << ratio << '\n';

    }               // ---> This '}' is the '}' of main()
    catch (Random_stuff) {      //Since we are not catching the type thrown (Bad_area), the program will finish after throwing the exception.
        std::cout << "Oops! bad arguments to area()\n";
    }
    