//#include <iostream>
//#include <sstream>
//#include <string>
//using namespace std;

//class Student {
//    int age, standard;
//    string first_name, last_name;
//public:
//    void set_age(int _age)
//    {
//        age = _age;
//    }
//    void set_standard(int _standard)
//    {
//        standard = _standard;
//    }
//    void set_first_name(string &_first_name)
//    {
//        first_name = _first_name;
//    }
//    void set_last_name(string &_last_name)
//    {
//        last_name = _last_name;
//    }

//    int get_age()
//    {
//        return age;
//    }
//    int get_standard()
//    {
//        return standard;
//    }
//    string &get_first_name()
//    {
//        return first_name;
//    }
//    string &get_last_name()
//    {
//        return last_name;
//    }

//    string to_string()
//    {
//        stringstream ss;
//        ss << age << "," << first_name << "," << last_name << "," << standard;
//        return ss.str();
//    }
//};

//int main()
//{
//    int age, standard;
//    string first_name, last_name;
//    cin >> age >> first_name >> last_name >> standard;
//    Student st;
//    st.set_age(age);
//    st.set_standard(standard);
//    st.set_first_name(first_name);
//    st.set_last_name(last_name);
//    cout << st.get_age() << "\n";
//    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
//    cout << st.get_standard() << "\n";
//    cout << "\n";
//    cout << st.to_string();
//    return 0;
//}

////#include <iostream>
////#include <string>

////class Name {
////private: // only use in the definition of the class itself
////    int in1, in2;
////    std::string str1, str2;

////public:
////    Name(int i1, std::string s1, std::string s2, int i2)
////    {
////        in1 = i1;
////        str1 = s1;
////        str2 = s2;
////        in2 = i2;
////    }
////    Name()
////    {
////        in1 = 0;
////        str1 = "";
////        str2 = "";
////        in2 = 0;
////    }
////     void setName(int i1, std::string s1, std::string s2, int i2)
////    {
////        in1 = i1;
////        str1 = s1;
////        str2 = s2;
////        in2 = i2;
////    }
////    void setI1(int i1)
////    {
////        in1 = i1;
////    }
////    void setS1(std::string s1)
////    {
////        str1 = s1;
////    }
////    void setS2(std::string s2)
////    {
////        str2 = s2;
////    }
////    void seti2(int i2)
////    {
////        in2 = i2;
////    }
////    int getI1()
////    {
////        return in1;
////    }
////    std::string getS1()
////    {
////        return str1;
////    }
////    std::string getS2()
////    {
////        return str2;
////    }
////    int getI2()
////    {
////        return in2;
////    }
////};

////int main()
////{
////    int i1, i4;
////    std::string i2, i3;
////    Name inp;
////    std::cin >> i1;
////    std::cin >> i2;
////    std::cin >> i3;
////    std::cin >> i4;
////    inp.setName(i1, i2, i3, i4);
////    std::cout << inp.getI1() << std::endl;
////    std::cout << inp.getS2() << ", " << inp.getS1() << std::endl;
////    std::cout << inp.getI2() << std::endl << std::endl;
////    std::cout << inp.getI1() << "," << inp.getS1() << "," << inp.getS2() << ","
////              << inp.getI2() << std::endl;
////    return 0;
////}
