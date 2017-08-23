#include <iostream>
#include <vector>

void wordClock()
{
    std::vector<std::string> output;
    int h, m;
    std::cin >> h;
    std::cin >> m;
    if(h == 1 && m != 0 && m != 30 && m >= 1 && m <= 29) {
        output.push_back("one");
    }
    if(h == 2 && m != 0 && m != 30 && m >= 1 && m <= 29) {
        output.push_back("two");
    }
    if(h == 3 && m != 0 && m != 30 && m >= 1 && m <= 29) {
        output.push_back("three");
    }
    if(h == 4 && m != 0 && m != 30 && m >= 1 && m <= 29) {
        output.push_back("four");
    }
    if(h == 5 && m != 0 && m != 30 && m >= 1 && m <= 29) {
        output.push_back("five");
    }
    if(h == 6 && m != 0 && m != 30 && m >= 1 && m <= 29) {
        output.push_back("six");
    }
    if(h == 7 && m != 0 && m != 30 && m >= 1 && m <= 29) {
        output.push_back("seven");
    }
    if(h == 8 && m != 0 && m != 30 && m >= 1 && m <= 29) {
        output.push_back("eight");
    }
    if(h == 9 && m != 0 && m != 30 && m >= 1 && m <= 29) {
        output.push_back("nine");
    }
    if(h == 10 && m != 0 && m != 30 && m >= 1 && m <= 29) {
        output.push_back("ten");
    }
    if(h == 11 && m != 0 && m != 30 && m >= 1 && m <= 29) {
        output.push_back("eleven");
    }
    if(h == 12 && m != 0 && m != 30 && m >= 1 && m <= 29) {
        output.push_back("twelve");
    }
    if(h == 1 && m != 0 && m != 30 && m >= 31 && m <= 59) {
        output.push_back("two");
    }
    if(h == 2 && m != 0 && m != 30 && m >= 31 && m <= 59) {
        output.push_back("three");
    }
    if(h == 3 && m != 0 && m != 30 && m >= 31 && m <= 59) {
        output.push_back("four");
    }
    if(h == 4 && m != 0 && m != 30 && m >= 31 && m <= 59) {
        output.push_back("five");
    }
    if(h == 5 && m != 0 && m != 30 && m >= 31 && m <= 59) {
        output.push_back("six");
    }
    if(h == 6 && m != 0 && m != 30 && m >= 31 && m <= 59) {
        output.push_back("seven");
    }
    if(h == 7 && m != 0 && m != 30 && m >= 31 && m <= 59) {
        output.push_back("eight");
    }
    if(h == 8 && m != 0 && m != 30 && m >= 31 && m <= 59) {
        output.push_back("nine");
    }
    if(h == 9 && m != 0 && m != 30 && m >= 31 && m <= 59) {
        output.push_back("ten");
    }
    if(h == 10 && m != 0 && m != 30 && m >= 31 && m <= 59) {
        output.push_back("eleven");
    }
    if(h == 11 && m != 0 && m != 30 && m >= 31 && m <= 59) {
        output.push_back("twelve");
    }
    if(h == 1 && m == 0) {
        output.push_back("one o' clock");
        output.push_back("");
    }
    if(h == 2 && m == 0) {
        output.push_back("two o' clock");
        output.push_back("");
    }
    if(h == 3 && m == 0) {
        output.push_back("three o' clock");
        output.push_back("");
    }
    if(h == 4 && m == 0) {
        output.push_back("four o' clock");
        output.push_back("");
    }
    if(h == 5 && m == 0) {
        output.push_back("five o' clock");
        output.push_back("");
    }
    if(h == 6 && m == 0) {
        output.push_back("six o' clock");
        output.push_back("");
    }
    if(h == 7 && m == 0) {
        output.push_back("seven o' clock");
        output.push_back("");
    }
    if(h == 8 && m == 0) {
        output.push_back("eight o' clock");
        output.push_back("");
    }
    if(h == 9 && m == 0) {
        output.push_back("nine o' clock");
        output.push_back("");
    }
    if(h == 10 && m == 0) {
        output.push_back("ten o' clock");
        output.push_back("");
    }
    if(h == 11 && m == 0) {
        output.push_back("eleven o' clock");
        output.push_back("");
    }
    if(h == 12 && m == 0) {
        output.push_back("twelve o' clock");
        output.push_back("");
    }
    if(h == 1 && m == 30) {
        output.push_back("half past one");
        output.push_back("");
    }
    if(h == 2 && m == 30) {
        output.push_back("half past two");
        output.push_back("");
    }
    if(h == 3 && m == 30) {
        output.push_back("half past three");
        output.push_back("");
    }
    if(h == 4 && m == 30) {
        output.push_back("half past four");
        output.push_back("");
    }
    if(h == 5 && m == 30) {
        output.push_back("half past five");
        output.push_back("");
    }
    if(h == 6 && m == 30) {
        output.push_back("half past six");
        output.push_back("");
    }
    if(h == 7 && m == 30) {
        output.push_back("half past seven");
        output.push_back("");
    }
    if(h == 8 && m == 30) {
        output.push_back("half past eight");
        output.push_back("");
    }
    if(h == 9 && m == 30) {
        output.push_back("half past nine");
        output.push_back("");
    }
    if(h == 10 && m == 30) {
        output.push_back("half past ten");
        output.push_back("");
    }
    if(h == 11 && m == 30) {
        output.push_back("half past eleven");
        output.push_back("");
    }
    if(h == 12 && m == 30) {
        output.push_back("half past twelve");
        output.push_back("");
    }
    if(m == 1) {
        output.push_back("one minute past ");
    }
    if(m == 2) {
        output.push_back("two minutes past ");
    }
    if(m == 3) {
        output.push_back("three minutes past ");
    }
    if(m == 4) {
        output.push_back("four minutes past ");
    }
    if(m == 5) {
        output.push_back("five minutes past ");
    }
    if(m == 6) {
        output.push_back("six minutes past ");
    }
    if(m == 7) {
        output.push_back("seven minutes past ");
    }
    if(m == 8) {
        output.push_back("eight minutes past ");
    }
    if(m == 9) {
        output.push_back("nine minutes past ");
    }
    if(m == 10) {
        output.push_back("ten minutes past ");
    }
    if(m == 11) {
        output.push_back("eleven minutes past ");
    }
    if(m == 12) {
        output.push_back("twelve minutes past ");
    }
    if(m == 13) {
        output.push_back("thirteen minutes past ");
    }
    if(m == 14) {
        output.push_back("fourteen minutes past ");
    }
    if(m == 15) {
        output.push_back("quarter past ");
    }
    if(m == 16) {
        output.push_back("sixteen minutes past ");
    }
    if(m == 17) {
        output.push_back("seventeen minutes past ");
    }
    if(m == 18) {
        output.push_back("eighteen minutes past ");
    }
    if(m == 19) {
        output.push_back("nineteen minutes past ");
    }
    if(m == 20) {
        output.push_back("twenty minutes past ");
    }
    if(m == 21) {
        output.push_back("twenty one minutes past ");
    }
    if(m == 22) {
        output.push_back("twenty two minutes past ");
    }
    if(m == 23) {
        output.push_back("twenty three minutes past ");
    }
    if(m == 24) {
        output.push_back("twenty four minutes past ");
    }
    if(m == 25) {
        output.push_back("twenty five minutes past ");
    }
    if(m == 26) {
        output.push_back("twenty six minutes past ");
    }
    if(m == 27) {
        output.push_back("twenty seven minutes past ");
    }
    if(m == 28) {
        output.push_back("twenty eight minutes past ");
    }
    if(m == 29) {
        output.push_back("twenty nine minutes past ");
    }
    if(m == 31) {
        output.push_back("twenty nine minutes to ");
    }
    if(m == 32) {
        output.push_back("twenty eight minutes to ");
    }
    if(m == 33) {
        output.push_back("twenty seven minutes to ");
    }
    if(m == 34) {
        output.push_back("twenty six minutes to ");
    }
    if(m == 35) {
        output.push_back("twenty five minutes to ");
    }
    if(m == 36) {
        output.push_back("twenty four minutes to ");
    }
    if(m == 37) {
        output.push_back("twenty three minutes to ");
    }
    if(m == 38) {
        output.push_back("twenty two minutes to ");
    }
    if(m == 39) {
        output.push_back("twenty one minutes to ");
    }
    if(m == 40) {
        output.push_back("twenty minutes to ");
    }
    if(m == 41) {
        output.push_back("nineteen minutes to ");
    }
    if(m == 42) {
        output.push_back("eighteen minutes to ");
    }
    if(m == 43) {
        output.push_back("seventeen minutes to ");
    }
    if(m == 44) {
        output.push_back("sixteen minutes to ");
    }
    if(m == 45) {
        output.push_back("quarter to ");
    }
    if(m == 46) {
        output.push_back("fourteen minutes to ");
    }
    if(m == 47) {
        output.push_back("thirteen minutes to ");
    }
    if(m == 48) {
        output.push_back("twelve minutes to ");
    }
    if(m == 49) {
        output.push_back("eleven minutes to ");
    }
    if(m == 50) {
        output.push_back("ten minutes to ");
    }
    if(m == 51) {
        output.push_back("nice minutes to ");
    }
    if(m == 52) {
        output.push_back("eight minutes to ");
    }
    if(m == 53) {
        output.push_back("seven minutes to ");
    }
    if(m == 54) {
        output.push_back("six minutes to ");
    }
    if(m == 55) {
        output.push_back("five minutes to ");
    }
    if(m == 56) {
        output.push_back("four minutes to ");
    }
    if(m == 57) {
        output.push_back("three minutes to ");
    }
    if(m == 58) {
        output.push_back("two minutes to ");
    }
    if(m == 59) {
        output.push_back("one minute to ");
    }
    std::cout << output[1] << output[0] << std::endl;
}

int main()
{
    wordClock();
    return 0;
}
