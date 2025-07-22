#include<stdio.h>
#include<math.h>
int main()
{
    int m;
    float d,wavelength,angle_degree,angle_radian;
    printf("Enter the wavelength(nanometer): ");
    scanf("%f",&wavelength);

    printf("Enter the angular separation,d(micrometer): ");
    scanf("%f",&d);
    d = d*1000;
    printf("Enter the angle(degree): ");
    scanf("%f",&angle_degree);
    angle_radian = angle_degree*(3.1416/180);
    m = (d*sin(angle_radian))/wavelength;
    if(wavelength>=380 && wavelength<=750)
    {
        printf("%d-th order maxima.\n",m);
    }
    else
        {
            printf("Out of the range,Please enter a valid number.\n");
        }
        return 0;
}
