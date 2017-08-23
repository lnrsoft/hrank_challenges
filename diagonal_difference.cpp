#include <iostream>
#include <sstream>
#include <vector>

//function prototypes
void firstdiagonal();
void seconddiagonal();
void result();

std::vector<int> firstdiag_result;
std::vector<int> seconddiag_result;

void firstdiagonal(std::vector<int> vec)
{
    std::vector<int> vec1 = vec;
    int i = 0;
    for(auto a = 0; a < vec1.size(); a++) {
        i += vec1[a];
    }
    firstdiag_result.push_back(i);
}

void seconddiagonal(std::vector<int> vec)
{
    std::vector<int> vec2 = vec;
    int j = 0;
    for(auto a = 0; a < vec2.size(); a++) {
        j += vec2[a] ;
    }
    seconddiag_result.push_back(j);
}

void result()
{
    std::cout << abs(firstdiag_result[0] - seconddiag_result[0]) << std::endl;
}

void stringtoint()
{
    std::vector<int> firstdiagonalvec;
    std::vector<int> seconddiagonalvec;
    int ix;
    int count_pos = 0;
    std::cin >> ix;
    std::cin.ignore();
    int count_neg = ix - 1;
    while(ix > count_pos) {
        std::vector<int> vec;
        std::string line;
        getline(std::cin, line);
        std::string arr[100];
        int a = 0;
        std::stringstream ssin(line);
        while(ssin.good() && a < ix) {
            ssin >> arr[a];
            ++a;
        }
        for(auto c = 0; c < ix; c++) {
            vec.push_back(atoi(arr[c].c_str()));
        }
        firstdiagonalvec.push_back(vec[count_pos]);
        seconddiagonalvec.push_back(vec[count_neg]);
        ++count_pos;
        --count_neg;
    }
    firstdiagonal(firstdiagonalvec);
    seconddiagonal(seconddiagonalvec);
}

int main()
{
    stringtoint();
    result();
    return 0;
}
