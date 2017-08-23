//#include <iostream>
//#include <unordered_map>
//#include <vector>
//#include <sstream>

//using namespace std;

//int main()
//{
//    vector<int> vec;
//    string x;
//    getline (cin, x);
//    int ix = atoi (x.c_str());
//    string line;
//    getline (cin, line);
//    string arr[256];
//    int i = 0;
//    stringstream ssin (line);
//    while (ssin.good() && i < ix)
//    {
//        ssin >> arr[i];
//        ++i;
//    }
//    for (i = 0; i < ix; i++)
//    {
//        vec.push_back (atoi (arr[i].c_str()));
//    }
//    unordered_map<int, unsigned> occurrences;
//    for (unsigned i = 0; i < vec.size(); ++i)
//    {
//        ++occurrences[vec[i]];
//    }
//    for (unsigned i = 0; i < vec.size(); ++i)
//    {
//        if (occurrences[vec[i]] == 1 && vec[i] != 0)
//        {
//            cout << vec[i] << " ";
//        }
//    }
//}
