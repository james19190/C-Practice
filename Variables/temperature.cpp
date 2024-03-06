#include <iostream>

int main(){

    double tempf;

    std::cout << "Enter the temperature in Fahrenheit: ";
    std::cin >> tempf;
    double tempc = (tempf - 32) / 1.8;

    std::cout << "The temp is " << tempc << "degress Celsius\n";


    return 0;
}