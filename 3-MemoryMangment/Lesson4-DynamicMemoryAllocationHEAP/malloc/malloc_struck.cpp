#include <stdio.h>
#include <stdlib.h> 

struct MyStruct
{
    int i;
    double b;
    char a[5];
};

int main()
{
    int *p = (int*)malloc(3 * sizeof(int));
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    printf("address=%p, value=%d\n", p , p[1]);

    return 0;
}