#include <stdio.h>
#define PI 3.14159265358979323846

int main(void)
{
    int i = 1;

    while (i < 21)
    {
        printf("La circonferenza del cerchio è uguale a %f\n", (2*PI)*i);
        i++;
    }

    return 0;
}
