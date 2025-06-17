#include<stdio.h>
void lerInteiroValido(char *mensagem, int minimo, int maximo){
    int valor;
    printf("%s", mensagem);
    printf("Digite um valor entre %d e %d (incluso) : \n");
    scanf("%d", & valor);
    while(valor < minimo || valor > maximo){
        printf("Valor Invalido! Digite um valor entre %d e %d (incluso): \n", minimo, maximo);
        scanf("%d", & valor);
    }
    return valor;
}

int main()
{
    int numPessoa,idade,genero,fPlataforma,livrosMes,qtdPessoaLe10plus,somaIdade;
    int i = 1;
    int qtdPessoasNFPlataforma50plus;
    float mediaIdade, percentNFPlataforma50plus;

    printf("Numero de pessoas intrevistadas : \n");
    scanf("%d", & numPessoa);

    while ((numPessoa+1) > i)
    {
        printf("==========%d ENTREVISTADO==========\n", i);
        printf("Idade :\n");
        scanf("%d", & idade);
        printf("genero :\n1-Masculino. \n2-Feminino. \n3-Outro.\n");
        scanf("%d", & genero);
        printf("Frequenta plataforma de leitura :\n1-Sim. \n2-Nao. \n");
        scanf("%d", & fPlataforma);

        if (fPlataforma == 1)
        {
            printf("Media de livros lidos por mes(Valores validos; 1 - 45) : \n");
            scanf("%d", & livrosMes);
            if (livrosMes > 10){
                qtdPessoaLe10plus += 1;
            }
        }
        else if (idade > 50){
            qtdPessoasNFPlataforma50plus += 1;
        }
        somaIdade += idade;
        mediaIdade = somaIdade / numPessoa;
        percentNFPlataforma50plus = 100*(qtdPessoaLe10plus / numPessoa);

        idade = 0;
        i += 1;
    }
    
    printf("==================================\n");
    printf("Media de idade dos usuarios : %.2f",mediaIdade);
    printf("Quantidade de pessoas que lem mais de 10 livros mes : %d", qtdPessoaLe10plus);
    printf("Entrevistados que nao usam plataforma e tem mais 50 anos : %d", qtdPessoasNFPlataforma50plus);
    return 0;
}