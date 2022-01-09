#include <iostream>
#include <cmath>

int main()
{
    double x, y, z, g, f2;
    x = 0.46;

    y = sqrt(pow(x, 3) / 10) + exp(15 * pow(x, 4) / (pow(x, 5) - 2.5));
    z = sqrt(abs(pow(x, 3) - 0.53));
    g = pow(cos(x - 2.1), 2);

    f2 = std::min(std::min(y, z), g);

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << "z = " << z << std::endl;
    std::cout << "g = " << g << std::endl;
    std::cout << "f2 = " << f2 << std::endl;

    return 0;
}
