#include <iostream>
#include <cmath>

int main()
{
    double x, y, z,f1;
    x = 12.3;

    y = sqrt(pow(x,3)/10) + exp(15*pow(x,4)/(pow(x,5)-2.5));
    z = sqrt(abs(pow(x, 3) - 0.53));
    
    f1 = std::max(y, z);
    
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << "z = " << z << std::endl;
    std::cout << "f1 = " << f1 << std::endl;

    return 0;
}
