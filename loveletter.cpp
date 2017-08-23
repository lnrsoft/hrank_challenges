#include <algorithm>
#include <iostream>
#include <climits>
#include <cstdio>
#include <vector>
#include <cmath>

int main()
{
    int T; // number of test cases
    int c = 0;
    std::cin >> T;
    if(T >= 1 && T <= 10) {
        while(c < T) {
            char input[10000]  ;
            std::cin >> input;
            int first = 0;
            int last = strlen(input) - 1;
            int result = 0;
            do {
                int first_char = input[first];
                int last_char = input[last];
                if(first_char != last_char) {
                    int counter = abs(first_char - last_char);
                    result = result + counter;
                }
                first++;
                last--;
            }
            while(first < last);
            std::cout << result << std::endl;
            ++c;
        }
    }
    return 0;
}
