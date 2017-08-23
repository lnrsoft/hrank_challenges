#include <iostream>


void fees(int64_t B, int64_t W, int64_t X, int64_t Y, int64_t Z);


void fees(int64_t B, int64_t W, int64_t X, int64_t Y, int64_t Z)
{
    if((X == Z) && (Y == Z) && (X != 0) && (Y != 0)) {
        std::cout << (B * X) + (W * Y);
    }
    if(X == 0 || Y == 0) {
        std::cout << 0;
    }
    if(X < Z && Y > Z) {
        if(X + Z > Y) {
            std::cout << ((W * Y) + (B * X));
        }
    }
    if(X > (Y + Z)) {
        std::cout << (B * (Y + Z) + (W * Y));
    }
    if(Y > (X + Z) && (X != Z) && (Y != Z)) {
        std::cout << ((B * X) + (W * (X + Z)));
    }
    if(X < (Y + Z) && Y < Z) {
        std::cout << (B * X) + (W * Y);
    }
    if(Z < X && Z < Y) {
        if(X > Y + X) {
            std::cout << (B * (Y + Z)) + (W * Y);
        }
        if(X + Z >= Y && Y + Z >= X) {
            std::cout  << ((W * Y) + (B * X));
        }
    }
    std::cout << std::endl;
}



int main()
{
    int64_t b, w, x, y, z;
    int T;
    std::cin >> T;
    for(int i = 0; i < T; ++i) {
        std::cin >> b >> w;
        std::cin >> x >> y >> z;
        fees(b, w, x, y, z);
    }
    return 0;
}
