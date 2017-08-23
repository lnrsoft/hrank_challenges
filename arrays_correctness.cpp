#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

int main()
{
    int N;
    std::vector<int> nums;
    std::cin >> N;
    std::cin.ignore();
    for(auto i = 0; i < 1; ++i) {
        std::string line;
        getline(std::cin, line);
        std::string arr[1024];
        int incr = 0;
        std::stringstream ssin(line);
        while(ssin.good() && incr < N) {
            ssin >> arr[incr];
            nums.push_back(atoi(arr[incr].c_str()));
            ++incr;
        }
    }
    std::sort(nums.begin(), nums.end());
    for(unsigned long b = 0; b < nums.size(); ++b) {
        std::cout << nums[b] << " ";
    }
    std::cout << std::endl;
}
