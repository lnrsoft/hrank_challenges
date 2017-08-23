//#include <vector>
//#include <string>
//#include <iostream>

//int findDigits(int inputIns)
//{
//    std::vector<int> integersVec;
//    std::vector<int> integers_div;
//    int integers = inputIns;
//    integersVec.push_back(inputIns);
//    while (integers  > 0)
//    {
//        int digit = integers  % 10;
//        integers  /= 10;
//        integers_div.push_back(digit);
//    }
//    int counter = 0;
//    for (int i = 0; i < integers_div.size(); ++i)
//    {
//        if (integers_div[i] != 0)
//        {
//            int result = integersVec[0] / integers_div[i];
//            if (integersVec[0]  % integers_div[i] == 0 )
//            {
//                counter += 1;
//            }
//        }
//    }
//    return counter;
//}

//int main ()
//{
//    std::vector<int> digitsVec;
//    int t;
//    int ints;
//    std::cin >> t;
//    for (int i = 0; i < t; ++i)
//    {
//        std::cin >> ints;
//        findDigits(ints);
//        digitsVec.push_back(findDigits(ints));
//    }
//    for (int d = 0; d < t; ++d)
//    {
//        std::cout << digitsVec[d] << std::endl;
//    }
//    return 0;
//}
