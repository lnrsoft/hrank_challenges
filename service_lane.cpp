//#include <string>
//#include <vector>
//#include <sstream>
//#include <iostream>
//#include <algorithm>

//int main()
//{
//	std::vector<int> intNT;
//	std::vector<int> lenghtsVector;
//	std::vector<int> testcasesVector;
//	std::string NT;
//	std::string length;     // size = intNT[0]
//	std::string IJs;        // size = intNt[1]
//	getline(std::cin, NT);
//	std::string arr[2];
//	int i = 0;
//	std::stringstream ssin1 (NT);
//	while (ssin1.good() && i < 2)
//	{
//		ssin1 >> arr[i];
//		++i;
//	}
//	for (int a = 0; a < 2; a++)
//	{
//		intNT.push_back (atoi (arr[a].c_str()));
//	}
//	getline(std::cin, length);
//	std::string lengthArray[100000];
//	int la = 0;
//	std::stringstream ssin2 (length);
//	while (ssin2.good() && la < intNT[0])
//	{
//		ssin2 >> lengthArray[la];
//		++la;
//	}
//	for (int b = 0; b < intNT[0]; b++)
//	{
//		lenghtsVector.push_back (atoi (lengthArray[b].c_str()));
//	}
//	for (int l = 0; l < intNT[1]; l++)
//	{
//		getline(std::cin, IJs);
//		std::string TCarr[2];
//		int i = 0;
//		std::stringstream ssin3 (IJs);
//		while (ssin3.good() && i < 2)
//		{
//			ssin3 >> TCarr[i];
//			++i;
//		}
//		for (int a = 0; a < 2; a++)
//		{
//			testcasesVector.push_back (atoi (TCarr[a].c_str()));
//		}
//	}
//	for(int t3 = 0; t3 < (intNT[1] * 2); t3 += 2) // increment by 2
//	{
//		int element1 = testcasesVector[t3];
//		int element2 = testcasesVector[t3 + 1];
//		std::vector<int> arr;
//		while ((element1 - 1) != element2)
//		{
//			arr.push_back(lenghtsVector[element2]);
//			--element2;
//		}
//		sort(arr.begin(), arr.end());
//		std::cout << arr[0] << std::endl;
//	}
//	return 0;
//}
