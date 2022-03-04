/*
    Reminder for my future myself:
    This is a very similar example to the previous ones, but this time I
    * Create my own type (class) Bad_area, with it's constructors attributes and member functions.
    * Throw an object of type Bad_area using one of the defined constructors.
    * Use one of the attributes of the object in the handling of the error (catch).
    c:
*/

#include <iostream>
//#include <stdexcept>

class Bad_area{
    private:
        std::string my_string;

    public:
    Bad_area(){
        my_string = "DEFAULT VALUE";
    }
    Bad_area(std::string my_string){
        this->my_string = my_string;
    }
    const std::string & get_my_string(){
        return my_string;
    }
};
class Random_stuff{};


int area(int length, int width){
    //Bad_area obj_to_throw("Hello I'm a message"); 
    if(length<=0 || width <=0) throw Bad_area{"My Message"};
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
    catch (Bad_area object) { 
        std::cout << "Oops! bad arguments to area(),\
        we got the message: " << object.get_my_string() << "\n";
    }
    