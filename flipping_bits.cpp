#include <iostream>

int max_xor(int l, int r)
{
    int q = l ^ r, a = 1;
    while(q) {
        q /= 2;
        a <<= 1;
    }
    return --a;
}

int main()
{
    int result;
    int l;
    int r;
    std::cin >> l;
    std::cin >> r;
    result = max_xor(l, r);
    std::cout << result << std::endl;
    return 0;
}
