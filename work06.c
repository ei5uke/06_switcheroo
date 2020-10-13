#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1
    int ray1[10];
    
    //2
    srand(time(NULL));
    int i = 0;
    for (i; i < 10; i++)
    {
        ray1[i] = rand();
    }

    //3
    ray1[9] = 0;

    //4
    for (i = 0; i < 10; i++)
    {
        printf("ray1[%d] = %d\n",i,ray1[i]);
    }

    //5
    int ray2[10];

    //6
    int *ray1p = ray1;
    int *ray2p = ray2;
    for (i = 0; i < 10; i++)
    {
        *(ray2p + i) = *(ray1p + 9 - i);
        printf("ray2[%d] = %d\n", i, ray2[i]);
    }

    return 0;
}