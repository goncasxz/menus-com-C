#include <stdio.h>
#include <stdlib.h>

void calcNotas(int valor);

int caixa()
{
    int valor = 0;
    printf("\nQual valor quer sacar?\n");
    scanf("%d", &valor);
    while (valor < 10 || valor > 600)
    {
        printf("\nValor invalido!\n");
        printf("\nQual valor quer sacar?\n");
        scanf("%d", &valor);
    }
    calcNotas(valor);
    return 0;
}

void calcNotas(int valor)
{
    int cem = (valor / 100);
    valor = valor % 100;
    int cinquenta = (valor / 50);
    valor = valor % 50;
    int dez = (valor / 10);
    valor = valor % 10;
    int cinco = (valor / 5);
    valor = valor % 5;
    int um = valor;
    if (cem > 0)
    {
        printf("\n%d nota(s) de 100", cem);
    }
    if (cinquenta > 0)
    {
        printf("\n%d nota(s) de 50", cinquenta);
    }
    if (dez > 0)
    {
        printf("\n%d nota(s) de 10", dez);
    }
    if (cinco > 0)
    {
        printf("\n%d nota(s) de 5", cinco);
    }
    if (um > 0)
    {
        printf("\n%d nota(s) de 1\n", um);
    }
}

void fibon()
{
    int a = 0;
    int b = 1;
    int c = 0;
    int i = 0;
    int termo = 0;
    printf("Digite ate o termo do fibonnaci: ");
    scanf("%d", &termo);
    printf("\n| %d | ", a);
    printf("%d | ", b);

    for (i = 2; i < termo; i++)
    {
        c = a + b;
        printf("%d | ", c);
        a = b;
        b = c;
    }
}

void fatorial()
{
    int num = 0;
    int i = 0;
    int fatorial = 1;
    printf("\nDigite um numero para calcular o fatorial: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fatorial = i * fatorial;
    }
    printf("O resultado e %d\n", fatorial);
}

void primo()
{
    int x = -1;
    int i = 0;
    int count = 0;
    while (x < 1)
    {
        printf("\nDigite o numero que deseja saber se e primo: ");
        scanf("%d", &x);
        if (x <= 0)
        {
            printf("Número inválido, tente novamente.\n");
            continue;
        }
        else
        {
            break;
        }
    }
    if (x < 2)
    {
        printf("%d não é um número primo\n", x);
        return;
    }

    for (i = 1; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            count++;
        }
    }
    count++;

    if (count == 2)
    {
        printf("PRIMO\n");
    }
    else
    {
        printf("NAO PRIMO\n");
    }
}

void listaPrimo()
{
    int n = 0;
    int i = 0;
    int count = 0;
    int j = 0;

    while (n < 1)
    {
        printf("\nDigite o numero que deseja saber a lista de primos: ");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("Número inválido, tente novamente.\n");
            continue;
        }
        else
        {
            break;
        }
    }
    if (n < 2)
    {
        printf("%d não tem um número primo\n", n);
        return;
    }

    for (i = 2; i <= n; i++)
    {
        count = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d\n", i);
        }
    }
}

void quadradoVetor()
{
    int i = 0;
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int somaTotal = 0;

    while (i <= 9)
    {
        printf("DIGITE O TERMO [%d] do vetor: ", i);
        scanf("%d", &vetor[i]);
        i++;
    }

    for (i = 0; i <= 9; i++)
    {
        somaTotal = somaTotal + (vetor[i] * vetor[i]);
    }
    printf("\nSOMA DO QUADRADO DO VETOR E %d", somaTotal);
}

