#include<stdio.h>
#include<math.h>

int main()
{
    int m=1;
    float ratio,radian,angle=45;

    radian = angle*(3.1416/180);
    ratio = m/sin(radian);

    printf("\nThe ratio of the slit width to the wavelength is: %.2f\n",ratio);

    return 0;

}
