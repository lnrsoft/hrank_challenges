#include <iostream>
#include <vector>
#include <sstream>

int main()
{
    std::vector<int> NBuffer;
    std::vector<std::string> AnswerBuffer;
    std::string Nline;
    int result = 0;
    int t = 0;
    std::cin >> t;
    for(auto q = 0 ; q < t; ++q) {
        int n = 0;
        int k = 0;
        std::cin >> n >> k;
        std::cin.ignore();
        getline(std::cin, Nline);
        std::string arr[1024];
        std::stringstream ssin(Nline);
        int s = 0;
        while(ssin.good() && s <= n) {
            ssin >> arr[s];
            NBuffer.push_back(atoi(arr[s].c_str()));
            ++s;
        }
        int counter = 0;
        for(auto r = 0; r < n; ++r) {
            if(NBuffer[r] <= 0) {
                counter++;
            }
        }
        result = counter;
        if(k <= result) {
            AnswerBuffer.push_back("NO");
        }
        if(k > result) {
            AnswerBuffer.push_back("YES");
        }
        NBuffer.clear();
    }
    for(unsigned long ans= 0; ans < AnswerBuffer.size(); ++ans) {
        std::cout << AnswerBuffer[ans] << std::endl;
    }
    return 0;
}
