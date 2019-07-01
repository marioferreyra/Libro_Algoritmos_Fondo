
#include <stdio.h>

int main() {
    char nombre[] = "Pablo";
    int edad = 39;
    double altura = 1.70;

    printf("Mi nombre es %s, tengo %d anios y mido %lf metros.\n"
          , nombre
          , edad
          , altura);

    return 0;
}
