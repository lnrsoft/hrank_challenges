#include <iostream>
#include <vector>
#include <string>

std::string strchecker(std::string first_line, std::string second_line)
{
    std::string yes = "YES";
    std::string no = "NO";
    std::string result;
    std::vector<std::string> answers;
    std::vector<char> first_char(first_line.begin(), first_line.end());
    std::vector<char> second_char(second_line.begin(), second_line.end());
    for(unsigned long i = 0; i < first_char.size(); ++i) {
        for(unsigned long  a = 0; a < second_line.size(); ++a) {
            if(first_char[i] == second_char[a]) {
                answers.push_back("YES");
            }
            if(first_char[i] != second_char[a]) {
                answers.push_back("NO");
            }
        }
    }
    for(unsigned long  r = 0; r < answers.size(); ++r) {
        if(answers[r] == "YES") {
            result = "YES";
            break;
        }
        else {
            result = "NO";
        }
    }
    return result;
}

int main()
{
    std::vector<std::string> list_answers;
    int c = 0;
    int T;
    std::string in;
    std::string A;
    std::string B;
    std::cin >> T;
    std::cin.ignore();
    while(c < T) {
        std::cin >> A;
        std::cin >> B;
        in = strchecker(A, B);
        list_answers.push_back(in);
        ++c;
    }
    for(unsigned long  x = 0; x < list_answers.size(); ++x) {
        std::cout << list_answers[x] << std::endl;
    }
    return 0;
}
