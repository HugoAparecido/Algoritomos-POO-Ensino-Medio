#include <stdio.h>
void main()
{
    float nota1, nota2, media, i = 0;
    while (i < 30)
    {

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a primeira nota: ");
        scanf("%f", &nota2);
        media = (nota1 + nota2) / 2;
        if (media >= 6)
        {
            printf("Aluno aprovado\n");
        }
        else
        {
            printf("Aluno Reprovado\n");
        }
        i++;
    }
}