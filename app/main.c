#include <stdio.h>
#include "myfunc.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc !=4) {
        printf("Недостатчно аргументов\n");
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        char* arg = argv[i];
        int j = 0;

        if (arg[0] == '-') {
            j++;
        }


        while (arg[j] != '\0') {
            if (!isdigit(arg[j])) {
                printf("Аргумент %d не является числом!\n", i);
                return 1;
            }
            j++;
        }
    }

    double a = atof (argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);

    double* res = (double*)malloc(2 * sizeof(double));
    my_sqrt(res, a, b, c);
    printf("Первый корень уравнения: %.2f\n", res[0]);
    printf("Второй уравнения: %.2f\n", res[1]);
    free(res);

    printf("Число фибоначчи, соответствующее номеру %d = %d\n", (int)a, fibonachi((int)a));
    printf("Число фибоначчи, соответствующее этому номеру %d = %d\n", (int)b, fibonachi((int)b));
    printf("Число фибоначчи, соответствующее этому номеру %d = %d\n", (int)c, fibonachi((int)c));
}
