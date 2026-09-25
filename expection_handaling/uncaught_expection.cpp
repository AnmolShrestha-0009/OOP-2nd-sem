#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 10;
    }
    catch(const char* msg)
    {
        cout << msg;
    }

    return 0;
}
