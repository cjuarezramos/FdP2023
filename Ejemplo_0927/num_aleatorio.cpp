#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, t;
    t = time(NULL);
    srand(t);
    a=rand()%3+1;
    std :: cout << a << "\n" << t << "\n";
    return 0;
}