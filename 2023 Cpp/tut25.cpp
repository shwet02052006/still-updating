#include <iostream>
using namespace std;
class complex
{

    int a, b;

public:
    void setdata(int v1, int v2)
    {

        a = v1;
        b = v2;
    }
    void setdatabysum (complex o1, complex o2)
    {

        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void print()
    {
        cout << "our comple no is " << a << "+i" << b << endl;
    }
};

int main()
{

    complex c1, c2;

    c1.setdata(1, 2);
    c1.setdatabysum(c1,c2);
    c1.print();
    c2.setdata(3, 4);
    c2.setdatabysum(c1,c2);
    c2.print();

    return 0;
}