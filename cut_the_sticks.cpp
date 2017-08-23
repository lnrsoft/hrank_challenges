#include <string>
#include <vector>
#include <sstream>
#include <climits>
#include <iostream>
#include <algorithm>

int main()
{
    int i = 0;
    int ct;
    int testcases;
    std::string stick;
    std::vector<int> unsortedsticks;
    std::cin >> testcases;
    std::cin.ignore();
    getline(std::cin, stick);
    std::string arr[10000];
    std::stringstream ssin1(stick);
    while(ssin1.good() && i < testcases) {
        ssin1 >> arr[i];
        ++i;
    }
    for(int a = 0; a < testcases; a++) {
        unsortedsticks.push_back(atoi(arr[a].c_str()));
    }
    int smallest = INT_MAX;
    for(unsigned int i = 0; i < unsortedsticks.size(); i++) {
        if(unsortedsticks[i] < smallest) {
            smallest = unsortedsticks[i];
        }
    }
    do {
        int count = 0;
        int min = INT_MAX;
        ct = 0;
        for(int i = 0; i < testcases; i++) {
            if(unsortedsticks[i] > 0) {
                ct = 1;
                unsortedsticks[i] =  unsortedsticks[i] - smallest;
                count++;
            }
            if(unsortedsticks[i] > 0) {
                ct = 1;
                if(min > unsortedsticks[i]) {
                    min = unsortedsticks[i];
                }
            }
        }
        smallest = min;
        if(count > 0) {
            std::cout << count << std::endl;
        }
    }
    while(ct > 0);
    //// return the index of the min element
    //    std::vector<int>::iterator result = std::min_element(std::begin(unsortedsticks),
    //                                        std::end(unsortedsticks));
    //    std::cout << "min element at: " << std::distance(std::begin(unsortedsticks),
    //              result) << std::endl;
    //    int ind = std::distance(std::begin(unsortedsticks), result);
    //// remove the element at index previously determinated
    //    unsortedsticks.erase(unsortedsticks.begin() + ind);
    //    for (int r = 0; r < unsortedsticks.size(); ++r)
    //    {
    //        std::cout << unsortedsticks[r] << std::endl;
    //    }
    return 0;
}
