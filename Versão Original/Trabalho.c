#include <stdio.h>  //biblioteca
#include <stdlib.h> //biblioteca

/*Faça uma calculadora em "c" que leia dois números e o usuario tenha 7 funções
(adição , subtração, multiplicação , divisão, fatorial , exponencial e radiação)
possiveis para fazer operações com os dois numeros digitados...
*/

void soma(float n);
void subtrai(float n);
void divide(float n);
void multiplica(float n);
void fatorial();
void exponencial(float n);
void tabuada(float n);
void menu();

int main()
{
    menu();
    system("pause");
    return 0;
}

void menu()
{
    int escolha;

    printf("\t\tBem vindo a calculadora em C\n\n");

    printf("Selecione uma operacao matematica:\n");
    printf("\t1- Adicao\n");
    printf("\t2- Subtracao\n");
    printf("\t3- Divisao\n");
    printf("\t4- Multiplicacao\n");
    printf("\t5- Fatorial\n");
    printf("\t6- Exponencial\n");
    printf("\t7- Tabuada\n");
    printf("\t8- Sair\n");
    printf("Operacao: ");
    scanf("%d", &escolha);

    float n = 0;

    switch (escolha)
    {
    case 1:
        soma(n);
        break;

    case 2:
        subtrai(n);
        break;

    case 3:
        divide(n);
        break;

    case 4:
        multiplica(n);
        break;

    case 5:
        fatorial();
        break;

    case 6:
        exponencial(n);
        break;

    case 7:
        tabuada(n);
        break;

    case 8:
        system("exit");
        printf("\nFinalizando...\n\n");
        break;

    default:
        printf("\nComando invalido, tente novamente!\n\n");
        system("pause");
        system("cls");
        menu();
        break;
    }
}

void soma(float n)
{
    if (n == 0)
    {
        float valor1, valor2, result;
        printf("\nDigite o 1 valor: ");
        scanf("%f", &valor1);
        printf("Digite o 2 valor: ");
        scanf("%f", &valor2);
        result = valor1 + valor2;
        printf("\nResultado: %.2f\n\n ", result);
        system("pause");
        system("cls");
        menu();
    }
    else
    {
        for (int i = 1; i <= 10; i++)
        {
            float resultado = n + i;
            printf("\t%.2f + %.2f = %.2f\n", n, (float)i, resultado);
        }
    }
}

void subtrai(float n)
{
    if (n == 0)
    {
        float valor1, valor2, result;
        printf("\nDigite o 1 valor: ");
        scanf("%f", &valor1);
        printf("Digite o 2 valor: ");
        scanf("%f", &valor2);
        result = valor1 - valor2;
        printf("\nResultado: %.2f\n\n ", result);
        system("pause");
        system("cls");
        menu();
    }
    else
    {
        for (int i = 1; i <= 10; i++)
        {
            float resultado = n - i;
            printf("\t%.2f - %.2f = %.2f\n ", n, (float)i, resultado);
        }
    }
}

void divide(float n)
{
    if (n == 0)
    {
        float valor1, valor2, result;
        printf("\nDigite o 1 valor: ");
        scanf("%f", &valor1);
        printf("Digite o 2 valor: ");
        scanf("%f", &valor2);
        result = valor1 / valor2;
        printf("\nResultado: %.2f\n\n ", result);
        system("pause");
        system("cls");
        menu();
    }
    else
    {
        for (int i = 1; i <= 10; i++)
        {
            float resultado = n / i;
            printf("\t%.2f / %.2f = %.2f\n ", n, (float)i, resultado);
        }
    }
}

void multiplica(float n)
{
    if (n == 0)
    {
        float valor1, valor2, result;
        printf("\nDigite o 1 valor: ");
        scanf("%f", &valor1);
        printf("Digite o 2 valor: ");
        scanf("%f", &valor2);
        result = valor1 * valor2;
        printf("\nResultado: %.2f\n\n ", result);
        system("pause");
        system("cls");
        menu();
    }
    else
    {
        for (int i = 1; i <= 10; i++)
        {
            float resultado = n * i;
            printf("\t%.2f x %.2f = %.2f\n ", n, (float)i, resultado);
        }
    }
}

void fatorial()
{
    int valor, resultado = 1;
    printf("\nDigite o valor que deseja saber o fatorial: ");
    scanf("%d", &valor);
    for (int i = valor; i > 0; i--)
    {
        resultado = resultado * i;
    }
    printf("\nResultado: %d\n\n ", resultado);
    system("pause");
    system("cls");
    menu();
}

void exponencial(float n)
{
    float resultado = 1;
    if (n == 0)
    {
        int base, expoente;
        printf("\nDigite a base: ");
        scanf("%d", &base);
        printf("\nDigite o expoente: ");
        scanf("%d", &expoente);
        if (expoente >= 0)
        {
            for (int i = 1; i <= expoente; i++)
            {
                resultado = resultado * base;
            }
        }
        printf("\nResultado: %.2f\n\n ", resultado);
        system("pause");
        system("cls");
        menu();
    }
    else
    {
        printf("\t%.2f ^ 0 = %f\n", n, resultado);
        for (int i = 1; i <= 10; i++)
        {
            resultado = resultado * n;
            printf("\t%.2f ^ %d = %f\n", n, i, resultado);
        }
    }
}

void tabuada(float n)
{
    printf("\nDigite qual o numero no qual deseja saber a tabuada: ");
    scanf("%f", &n);
    printf("\n=~=~=~=~=~=~=~=~==~=~=~=~=~=~=~=~=\n");

    printf("\n\tSoma para %.2f\n\n", n);
    soma(n);
    printf("\n=~=~=~=~=~=~=~=~==~=~=~=~=~=~=~=~=\n");

    printf("\n\tSubtracao para %.2f\n\n", n);
    subtrai(n);
    printf("\n=~=~=~=~=~=~=~=~==~=~=~=~=~=~=~=~=\n");

    printf("\n\tDivisao para %.2f\n\n", n);
    divide(n);
    printf("\n=~=~=~=~=~=~=~=~==~=~=~=~=~=~=~=~=\n");

    printf("\n\tMultiplicacao para %.2f\n\n", n);
    multiplica(n);
    printf("\n=~=~=~=~=~=~=~=~==~=~=~=~=~=~=~=~=\n");

    printf("\n\tExponenciacao para %.2f\n\n", n);
    exponencial(n);
    printf("\n=~=~=~=~=~=~=~=~==~=~=~=~=~=~=~=~=\n");

    system("pause");
    menu();
}