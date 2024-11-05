#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) 
{

    double a, b, c;
    double x1,x2;
    printf("請輸入a b c: ");
    scanf_s("%f %f %f", &a, &b, &c);

}
    if (pow(b,2)-4*a*c > 0)
    {
        x1 = (-b + sqrt(pow(b,2)-4*a*c))/ 2 * a;
        x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;

        printf("方程式有兩個實根 x = %f 和 %f\n", x1, x2);
    }
    else if (pow(b, 2) - 4 * a * c == 0)
    {
        x1 == x2= -b / 2 * a;

            printf("方程式有兩相等實根 x = %f\n", x1=x2);
    }
            else
    {
                printf("沒有實根。\n");
    }
    return 0;

}
