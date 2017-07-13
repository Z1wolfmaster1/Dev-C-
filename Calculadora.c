#include <stdio.h>
#include <math.h>

int soma(int x, int y);
int sub(int x, int y);
int div(int x, int y);
int po(int x, int y);

int main() {
    int a, b, resultado;
    char o;

    scanf("%d%c%d", &a, &o, &b);

    if(o == '+')
    resultado = soma(a,b);

    else if(o == '-')
    resultado = sub(a,b);

    else if(o == '/')
    resultado = div(a,b);

    else if(o == '*')
    resultado = mult(a,b);

    else if(o == '^')
    resultado = po(a,b);

    else {
        printf("Operador inexistente");
        return 1;
    }

    printf("%d", resultado);

}

int soma(int x, int y) {
    int resultado;

    resultado= x+y;

    return resultado;
}

int soub(int x, int y) {
    int resultado;

    resultado= x-y;

    return resultado;
}

int div(int x, int y) {
    int resultado;

    resultado= x/y;

    return resultado;
}

int mult(int x, int y) {
    int resultado;

    resultado= x*y;

    return resultado;
}

int po(int x, int y) {
    int resultado;

    resultado= pow(x,y);

    return resultado;
}	