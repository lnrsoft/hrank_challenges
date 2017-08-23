#include <iostream>
#include <sstream>
#include <string>

int main()
{
    std::string a, b;
    std::stringstream ss1;
    std::stringstream ss2;
    std::cin >> a;
    std::cin >> b;
    std::cout << a.size() << " " << b.size() << std::endl;
    std::string c = a + b;
    std::cout << c << std::endl;
    char achar = a.at(0);
    std::string astring;
    ss1 << achar;
    ss1 >> astring;
    char bchar = b.at(0);
    std::string bstring;
    ss2 << bchar;
    ss2 >> bstring;
    a.replace(0, 1, bstring);
    b.replace(0, 1, astring);
    std::cout << a << " " << b << std::endl;
    return 0;
}
