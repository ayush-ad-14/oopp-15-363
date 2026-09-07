#include <iostream>
using namespace std;
class Buffer
{
    int s;
    int *data;

public:
    Buffer(int size) : s{size}, data{new int{s}} {};
    Buffer(Buffer &&buff) : s{buff.s}, data{new int[buff.s]}
    {
        for (auto i = 0; i < s; i++)
            data[i] = buff.data[i];
    }
};

int main()
{
    Buffer b(100000);
    Buffer c(b);
    return 0;
}
// Move constructors transfer the resourcse to another object in constant. It is better than copy constructors if we do not want to use old objects.

// Destructor: It is a member function which activates automatically or by delete operator when any object release the execution block. It follows LIFO order to release resources