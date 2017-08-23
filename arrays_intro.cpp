#include <iostream>
#include <vector>
#include <sstream>

int main()
{
    int V, n;
    std::vector<int> nums;
    std::cin >> V;
    std::cin.ignore();
    std::cin >> n;
    std::cin.ignore();
    for(auto i = 0; i < 1; ++i) {
        std::string line;
        getline(std::cin, line);
        std::string arr[1024];
        int incr = 0;
        std::stringstream ssin(line);
        while(ssin.good() && incr < n) {
            ssin >> arr[incr];
            nums.push_back(atoi(arr[incr].c_str()));
            ++incr;
        }
    }
    for(unsigned long b = 0; b < nums.size(); ++b) {
        if(V == nums[b]) {
            std::cout << b << " ";
        }
    }
}
