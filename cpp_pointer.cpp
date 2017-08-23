#include <stdio.h>
#include <iostream>

void update(int* a, int* b)
{
    int A = (*(int*) a + * (int*) b);
    std::cout << A << std::endl;
    int B =  abs(*(int*) a - * (int*) b);
    std::cout << B << std::endl;
}

int main()
{
    int a, b;
    int* pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    return 0;
}
