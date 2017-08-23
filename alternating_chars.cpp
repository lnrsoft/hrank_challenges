#include <iostream>
#include <vector>
#include <sstream>

int alter(std::string Nline)
{
    std::vector<int> NBuffer;
    std::vector<int> lister;
    std::vector<char> AnswerBuffer(Nline.begin(), Nline.end());
    for(unsigned long q = 0 ; q < AnswerBuffer.size(); ++q) {
        NBuffer.push_back(AnswerBuffer[q]);
    }
    for(unsigned long a = 0; a < NBuffer.size(); ++a) {
        if(NBuffer[a] == 'A' && NBuffer[a+1] == 'A' && (a+1) < NBuffer.size()) {
            lister.push_back(1);
        }
        if(NBuffer[a] == 'B' && NBuffer[a+1] == 'B' && (a+1) < NBuffer.size()) {
            lister.push_back(1);
        }
    }
    return lister.size();
}

int main()
{
    std::vector<int> deletion;
    std::string Nline;
    int t;
    std::cin >> t;
    for(auto i = 0; i< t; ++i) {
        std::cin >> Nline;
        int obj;
        obj = alter(Nline);
        deletion.push_back(obj);
    }
    for(unsigned long a = 0; a < deletion.size(); ++a) {
        std:: cout << deletion[a] << std::endl;
    }
    return 0;
}

