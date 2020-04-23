#include <iostream>
#include <cassert>
#include <stdlib.h>
#include <wil/resource.h>
using namespace std;

class B
{
public:
    B(){}
    virtual void X() = 0;
};

class D:public B
{
public:
    D(){ X();}
    void X() override{}
};
int main()
{
    int a = 1;

    auto qq = _set_abort_behavior(1, _WRITE_ABORT_MSG);
    auto qq2 = _set_abort_behavior(0, _WRITE_ABORT_MSG);
    cout<<INT_MIN - 1;
    assert(a > 1);

    return 0;
}