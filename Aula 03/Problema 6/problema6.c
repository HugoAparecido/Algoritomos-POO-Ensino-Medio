#include <stdio.h>
void main()
{
    float nota1, nota2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    if (nota1 > 10 || nota1 < 0 || nota2 > 10 || nota2 < 0)
    {
        printf("Valor(es) invalidos");
    }
    else
    {
        media = (nota1 + nota2) / 2;
        if (media >= 6)
        {
            printf("Aluno aprovado");
        }
        else
        {
            printf("Aluno Reprovado");
        }
    }
}