void addVetor2()
{
    int i = 0;
    int vetorA[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetorB[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetorC[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    while (i <= 9)
    {
        printf("DIGITE O TERMO [%d] do vetor A: ", i);
        scanf("%d", &vetorA[i]);
        i++;
    }
    i = 0;
    while (i <= 9)
    {
        printf("DIGITE O TERMO [%d] do vetor B: ", i);
        scanf("%d", &vetorB[i]);
        i++;
    }
    i = 0;

    for (i = 0; i <= 9; i++)
    {
        vetorC[2 * i] = vetorA[i];
        vetorC[2 * i + 1] = vetorB[i];
    }

    for (i = 0; i <= 19; i++)
    {
        printf("\n%d", vetorC[i]);
    }
}

void addVetor3()
{
    int i = 0;
    int vetorA[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetorB[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetorC[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetorD[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    while (i <= 9)
    {
        printf("DIGITE O TERMO [%d] do vetor A: ", i);
        scanf("%d", &vetorA[i]);
        i++;
    }
    i = 0;
    while (i <= 9)
    {
        printf("DIGITE O TERMO [%d] do vetor B: ", i);
        scanf("%d", &vetorB[i]);
        i++;
    }
    i = 0;
    while (i <= 9)
    {
        printf("DIGITE O TERMO [%d] do vetor C: ", i);
        scanf("%d", &vetorC[i]);
        i++;
    }
    i = 0;

    for (i = 0; i <= 9; i++)
    {
        vetorD[3 * i] = vetorA[i];
        vetorD[3 * i + 1] = vetorB[i];
        vetorD[3 * i + 2] = vetorC[i];
    }

    for (i = 0; i <= 29; i++)
    {
        printf("\n%d", vetorD[i]);
    }
    printf("");
}

void verificaNum()
{
    int num = 0;
    int positivo = -1;

    printf("DIGITE UM NUMERO PARA VERIFICAR: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        positivo = 1;
    }
    else
    {
        positivo = 0;
    }

    if (positivo)
    {
        printf("O NUMERO %d E POSITIVO\n", num);
    }
    else
    {
        printf("O NUMERO %d E NEGATIVO\n", num);
    }
}

int somaVetor(int vetor[], int tamVetor)
{
    int i = 0;
    int soma = 0;
    for (i = 0; i < tamVetor; i++)
    {
        soma = vetor[i] + soma;
    }
    return soma;
}

void lerSomaVetor()
{
    int tam = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    int vetor[tam];
    int i = 0;
    for (i = 0; i <= tam - 1; i++)
    {
        printf("Digite o termo[%d] do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    int somador = somaVetor(vetor, tam);
    printf("\nA soma do vetor e %d\n", somador);
}

float mediaVetor(int vetor[], int tamVetor)
{
    int i = 0;
    float media = 0;
    float soma = 0;
    for (i = 0; i < tamVetor; i++)
    {
        soma = vetor[i] + soma;
    }
    media = soma / tamVetor;
    return media;
}

void lerMediaVetor()
{
    int tam = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    int vetor[tam];
    int i = 0;
    for (i = 0; i <= tam - 1; i++)
    {
        printf("Digite o termo[%d] do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    float mediador = mediaVetor(vetor, tam);
    printf("\nA media do vetor e %.2f\n", mediador);
}

void maiorMenorVetor(int vetor[], int tamVetor, int *min, int *max)
{
    int i = 0;
    *min = vetor[0];
    *max = vetor[0];
    for (i = 0; i < tamVetor; i++)
    {
        if (vetor[i] < *min)
        {
            *min = vetor[i];
        }
        if (vetor[i] > *max)
        {
            *max = vetor[i];
        }
    }
}

void lerMaiorMenorVetor()
{
    int min = 0;
    int max = 0;
    int i = 0;
    int tam = 8;
    int vetor[tam];
    for (i = 0; i <= 8 - 1; i++)
    {
        printf("Digite o termo[%d] do vetor: ", i);
        scanf("%d", &vetor[i]);
    }
    maiorMenorVetor(vetor, tam, &min, &max);
    printf("\nMAIOR VALOR: %d\n", max);
    printf("\nMENOR VALOR: %d\n", min);
}

int verificarVetor(int vetor[], int tamVetor, int valor)
{
    int i = 0;
    for (i = 0; i < tamVetor; i++)
    {
        if (vetor[i] == valor)
        {
            return 1;
        }
    }
    return 0;
}

void lerVerificadorVetor()
{
    int tam = 0;
    int valorBuscado = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    int vetor[tam];
    int i = 0;
    for (i = 0; i <= tam - 1; i++)
    {
        printf("Digite o termo[%d] do vetor: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("Digite o valor buscado dentro do vetor: ");
    scanf("%d", &valorBuscado);
    int isVetor = verificarVetor(vetor, tam, valorBuscado);
    if (isVetor)
    {
        printf("\nO numero %d esta no vetor\n", valorBuscado);
    }
    else
    {
        printf("\nO numero %d nao esta no vetor\n", valorBuscado);
    }
}

void inverteVetor(int vetorParam[], int tamVetor)
{
    int aux = 0;
    int i = 0;
    for (i = 0; i < tamVetor / 2; i++)
    {
        aux = vetorParam[i];
        vetorParam[i] = vetorParam[tamVetor - i - 1];
        vetorParam[tamVetor - i - 1] = aux;
    }
}

void lerVetorInvertido()
{
    int i = 0;
    int tam = 7;
    int vetor[tam];
    for (i = 0; i <= tam - 1; i++)
    {
        printf("\nDigite o termo[%d] do vetor: \n", i);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < tam; i++)
    {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    inverteVetor(vetor, tam);
    printf(" ");

    for (i = 0; i < tam; i++)
    {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
}

void concatenarVetor(int vetorA[], int vetorB[], int tamVetorA, int tamVetorB, int vetorC[], int tamVetorC)
{
    int i = 0;
    for (i = 0; i < tamVetorA; i++)
    {
        vetorC[i] = vetorA[i];
    }
    for (i = 0; i < tamVetorB; i++)
    {
        vetorC[i + tamVetorA] = vetorB[i];
    }
}

void lerConcatenaVetor()
{
    int tamVetorA = 0;
    int tamVetorB = 0;
    printf("Digite o tamanho do vetorA: ");
    scanf("%d", &tamVetorA);
    printf("Digite o tamanho do vetorB: ");
    scanf("%d", &tamVetorB);

    int tamVetorC = tamVetorA + tamVetorB;
    int vetorA[tamVetorA];
    int vetorB[tamVetorB];
    int vetorC[tamVetorC];

    int i = 0;
    for (i = 0; i < tamVetorA; i++)
    {
        printf("Digite o termo[%d] do vetorA: ", i);
        scanf("%d", &vetorA[i]);
    }
    for (i = 0; i < tamVetorB; i++)
    {
        printf("Digite o termo[%d] do vetorB: ", i);
        scanf("%d", &vetorB[i]);
    }

    concatenarVetor(vetorA, vetorB, tamVetorA, tamVetorB, vetorC, tamVetorC);

    for (i = 0; i <= tamVetorC - 1; i++)
    {
        printf("vetor[%d] = %d\n", i, vetorC[i]);
    }
}

void contaElementorVetor(int vetor[], int tamVetor, int *par, int *impar)
{
    int i = 0;
    for (i = 0; i < tamVetor; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            (*par)++;
        }
        else
        {
            (*impar)++;
        }
    }
}

void lerContaElemento()
{
    int par = 0;
    int impar = 0;
    int i = 0;
    int tam = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    int vetor[tam];
    for (i = 0; i < tam; i++)
    {
        printf("Digite o termo[%d] do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    contaElementorVetor(vetor, tam, &par, &impar);

    printf("O vetor tem %d elementos pares e %d elementos impares", par, impar);
}

int contagemPrimos(int vetor[], int tamVetor)
{
    int i, j = 0;
    int count = 0;
    int numPrimos = 0;
    for (i = 0; i < tamVetor; i++)
    {
        count = 0;
        for (j = 1; j <= vetor[i]; j++)
        {
            if (vetor[i] % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            numPrimos++;
        }
    }
    return numPrimos;
}

void primosVetor(int vetor[], int vetorB[], int tamVetor)
{
    int i, j = 0;
    int primos = 0;
    int count = 0;
    for (i = 0; i < tamVetor; i++)
    {
        count = 0;
        for (j = 1; j <= vetor[i]; j++)
        {
            if (vetor[i] % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            vetorB[primos] = vetor[i];
            primos++;
        }
    }
}

void lerPrimosVetor()
{
    int i = 0;
    int tam = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    int vetor[tam];
    for (i = 0; i < tam; i++)
    {
        printf("Digite o termo[%d] do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    int numPrimos = contagemPrimos(vetor, tam);

    int vetorB[numPrimos];

    primosVetor(vetor, vetorB, tam);

    printf("Numeros primos no vetor:\n");
    for (i = 0; i < numPrimos; i++)
    {
        printf("%d ", vetorB[i]);
    }
    printf("\n");
}

void calcEscalar(int vetor[], int vetorB[], int tamVetor, int escalar)
{
    int i = 0;
    for (i = 0; i < tamVetor; i++)
    {
        vetorB[i] = vetor[i] * escalar;
    }
}

void lerCalcEscalar()
{
    int i = 0;
    int tam = 0;
    int escalar = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    int vetor[tam];
    for (i = 0; i < tam; i++)
    {
        printf("Digite o termo[%d] do vetor: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("\nDigite o valor da escalar: \n");
    scanf("%d", &escalar);
    int vetorB[tam];

    calcEscalar(vetor, vetorB, tam, escalar);

    for (i = 0; i < tam; i++)
    {
        printf("\nVetorB[%d] = %d", i, vetorB[i]);
    }
}

void bubbleSort(int vetor[], int tamVetor)
{
    int i = 0;
    int j = 0;
    int aux = 0;

    for (i = 1; i <= tamVetor; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (vetor[j] > vetor[i])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

void lerBubbleSort()
{
    int i = 0;
    int tam = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int vetor[tam];
    for (i = 0; i <= tam - 1; i++)
    {
        printf("\nDigite o termo[%d] do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    bubbleSort(vetor, tam);

    for (i = 0; i < tam; i++)
    {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
}

int check()
{
    char sair;

    while (1)
    {
        printf("DESEJA SAIR? (S/N): ");
        scanf(" %c", &sair);

        if (sair == 'S' || sair == 's')
        {
            return 1;
        }
        else if (sair == 'N' || sair == 'n')
        {
            return 0;
        }
        else
        {
            printf("Opção inválida. Tente novamente.\n");
        }
    }
}

int main()
{
    int choice = 0;
    int exitFlag = 0;
    int exitFlag2 = 0;
    do
    {
        printf("\nQual menu gostaria de utilizar: ");
        printf("\n[1] Menu 1 - geral ");
        printf("\n[2] Menu 2 - Vetores");
        printf("\n[3] Sair");
        printf("\nDigite a opcao que deseja escolher (1 - 3): \n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            int user = 0;
            do
            {
                printf("\nBEM-VINDO AO MENU:");
                printf("\n[1] Caixa Eletronico");
                printf("\n[2] Fibonnaci");
                printf("\n[3] Fatorial");
                printf("\n[4] Primo?");
                printf("\n[5] Lista de Primos");
                printf("\n[6] Quadrado do Vetor");
                printf("\n[7] Adicionar 2 Vetores");
                printf("\n[8] Adicionar 3 Vetores");
                printf("\n[9] Verifica positivo e negativo");
                printf("\n[10] Sair");
                printf("\nDigite a opcao que deseja escolher (1-10): \n");
                scanf("%d", &user);

                switch (user)
                {
                case 1:
                    caixa();
                    exitFlag = check();
                    break;

                case 2:
                    fibon();
                    exitFlag = check();
                    break;

                case 3:
                    fatorial();
                    exitFlag = check();
                    break;

                case 4:
                    primo();
                    exitFlag = check();
                    break;

                case 5:
                    listaPrimo();
                    exitFlag = check();
                    break;

                case 6:
                    quadradoVetor();
                    exitFlag = check();
                    break;

                case 7:
                    addVetor2();
                    exitFlag = check();
                    break;

                case 8:
                    addVetor3();
                    exitFlag = check();
                    break;

                case 9:
                    verificaNum();
                    exitFlag = check();
                    break;

                case 10:
                    exitFlag = 1;
                    break;

                default:
                    printf("Opcao invalida");
                }

            } while (!exitFlag);
        }
        else if (choice == 2)
        {
            int exitFlag = 0;
            int user = 0;
            do
            {
                printf("\nBEM-VINDO AO MENU:");
                printf("\n[1] Soma de Elementos de um Vetor");
                printf("\n[2] Media de Numeros em um Vetor");
                printf("\n[3] Encontrar o Maior e o Menor Elemento");
                printf("\n[4] Verificar se um Numero Esta em um Vetor");
                printf("\n[5] Inverter um Vetor");
                printf("\n[6] Concatenar Dois Vetores");
                printf("\n[7] Contar Elementos Pares e Impares em um Vetor");
                printf("\n[8] Filtrar Numeros Primos de um Vetor");
                printf("\n[9] Multiplicar Vetor por Escalar");
                printf("\n[10] Ordenar um Vetor em Ordem Crescente");
                printf("\n[11] Sair");
                printf("\nDigite a opcao que deseja escolher (1-11): \n");
                scanf("%d", &user);

                switch (user)
                {
                case 1:
                    lerSomaVetor();
                    exitFlag = check();
                    break;

                case 2:
                    lerMediaVetor();
                    exitFlag = check();
                    break;

                case 3:
                    lerMaiorMenorVetor();
                    exitFlag = check();
                    break;

                case 4:
                    lerVerificadorVetor();
                    exitFlag = check();
                    break;

                case 5:
                    lerVetorInvertido();
                    exitFlag = check();
                    break;

                case 6:
                    lerConcatenaVetor();
                    exitFlag = check();
                    break;

                case 7:
                    lerContaElemento();
                    exitFlag = check();
                    break;

                case 8:
                    lerPrimosVetor();
                    exitFlag = check();
                    break;

                case 9:
                    lerCalcEscalar();
                    exitFlag = check();
                    break;

                case 10:
                    lerBubbleSort();
                    exitFlag = check();
                    break;

                case 11:
                    exitFlag = 1;
                    break;

                default:
                    printf("Opcao invalida");
                }

            } while (!exitFlag);
        }
        else if (choice == 3)
        {
            exitFlag2 = 1;
        }
        else
        {
            printf("\nOpcao invalida tente novamente\n");
            continue;
        }
    } while (!exitFlag2);
    printf("\nOBRIGADO POR UTILIZAR O MENU");
    return 0;
}
