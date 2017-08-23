#include <iostream>
#include </usr/local/include/gmp.h>
#include </usr/local/include/gmpxx.h>

int main(void)
{
    mpz_t x;
    mpz_t y;
    mpz_t result;
    mpz_init(x);
    mpz_init(y);
    mpz_init(result);
    mpz_set_str(x, "654654654654", 10);
    mpz_set_str(y, "654654654654", 10);
    mpz_mul(result, x, y);
    gmp_printf("\n    %Zd\n*\n    %Zd\n--------------------\n%Zd\n\n", x, y, result);
    // gmp_printf to string
    char* tmp = mpz_get_str(NULL,10,result);
    std::string Str = tmp;
    std::cout << "String: " <<  Str << std::endl;
    /* free used memory */
    mpz_clear(x);
    mpz_clear(y);
    mpz_clear(result);
    return 0;
}

