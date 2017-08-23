#include <vector>
#include <iostream>

int rdn(int y, int m, int d)
{
    if(m < 3) {
        y--, m += 12;
    }
    int result = 365 * y + y / 4 - y / 100 + y / 400 + (153 * m - 457) / 5 + d - 306;
    return result;
}

int main()
{
    int actual_return_dd, actual_return_mm, actual_return_yyyy;
    int expected_dd, expected_mm, expected_yyyy;
    std::cin >> actual_return_dd >> actual_return_mm >> actual_return_yyyy;
    std::cin >> expected_dd >> expected_mm >> expected_yyyy;
    int days = rdn(actual_return_yyyy, actual_return_mm, actual_return_dd) - rdn(expected_yyyy,
               expected_mm,
               expected_dd);
    if(actual_return_yyyy > expected_yyyy) {
        std::cout << 10000;
        return 0;
    }
    if(actual_return_yyyy == expected_yyyy && actual_return_mm > expected_mm) {
        std::cout << 500 * (actual_return_mm - expected_mm); // times number of late months
        return 0;
    }
    if(days <= 0) {
        std::cout << 0;
        return 0;
    }
    if(expected_mm == actual_return_mm && expected_yyyy == actual_return_yyyy) {
        std::cout << days * 15 << std::endl;
    }
    return 0;
}
