#include <algorithm>
#include <iostream>
#include <climits>
#include <utility>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <map>

int main()
{
    std::vector<int> inp;
    std::vector<int> k_selected;
    std::vector<int> distances;
    int n; // list of integers
    int c = 0;
    int k;
    int int_entry;
    std::cin >> n;
    std::cin.ignore();
    std::cin >> k; // selected integers from the list
    while(c < n) {
        std::cin >> int_entry;
        inp.push_back(int_entry);
        ++c;
    }
    for(unsigned long i = 0; i < inp.size(); ++i) {
        if(i +1 < inp.size()) {
            distances.push_back(std::abs(inp[i + 1] - inp[i]));
        }
        if(i +1 >= inp.size()) {
            distances.push_back(std::abs(inp[i-1] - inp[i]));
        }
    }
    for(int x = 0; x < n; x++) {
        std::cout << distances[x] << std::endl;
    }
    std::map<int, int> boo;
    std::vector<int> foo;
    for(unsigned long a = 0; a  < inp.size(); a++) {
        foo.push_back(inp[a]);
    }
    std::cout << "foo size: " << foo.size() << std::endl;
    std::cout << "distances size: " << distances.size() << std::endl;
    //    std::sort (distances.begin(), distances.end());
    //    for (unsigned long c = 0; c  < distances.size(); c++ )
    for(unsigned long c = 0; c  < 6; c++) {
        boo[foo[c]] = distances[c];
        //        boo[distances[c]] = foo[c];
    }
    std::cout << "Map size: " << boo.size() << std::endl;
    for(std::map<int, int>::iterator ii = boo.begin(); ii != boo.end(); ++ii) {
        std::cout << (*ii).first << ": " << (*ii).second << std::endl;
    }
    return 0;
}

// http://stackoverflow.com/questions/823562/multi-dimensional-vector


/*
6
3
30
39
49
101
102
103
*/


