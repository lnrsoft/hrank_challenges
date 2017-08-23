// (c)  Roland Ihasz - https://github.com/lnrsoft

#include <set>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    int q;
    std::cin >> q;
    std::set <long long int> set_stl;
    for(int i = 0; i < q; ++i) {
        int y;
        long long int x;
        std::cin >> y >> x;
        if(y == 1) {
            set_stl.insert(x);
        }
        else if(y == 2) {
            set_stl.erase(x);
        }
        else {
            if(set_stl.end() == set_stl.find(x)) {
                std::cout << "No" << std::endl;
            }
            else {
                std::cout << "Yes" << std::endl;
            }
        }
    }
    return 0;
}
