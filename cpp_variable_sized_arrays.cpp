//// (c)  Roland Ihasz - https://github.com/lnrsoft

#include <vector>
#include <iostream>

int main()
{
    int n, size, value;
    unsigned long q, i, j;
    std::cin >> n >> q;
    std::vector<std::vector<int>> two_dimensional_vector;
    for(int z = 0; z < n; ++z) {
        std::cin >> size;
        std::vector<int> line_array;
        for(int y = 0; y < size; ++y) {
            std::cin >> value;
            line_array.push_back(value);
        }
        two_dimensional_vector.push_back(line_array);
    }
    for(unsigned long k = 0; k < q; ++k) {
        std::cin >> j >> i;
        std::cout << two_dimensional_vector[j][i] << std::endl;
    }
    return 0;
}
