#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <iomanip>      // std::setprecision
#include <algorithm>

int main()
{
    std::vector<int> chocks;
    int testcases;
    int inpu;
    std::string stick;
    std::cin >> testcases;
    std::cin.ignore();
    for(int i = 0; i < testcases; ++i) {
        std::cin >> inpu;
        chocks.push_back(inpu);
    }
    for(int c = 0; c < testcases; ++c) {
        double n = chocks[c] / 2.0;
        if((n - (int)n)  == 0) {
            double result = n * n;
            std::cout << std::setprecision(14) << result << std::endl;
        }
        if((n - (int)n) != 0) {
            double w = n + 0.5;
            double x = n - 0.5;
            double result = x * w;
            std::cout << std::setprecision(14) << result << std::endl;
        }
    }
    return 0;
}
