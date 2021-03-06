#include <vector>
#include <iostream>
#include <string>

void encrypter()
{
    int N, K;
    char uppercase[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
                        'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
                        'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
                        'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
                        'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
                        'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
                       };
    std::vector<char> uppercase_vec(uppercase, uppercase + sizeof(uppercase) / sizeof(uppercase[0]));
    char lowercase[]  = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
                         'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                         'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
                         'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                         'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
                         'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                         'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
                         'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                         'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
                         'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
                        };
    std::vector<char> lowercase_vec(lowercase, lowercase + sizeof(lowercase) / sizeof(lowercase[0]));
    char symbols[]  = {0x27, 0x5C, '!', '"', '#', '$', '%', '&',  '(', ')', '*', '+', '"', '"', '-', '.',
                       '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=',
                       '>', '?', '@', '[', ']', '^', '_', '`', '{', '|', '}', '~',
                       0x27, 0x5C, '!', '"', '#', '$', '%', '&',  '(', ')', '*', '+', '"', '"', '-', '.',
                       '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=',
                       '>', '?', '@', '[', ']', '^', '_', '`', '{', '|', '}', '~',
                       0x27, 0x5C, '!', '"', '#', '$', '%', '&',  '(', ')', '*', '+', '"', '"', '-', '.',
                       '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=',
                       '>', '?', '@', '[', ']', '^', '_', '`', '{', '|', '}', '~',
                       0x27, 0x5C, '!', '"', '#', '$', '%', '&',  '(', ')', '*', '+', '"', '"', '-', '.',
                       '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=',
                       '>', '?', '@', '[', ']', '^', '_', '`', '{', '|', '}', '~',
                       0x27, 0x5C, '!', '"', '#', '$', '%', '&',  '(', ')', '*', '+', '"', '"', '-', '.',
                       '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=',
                       '>', '?', '@', '[', ']', '^', '_', '`', '{', '|', '}', '~'
                      };
    std::vector<char> symbols_vec(symbols, symbols + sizeof(symbols) / sizeof(symbols[0]));
    std::string S;
    std::vector<char> strs;
    std::cin >> N;
    std::cin >> S;
    std::cin >> K;
    for(auto i = 0; i < N; i++) {
        strs.push_back(S[i]);
    }
    if(K == 0) {
        for(auto i = 0; i < N; i++) {
            std::cout << strs[i];
        }
    }
    if(K > 0) {
        for(auto i = 0; i < N; i++) {
            for(auto j = 0; j < 44; j++) {
                if(strs[i] == uppercase_vec[j]) {
                    std::cout << uppercase_vec[j + K];
                    break;
                }
                if(strs[i] == lowercase_vec[j]) {
                    std::cout << lowercase_vec[j + K];
                    break;
                }
                if(strs[i] == symbols_vec[j]) {
                    std::cout << symbols_vec[j];
                    break;
                }
            }
        }
    }
}

int main()
{
    encrypter();
    return 0;
}

