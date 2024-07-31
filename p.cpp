#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() 
{
    int opcion;
    printf("Menú de opciones\n");
    printf("1. Calcular recta\n");
    printf("2. Calcular parábola\n");
    printf("3. Calcular circunferencia\n");
    printf("4. Calcular elipse\n");
    printf("Ingrese la opción deseada: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            float x1, y1, x2, y2, m, b;
            printf("Introduce las coordenadas del primer punto (x1,y1): ");
            scanf("%f %f", &x1, &y1);
            printf("Introduce las coordenadas del segundo punto (x2,y2): ");
            scanf("%f %f", &x2, &y2);
            if (x1 == x2) {
            printf("La ecuacion de la recta es: x = %.2f\n", x1);
            } else {
            m = (y2 - y1) / (x2 - x1);
            b = y1 - m * x1;
            printf("La ecuacion ordinaria de la recta es: y = %.2fx + %.2f\n", m, b);
            printf("La ecuacion general de la recta es: %.2fx - y + %.2f = 0\n", m, -b);
            } 
            break;
        case 2:
            int opcion;
            printf("calcular parabola\n");
            printf("¿su parábola es horizontal(1) o vertical(2)?\n");
           scanf("%d", & opcion);
           switch(opcion) {
           case 1://horizontal 
           float h, k, p;
           printf("Introduce el valor de h: ");
           scanf("%f", &h);
           printf("Introduce el valor de k: ");
           scanf("%f", &k);
           printf("Introduce el valor de p: ");
           scanf("%f", &p);

           printf("\nLa ecuacion general de la parabola es:\n y^2 - %.1fy - %.1fx + %.1f = 0\n", (2*k), (4*p), ((k*k)+(4*p*h)));
           printf("La ecuacion ordinaria de la parabola es: (y-%.f)^2=(4*%.1f)*(x-(%.f))\n", k, p, h);
            break;
           case 2://vertical 
           printf("Introduce el valor de h: ");
           scanf("%f", &h);
           printf("Introduce el valor de k: ");
           scanf("%f", &k);
           printf("Introduce el valor de p: ");
           scanf("%f", &p);

           printf("\nLa ecuacion general de la parabola es:\n x^2 - %.1fx - %.1fy - %.1f = 0\n", (2*h), (4*p), ((h*h)+(4*p*k)));
           printf("La ecuacion ordinaria de la parabola es: (x-%.f)^2=(4*%.1f)*(y-(%.f))\n", h, p, k);
            break;
           default:
           printf("opción invalida\n");
           }
           break;
        case 3:
           float h,k,r;
           printf("calcular circunferencia\n");
           printf("Introduce el valor de h: ");
           scanf("%f", &h);
           printf("Introduce el valor de k: ");
           scanf("%f", &k);
           printf("Introduce el valor del radio: ");
           scanf("%f", &r);

           printf("\nLa ecuacion ordinaria de la circunferencia es: (x - %.2f)^2 + (y - %.2f)^2 = %.2f^2\n", h, k, r);
           printf("La ecuacion general de la circunferencia es: x^2 + y^2 + %.fx + %.fy + %.f = 0\n", -2*h, -2*k, h*h + k*k - r*r);
           break;
        case 4:
            float a;
            printf("Introduce el valor de a: ");
            scanf("%f", &a);
            printf("Introduce el valor de b: ");
            scanf("%f", &b);
            printf("Introduce el valor de h: ");
            scanf("%f", &h);
            printf("Introduce el valor de k: ");
            scanf("%f", &k);

            printf("\nLa ecuacion ordinaria de la elipse es: ((x-%.2f)^2)/%.2f^2 + ((y-%.2f)^2)/%.2f^2 = 1\n", h, a, k, b);
            printf("La ecuacion general de la elipse es: %.2fx^2 + %.2fy^2 + %.2fx + %.2fy + %.2f = 0\n", pow(b, 2), pow(a, 2), -2 * h * pow(b, 2), -2 * k * pow(a, 2), pow(h, 2) * pow(b, 2) + pow(k, 2) * pow(a, 2) - pow(a, 2) * pow(b, 2));
            break;
        default:
            printf("Opción inválida\n");
    }

    getch(); // Pausa la ejecución hasta que el usuario presione una tecla (función de conio.h)
    return 0;
}