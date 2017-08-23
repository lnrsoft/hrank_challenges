#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

int main()
{
    int t;
    int n;
    int c = 0;
    std::string a;
    std::vector<int> nbuffer;
    std::vector<int> positive_buffer;
    std::vector<int> negative_int;
    std::vector<int> negative;
    std::vector<int> finalresult1;
    std::vector<int> finalresult2;
    std::cin >> t;
    if(t >= 0 && t <= 10) { // number of test cases
        while(c < t) {
            nbuffer.clear();
            positive_buffer.clear();
            negative_int.clear();
            negative.clear();
            std::cin >> n;
            std::cin.ignore();
            getline(std::cin, a);
            std::string arr[100001];
            std::stringstream ssin(a);
            int s = 0;
            while(ssin.good() && s <= n) {
                ssin >> arr[s];
                nbuffer.push_back(atoi(arr[s].c_str()));
                ++s;
            }
            if(n >= 1 && n < 100000) {
                int result = 0;
                for(unsigned long i = 0; i < nbuffer.size(); i++) {
                    if(nbuffer[i] >= 0) {
                        result += nbuffer[i];
                    }
                    if(nbuffer[i] < 0) {
                        negative_int.push_back(0);
                    }
                }
                positive_buffer.push_back(result);
            }
            if(negative_int.size() > 0) {
                negative.push_back(0);
            }
            for(unsigned long b = 0; b < positive_buffer.size(); b++) {
                finalresult1.push_back(positive_buffer[b] - negative.size());
                finalresult2.push_back(positive_buffer[b]);
            }
            ++c;
        }
    }
    for(unsigned long b = 0; b < finalresult1.size(); b++) {
        std::cout << finalresult1[b] << " "
                  << finalresult2[b] << std::endl;
    }
    return 0;
}
/ second solution
#include <iostream>
#include <vector>
#include <iostream>
#include <algorithm>

int contiguous(int a[], int n)
{
    int temp_maximum = a[0], maximum = a[0];
    for(int x = 1; x < n; ++x) {
        maximum = std::max(a[x], maximum + a[x]);
        temp_maximum = std::max(maximum, temp_maximum);
    }
    return temp_maximum;
}

int non_contiguous(int a[], int n)
{
    int sum = 0, counter = 0, negative_int = -9999;
    for(int y = 0; y < n; ++y) {
        if(a[y] < 0) {
            counter++;
            if(a[y] > negative_int) {
                negative_int = a[y];
            }
        }
        else {
            sum += std::max(0, a[y]);
        }
    }
    if(counter == n) {
        return negative_int;
    }
    return sum;
}

int main()
{
    int t;
    int c = 0;
    std::cin >> t;
    while(c < t) {
        int n, result_a = 0, result_b = 0, *a;
        std::cin >> n;
        a = new int[n];
        for(int z = 0; z < n; ++z) {
            std::cin >> a[z];
        }
        result_a = contiguous(a, n);
        result_b = non_contiguous(a, n);
        std::cout << result_a << " " << result_b << std::endl;
        ++c;
    }
    return 0;
}
