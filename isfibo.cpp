//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>

//int main()
//{
//	std::vector<double> fibo;
//	std::vector<double> fiboVector;
//	std::vector<std::string> stringVector;
//	double T;
//	double N;
//	fibo.push_back (0);
//	fibo.push_back (1);
//	fiboVector.push_back (0);
//	fiboVector.push_back (1);
//	double fiboArray[1000];
//	fiboArray[0] = 0;
//	fiboArray[1] = 1;
//	for (auto i=1; i<1000; ++i)
//	{
//		double ii = i-1;
//		double n = fibo[i] + (fibo[ii]);
//		fibo.push_back (n);
//		if (n < 10000000000)
//		{
//			fiboVector.push_back (double (n));
//			fiboArray[i+1] = double (n);
//		}
//	}
//	std::cin >> T;
//	for (auto i=0; i<T; ++i)
//	{
//		if (T >= 1 && T <= 100000)
//		{
//			std::cin >> N;
//			std::vector<double> fi_vector (fiboArray,fiboArray+1000);
//			std::vector<double>::iterator it;
//			it = find (fi_vector.begin(), fi_vector.end(), N);
//			if (it != fi_vector.end())
//			{
//				stringVector.push_back ("IsFibo");
//			}
//			if (it == fi_vector.end())
//			{
//				stringVector.push_back ("IsNotFibo");
//			}
//		}
//	}
//	for (auto a=0; a<stringVector.size(); ++a)
//	{
//		std::cout << stringVector[a] << std::endl;
//	}
//	return 0;
//}
