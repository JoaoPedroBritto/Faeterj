#include<stdio.h>
void diaAnterior(int *dia, int *mes, int *ano){
    if (*dia > 1){
        *dia = *dia - 1;
    }    
    else{           //vou considerar que todos os meses tem 31 dias
        *dia = 31;
        if (*mes > 1){
            *mes = *mes - 1;
        }
        else{
            *mes = 12;
            *ano = *ano -1;
        }
    }
    printf("Prioridade da tarefa Alta!!!\n--> Nova Data definida: %d / %d / %d.\n",*dia,*mes,*ano);
}
int validarPrioridade(int prioridade){
    if (prioridade == 0){
        return prioridade;
    }
    while ((prioridade > 2) || (prioridade < 1)){
        printf("\nPrioridade da tarefa invalida, selecione:\n-->Normal[1]. \n-->Alta[2].\n");
        scanf("%d", &prioridade);
    }    
    return prioridade;    
}
int main(){
    int dia,mes,ano,prioridade;
    int totTarefas = 0 ;
    int totTarefasAlteradas = 0;
    float percentualTarefasAlteradas = 0;
    
    printf("digite a prioridade da tarefa:\n-->Finalizar[0]. \n-->Normal[1]. \n-->Alta[2].\n");
    scanf("%d", &prioridade);
    validarPrioridade(prioridade);   
    
    while (prioridade != 0){
        totTarefas += 1;

        printf("Informe.\n--> Dia: ");
        scanf("%d",&dia);
        printf("Informe.\n--> Mes: ");
        scanf("%d",&mes);
        printf("Informe.\n--> Ano: ");
        scanf("%d",&ano);

        if (prioridade == 2){
            totTarefasAlteradas += 1;
            diaAnterior(&dia,&mes,&ano); 
        }
        else{
            printf("Prioridade da tarefa normal.\n--> Nenhuma alteracao foi feita.\n");
        }
        printf("digite a prioridade da tarefa:\n-->Finalizar[0]. \n-->Normal[1]. \n-->Alta[2].\n");
        scanf("%d", &prioridade);
        validarPrioridade(prioridade);
    }
    percentualTarefasAlteradas = ((float)totTarefasAlteradas/totTarefas)*100;
    
    printf("========== O percentual de tarefas alteradas foi de %2.f . ==========\n", percentualTarefasAlteradas);
}
