#include "../include/libecho.hpp"
#include <unistd.h>


int fun4(void)
{
    int i = 10;

    log("fun4 logging");
    expect(i == 10);
    expect(i == 20);

    return 0;
}

int fun3(void)
{
    return fun4();
}

int fun2(void)
{
    return fun3();
}

int fun(void)
{
    return fun2();
}

int main()
{
    int i;
    int b;

    perf({ 
        i = 10;
        int l = 10;
        int* a = new int(29);
        log("call to usleep");
        usleep(15000);
    })

    b = 1;
    i = 20;
    log("hello")
    log(i)
    b = 20;
    log(b*i == i*b)
    
    fun();

    std::cout << \
        "[main] return line." <<\
        std::endl;

    return 0;
}
