#include <iostream> 
#include <string> 

using namespace std; 

class complex { 
private: 
    int real; 
    int img; 

public: 
    complex(int a = 0, int b = 0) : real(a), img(b) {} 

    void display() { 
        if (img >= 0)
            cout << real << "+" << img << "i" << endl; 
        else
            cout << real << img << "i" << endl;
    } 

    friend complex operator +(const complex &c1, const complex &c2); 
    friend complex operator -(const complex &c1, const complex &c2); 
}; 

complex operator +(const complex &c1, const complex &c2) { 
    return complex(c1.real + c2.real, c1.img + c2.img); 
} 

complex operator -(const complex &c1, const complex &c2) { 
    return complex(c1.real - c2.real, c1.img - c2.img); 
} 

int main() { 
    complex c1(3, 4); 
    complex c2(5, 6); 
    complex c3, c4; 

    c3 = c1 + c2; 
    c4 = c1 - c2; 

    c3.display(); 
    c4.display(); 

    return 0; 
}
/*
output:
8+10i
-2-2i
*/