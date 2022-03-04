/*
    Reminder for my future myself:
    I made this example just to verify that I can throw "anything" from throw.
    Then, in catch, that value can be used. 
    For example, in this code the function area() throws the integer literal 924,
    then the first catch statement catches an int, and handles the exception. 

    IMPORTANT NOTE: I infer this is an incorrect (or at least nonoptimal) way of
    throwing exceptions, this was made only as a proof of concept. My bet is that a
    more optimal strategy might involve the use of:
        a) "Built-in" c++ exceptions such as runtime_error or out_of_range.
        b) User-defined types (classes). 
*/
#include <iostream>

class Bad_area{};
class Random_stuff{};

int area(int length, int width){
    if(length<=0 || width <=0) throw 924;
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
    catch (int & a_var) {      //Since we are not catching the type thrown (Bad_area), the program will finish after throwing the exception.
        std::cout << "Oops! bad arguments to area(), arbitraty number " << a_var << " thrown.\n";
    }
    catch(...){
        std::cout << "Other stuff thrown!, HELP!\n";
    }
    