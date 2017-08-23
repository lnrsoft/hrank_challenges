#include <iostream>
#include <sstream>
#include <iomanip>      // std::setprecision
#include <vector>


int main()
{
    std::vector<long int> vec;
    std::string x;
    getline(std::cin, x);
    const long int ix = atoi(x.c_str());
    std::string line;
    getline(std::cin, line);
    std::string arr[256];
    long int i = 0;
    std::stringstream ssin(line);
    while(ssin.good() && i < ix) {
        ssin >> arr[i];
        ++i;
    }
    for(i = 0; i < ix; i++) {
        vec.push_back(atoi(arr[i].c_str()));
    }
    int poz = 0;
    int neg = 0;
    int zero = 0;
    for(int c = 0; c < ix; ++c) {
        if(vec[c] > 0 && vec[c] != 0) {
            poz += 1;
        }
        if(vec[c] < 0 && vec[c] != 0) {
            neg += 1;
        }
        if(vec[c] == 0) {
            zero += 1;
        }
    }
    std::cout << std::setprecision(6) << double(poz) / double(ix) << std::endl
              << double(neg) / double(ix) << std::endl
              << double(zero) / double(ix) << std::endl;
}
