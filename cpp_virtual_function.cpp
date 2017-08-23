//#include <iostream>
//#include <string>
//#include <vector>

//class Person {
//public:
//    std::string name;
//    int age;
//    //	virtual double& operator[](int) = 0;  // pure virtual function
//    //	virtual int size() const = 0;         // const member function

//    virtual ~Person() {}  // destructor (§3.2.1.2)

//    //	~Person();
//};

//class Professor : public Person {
//public:
//    int publications;
//    int cur_id;


//    virtual void getdata(int prof_id,int n, int a, int id)
//    {
//        std::cin >> prof_id;
//        std::cin >> name >> age >> publications;
//    }

//    virtual void putdata(int n, int a, int id)
//    {
//        std::cout << name << age << cur_id;
//    }
//    virtual ~Professor() {}
//};

//class Student : public Person {
//public:
//    std::vector<int> marks;
//    int current_marks;
//    int sum;

//    virtual void getdata(int stud_id)
//    {
//        std::cin >> stud_id;
//        std::cin >> name >> age;
//        for (int i = 0; i < 6; i++) {
//            std::cin >> current_marks;
//            marks.push_back(current_marks);
//        }
//    }

//    virtual void putdata()
//    {
//        for (int j = 0; j < 6; j++) {
//            sum += marks[j];
//        }

//        std::cout << name << age << sum;
//    }
//    virtual ~Student() {};
//};

//int main()
//{
//    int a =0, b2=0,c2=0,d=0;
//    Professor* b = new Professor;
//    b->getdata(a,b2,c2,d);

//    //	int id;
//    int testCase;
//    std::cin >> testCase;
//    for (auto j = 0; j < testCase; j++) {
//        std::cout << "start";
//    }
//}

///*

//  This problem is to get you familiar with virtual functions. Create three
//  classes Person, Professor and Student. The class Person should have data
//  members name and age. The classes Professor and Student should inherit from
//  the class Person.

//  The class Professor should have two integer members: publications and
//  cur_id. There will be two member functions: getdata and putdata. The
//     function
//  getdata should get the input from the user: the name, age and publications
//     of
//  the professor. The function putdata should print the name, age, publications
//  and the cur_id of the professor.

//  The class Student should have two data members: marks, which is an array of
//  size  and cur_id. It has two member functions: getdata and putdata. The
//  function getdata should get the input from the user: the name, age, and the
//  marks of the student in  subjects. The function putdata should print the
//  name, age, sum of the marks and the cur_id of the student.

//  For each object being created of the Professor or the Student class,
//  sequential id's should be assigned to them starting from .

//  Solve this problem using virtual functions, constructors and static
//  variables. You can create more data members if you want.

//  Input Format

//  There are two types of input. If the object being created is of the
//  Professor class, you will have to input the name, age and publications of
//     the
//  professor.

//  If the object is of the Student class, you will have to input the name, age
//  and the marks of the student in subjects.

//  Constraints

//  , where  is the length of the name.


//  , where marks is the marks of the student in each subject.

//  Output Format

//  There are two types of output depending on the object.

//  If the object is of type Professor, print the space separated name, age,
//  publications and id on a new line.

//  If the object is of the Student class, print the space separated name, age,
//  the sum of the marks in  subjects and id on a new line.

//  Sample Input

//  4
//  1
//  Walter 56 99
//  2
//  Jesse 18 50 48 97 76 34 98
//  2
//  Pinkman 22 10 12 0 18 45 50
//  1
//  White 58 87
//*/
