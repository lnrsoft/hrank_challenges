//-----------------------------------------------------best solution

//#include <vector>
//#include <iostream>

//int main()
//{
//	std::vector<int> factorials;
//	factorials.push_back(1);
//	int n;
//	std::cin >> n;
//	for (auto i = 1; i <= n; i++)
//	{
//		for (auto j = 0; j < factorials.size(); j++)
//		{
//			factorials[j] *= i;
//		}
//		for (auto j = 0; j < factorials.size() - 1; j++)
//		{
//			factorials[j + 1] += factorials[j] / 10;
//			factorials[j] %= 10;
//		}
//		while (factorials[factorials.size() - 1] / 10)
//		{
//			factorials.push_back(factorials[factorials.size() - 1] / 10);
//			factorials[factorials.size() - 2] %= 10;
//		}
//	}
//	for (int i = factorials.size() - 1; i >= 0; i--)
//	{
//		std::cout << factorials[i];
//	}
//	return 0;
//}

//-----------------------------------------------------solution 1

//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#include <stdlib.h>

//int mult(int size, int res[], int x)
//{
//	int carry = 0, prod;
//	for(int j = 0; j < size; j++)
//	{
//		prod = res[j] * x + carry;
//		res[j] = prod % 10;
//		carry = prod / 10;
//	}
//	while(carry)
//	{
//		res[size] = carry % 10;
//		carry = carry / 10;
//		size++;
//	}
//	return size;
//}

//void fact(int n)
//{
//	int i, size;
//	int res[200];
//	res[0] = 1;
//	size = 1;
//	for(i = 2; i <= n; i++)
//	{
//		size = mult(size, res, i);
//	}
//	for(i = size - 1; i >= 0; i--)
//	{
//		printf("%d", res[i]);
//	}
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	fact(n);
//	return 0;
//}

//-----------------------------------------------------solution 2

//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;

//string multiply(string &num1, string num2)
//{
//	string res;
//	int a, b, c, m, n, l, k, sum, carry;
//	char d;
//	m = num1.size() - 1;
//	n = num2.size() - 1;
//	carry = 0;
//	for (int i = m; i >= 0; i--)
//	{
//		for (int j = n; j >= 0; j--)
//		{
//			l = res.size() - 1;
//			a = num1[i] - '0';
//			b = num2[j] - '0';
//			k = (m - i) + (n - j);
//			if (l >= k)
//			{
//				c = res[l - k] - '0';
//			}
//			else
//			{
//				c = 0;
//			}
//			sum = a * b + c + carry;
//			carry = sum / 10;
//			d = char(sum % 10 + '0');
//			if (l >= k)
//			{
//				res[l - k] = d;
//			}
//			else
//			{
//				res.insert(0, &d, 1);
//			}
//			if (j == 0 && carry)
//			{
//				d = char(carry + '0');
//				res.insert(0, &d, 1);
//				carry = 0;
//			}
//		}
//	}
//	return res[0] == '0' ? "0" : res;
//}

//int main()
//{
//	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
//	int n;
//	cin >> n;
//	string s = "1";
//	for (int i = 1; i <= n; ++i)
//	{
//		s = multiply(s, to_string(i));
//	}
//	cout << s << endl;
//	return 0;
//}

//-----------------------------------------------------solution 3

//#include<iostream>
//#include<stdio.h>
//using namespace std;

//int main(void)
//{
//	int i = 0, j = 0, fact[20000], k = 0, l = 0, n = 0, temp = 0;
//	fact[0] = 1;
//	l = 1;
//	cin >> n;
//	for(i = 2; i <= n; i++)
//	{
//		for(j = 0; j < l; j++)
//		{
//			k = temp + i * fact[j];
//			fact[j] = k % 10;
//			temp = k / 10;
//		}
//		while(temp > 0)
//		{
//			fact[l++] = temp % 10;
//			temp = temp / 10;
//		}
//	}
//	for(i = l - 1; i > -1; i--)
//	{
//		cout << fact[i];
//	}
//	return 0;
//}

//-----------------------------------------------------solution 4
