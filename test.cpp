// (c)  Roland Ihasz - https://github.com/lnrsoft

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

class VarSizeArray {
public:
    VarSizeArray() {}
    std::vector<int> rows;
    std::vector<int> colums;



    std::vector<std::vector<int>> vec_2d;



    void read_input(int k)
    {
        colums.push_back(k);
        rows.push_back(rows.size());
        vec_2d.push_back(rows);
        vec_2d.push_back(colums);
    }

    //    void display_size() {
    //        std::cout << std::endl;
    //        std::cout << vec_2d.size();
    //    }

    //    void display_elements() {
    //        for(auto i = 0; i < vector_for_k_integers.size(); i++) {
    //            std::cout << vector_for_k_integers[i] << " ";
    //        }
    //        std::cout << std::endl;
    //    }

    void query(int ia, int ja)
    {
        for(auto i = 0; i < rows.size(); ++i) {
            std::cout << vec_2d[i][ja] << " ";
        }
    }
    ~VarSizeArray() {}
};

int main()
{
    int n, q, i, k, ia, ja;
    std::vector<int> vector_buffer;
    std::cin >> n >> q;
    std::cin >> k;
    VarSizeArray vec;
    for(auto f = 0; f < n; f++) { //TODO: has to be nested for loop
        for(auto x = 0; x < k; x++) { //TODO: has to be nested for loop
            std::cin >> i;
            vec.read_input(i);
        }
        std::cin >> ia >> ja;
    }
    //    vec.display_size();
    //    vec.display_elements();
    vec.query(ia, ja);
    return 0;
}
