#include<stdio.h>
#include<math.h>

int main () {
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double delta;
    if (a==0) {
        if(b==0 && c==0) {
            printf("Phuong trinh vo so nghiem");
        } else if(b==0 && c!=0) {
            printf("Phuong trinh vo nghiem");
        } else {
            printf("%f", -c/b);
        }
    } else {
        delta = b*b - 4*a*c;
        if (delta < 0) {
            printf("%f + %fi\n", -b/(2*a) , sqrt(fabs(delta))/(2*a));
            printf("%f - %fi\n", -b/(2*a) , sqrt(fabs(delta))/(2*a));
        } else if(delta == 0) {
            printf("%f", -b/(2*a));
        } else {
            printf("%f\n", (-b + sqrt(delta))/(2*a));
            printf("%f\n", (-b - sqrt(delta))/(2*a));
        }
    }
    return 0;
}
