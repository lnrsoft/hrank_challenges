//#include <algorithm>
//#include <iostream>
//#include <vector>
//#include <string>


//int main()
//{
//    int T;
//    int N;
//    int c= 0;
//    std::string mylist;
//    std::vector<std::string> string_buffer;
//    std::cin >> T;
//    if (T >= 0 && T <= 50 )
//    {
//        while (c < T)
//        {
//            string_buffer.clear();
//            std::cin.ignore();
//            std::cin >> N;
//            std::cin.ignore();
//            std::cin >> mylist;
//            if (N >= 1 && N < 16)
//            {
//                for (auto i = 1; i < (1 << N); i++)
//                {
//                    std::string result = "";
//                    for (int j = 0; j < N; j++)
//                        if (i& (1 << j))
//                        {
//                            result += mylist[j];
//                        }
//                    string_buffer.push_back (result);
//                }
//            }
//            sort (string_buffer.begin(), string_buffer.end());
//            for (unsigned long i = 0; i < (1 << N) - 1; i++)
//            {
//                std::cout << string_buffer[i] << std::endl;
//            }
//            ++c;
//        }
//    }
//    return 0;
//}
