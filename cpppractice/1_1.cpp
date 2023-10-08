#include<iostream>
int main(){
    int radius, height;
    float pi = 3.14159;
    std::cout << "enter the radius of cylinder " ;
    std::cin >> radius;
    std::cout << "enter the height of cylinder ";
    std::cin >> height;
    std::cout << "----------------------------------" << std::endl;
    std::cout << "the volume of the circle is : " << pi * radius * radius * height << " cubic cm ." << std::endl;
    int surface_area = (2*pi*radius*height)+(2*pi*radius*radius);
    std::cout << "the surface area of cylinder is : " << surface_area << "square cm." <<std::endl;
    return 0;
}