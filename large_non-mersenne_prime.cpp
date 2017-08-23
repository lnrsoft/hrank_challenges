//#include <iostream>
//#include <vector>
//#include <math.h>


//void lastdigits(unsigned long int a, unsigned long int b, unsigned long int c, unsigned long int d)
//{
//	__int64_t result = a * ( pow (b, c) ) + d;
//	std::string str = std::to_string(result);   //c++11
//	std::vector<char> result_vec(str.begin(), str.end());
//	if (result_vec.size() <= 12)
//	{
//		for(auto a = 0; a < 12 - result_vec.size(); a++)
//		{
//			std::cout << 0;
//		}
//		for(auto i = 0; i < result_vec.size(); i++)
//		{
//			std::cout << result_vec[(result_vec.size() - (result_vec.size() - i))];
//		}
//	}
//	if (result_vec.size() > 13)
//	{
//		for(auto i = 0; i < 12; i++)
//		{
//			std::cout << result_vec[(result_vec.size() - (12 - i))];
//		}
//	}
//}


//int main()
//{
//	int T;
//	unsigned long int A, B, C, D;
//	std::cin >> T;
//	if (1 <= T && T <= 500000)
//	{
//		for (int i = 0; i < T; i++)
//		{
//			std::cin >> A >> B >> C >> D;
//			if (1 <= A && A <= 1000000000
//				&& 1 <= B && B <= 1000000000
//				&& 1 <= C && C <= 1000000000
//				&& 1 <= D && D <= 1000000000)
//			{
//				lastdigits(A, B, C, D);
//			}
//			std::cout << std::endl;
//		}
//	}
//	return 0;
//}
