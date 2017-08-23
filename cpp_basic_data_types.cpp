#include <cstdio>
#include <string>
#include <sstream>
#include <iostream>

int main()
{
    std::string data;
    int i = 1;
    getline(std::cin, data);
    std::string dataarray[1000];
    std::stringstream ssin1(data);
    while(ssin1.good() && i <= 1000) {
        ssin1 >> dataarray[i];
        ++i;
    }
    for(int a = 0; a < 1000; a++) {
        if(dataarray[a] != "") {
            std::cout << dataarray[a] << std::endl;
        }
    }
    return 0;
}
