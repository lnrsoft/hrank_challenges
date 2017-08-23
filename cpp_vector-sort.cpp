#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>


int main()
{
    std::vector<int> vec;
    std::string x;
    getline(std::cin, x);
    int ix = atoi(x.c_str());
    std::string line;
    getline(std::cin, line);
    std::string arr[1000000];
    int i = 0;
    std::stringstream ssin(line);
    while(ssin.good() && i < ix) {
        ssin >> arr[i];
        ++i;
    }
    for(i = 0; i < ix; i++) {
        vec.push_back(atoi(arr[i].c_str()));
    }
    sort(vec.begin(), vec.end());
    for(int c = 0; c < ix; ++c) {
        std::cout <<  vec[c] << " ";
    }
}
