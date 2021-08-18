#include <stdio.h>
#include <stdlib.h>

// Declaração das funções
float soma(float v1, float v2, float valorTabuada);
float subtrai(float v1, float v2, float valorTabuada);
float divide(float v1, float v2, float valorTabuada);
float multiplica(float v1, float v2, float valorTabuada);
float fatorial(float valor);
float exponencial(float v1, float v2, float valorTabuada);
void tabuada(float valorTabuada);
void callback();
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
    float valor1, valor2;

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

    if (escolha == 6) // Caso seja exponencial
    {
        printf("\nValores da operacao:\n");
        printf("\tBase: ");
        scanf("%f", &valor1);
        printf("\tExpoente:");
        scanf("%f", &valor2);
    }
    else if (escolha == 5) // caso seja o fatorial
    {
        printf("\nDigite o valor que deseja saber o fatorial: ");
        scanf("%f", &valor1);
    }
    else if (escolha < 7) // Exclui os casos de Tabuada e sair do programa
    {
        printf("\nValores da operacao:\n");
        printf("\tPrimeiro: ");
        scanf("%f", &valor1);
        printf("\tSegundo:");
        scanf("%f", &valor2);
    }

    float valorTabuada = 0;

    switch (escolha)
    {
    case 1:
        printf("\t%.2f + %.2f = %.2f\n", valor1, valor2, soma(valor1, valor2, valorTabuada));
        callback();
        break;

    case 2:
        printf("\t%.2f - %.2f = %.2f\n", valor1, valor2, subtrai(valor1, valor2, valorTabuada));
        callback();
        break;

    case 3:
        printf("\t%.2f / %.2f = %.2f\n", valor1, valor2, divide(valor1, valor2, valorTabuada));
        callback();
        break;

    case 4:
        printf("\t%.2f x %.2f = %.2f\n", valor1, valor2, multiplica(valor1, valor2, valorTabuada));
        callback();
        break;

    case 5:
        printf("Fatorial de %.2f = %.2f\n", valor1, fatorial(valor1));
        callback();
        break;

    case 6:
        printf("\t%.2f ^ %.2f = %.2f\n", valor1, valor2, exponencial(valor1, valor2, valorTabuada));
        callback();
        break;

    case 7:
        tabuada(valorTabuada);
        callback();
        break;

    case 8:
        system("exit");
        printf("\nFinalizando...\n\n");
        break;

    default:
        printf("\nComando invalido, tente novamente!\n\n");
        callback();
        break;
    }
}

void callback()
{
    system("pause");
    system("cls");
    menu();
}

float soma(float v1, float v2, float n)
{
    if (n == 0)
    {
        return v1 + v2;
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

float subtrai(float v1, float v2, float n)
{
    if (n == 0)
    {
        return v1 - v2;
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

float divide(float v1, float v2, float n)
{
    if (n == 0)
    {
        return v1 / v2;
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

float multiplica(float v1, float v2, float n)
{
    if (n == 0)
    {
        return v1 * v2;
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

float fatorial(float valor)
{
    int resultado = 1;
    for (int i = valor; i > 0; i--)
    {
        resultado = resultado * i;
    }
    return resultado;
}

float exponencial(float base, float expoente, float n)
{
    float resultado = 1;
    if (n == 0)
    {
        if (expoente >= 0)
        {
            for (int i = 1; i <= expoente; i++)
            {
                resultado = resultado * base;
            }
        }
        return resultado;
    }
    else
    {
        printf("\t%.2f ^ 0 = %.2f\n", n, resultado);
        for (int i = 1; i <= 10; i++)
        {
            resultado = resultado * n;
            printf("\t%.2f ^ %d = %.2f\n", n, i, resultado);
        }
    }
}

void tabuada(float n)
{
    printf("\nDigite qual o numero no qual deseja saber a tabuada: ");
    scanf("%f", &n);
    printf("\n=~=~=~=~=~=~=~=~==~=~=~=~=~=~=~=~=\n");

    printf("\n\tSoma para %.2f\n\n", n);
    soma(0, 0, n);
    printf("\n=~=~=~=~=~=~=~=~==~=~=~=~=~=~=~=~=\n");

    printf("\n\tSubtracao para %.2f\n\n", n);
    subtrai(0, 0, n);
    printf("\n=~=~=~=~=~=~=~=~==~=~=~=~=~=~=~=~=\n");

    printf("\n\tDivisao para %.2f\n\n", n);
    divide(0, 0, n);
    printf("\n=~=~=~=~=~=~=~=~==~=~=~=~=~=~=~=~=\n");

    printf("\n\tMultiplicacao para %.2f\n\n", n);
    multiplica(0, 0, n);
    printf("\n=~=~=~=~=~=~=~=~==~=~=~=~=~=~=~=~=\n");

    printf("\n\tExponenciacao para %.2f\n\n", n);
    exponencial(0, 0, n);
    printf("\n=~=~=~=~=~=~=~=~==~=~=~=~=~=~=~=~=\n");

    system("pause");
    menu();
}