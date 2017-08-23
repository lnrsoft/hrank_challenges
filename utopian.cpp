#include <iostream>
#include <vector>

int main()
{
    std::vector<int> cycles;
    std::vector<int> inputs;
    cycles.push_back(1);
    int T;
    int c;
    int cyc;
    for(auto N = 0; N <= 60; N += 2) {
        cyc = cycles[N] * 2;
        cycles.push_back(cyc);
        cycles.push_back(cyc+1);
    }
    std::cin >> T;
    if(T >= 1 && T <= 10) {
        for(auto i = 0; i < T; ++i) {
            std::cin >> c;
            if(c >=0 && c <=60) {
                inputs.push_back(c);
            }
        }
    }
    for(auto a = 0; a < inputs.size(); ++a) {
        std::cout << cycles[inputs[a]] << std::endl;
    }
    return 0;
}
