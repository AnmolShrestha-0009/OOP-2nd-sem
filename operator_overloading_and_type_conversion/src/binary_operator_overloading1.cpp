#include <iostream>
#include <string>

using namespace std;

class complex {
private:
    int real;
    int img;

public:
    complex(int a = 0, int b = 0) : real(a), img(b) {}

    friend bool operator >(const complex &c1, const complex &c2);
    friend bool operator <(const complex &c1, const complex &c2);
    friend bool operator ==(const complex &c1, const complex &c2);
};

bool operator >(const complex &c1, const complex &c2) {
    return (c1.real * c1.img) > (c2.real * c2.img);
}

bool operator <(const complex &c1, const complex &c2) {
    return (c1.real * c1.img) < (c2.real * c2.img);
}

bool operator ==(const complex &c1, const complex &c2) {
    return (c1.real * c1.img) == (c2.real * c2.img);
}

int main() {
    complex c1(3, 4);
    complex c2(5, 6);

    cout << (c1 < c2) << endl;
    cout << (c1 > 2) << endl; 
    cout << (c1 == c2) << endl;

    return 0;
}
/*
OUTPUT:
1
1
0
*/