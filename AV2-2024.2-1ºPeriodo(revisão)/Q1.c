#include<stdio.h>

void atualizaMinMax(int n1, int n2, int n3, int *nMin, int *nMax){
    int vList[3] = {n1, n2, n3};
    *nMin = vList[0];
    *nMax = vList[0];
    
    for (int i = 1; i < 3; i++){
        if(vList[i]>*nMax){
            *nMax = vList[i];
        }
        if(vList[i]<*nMin){
            *nMin = vList[i];
        }
    }
}
int main(){
    int min = 0;
    int max = 0;

    atualizaMinMax(82,54,12,&min,&max);
    printf("min: %d \nmax: %d",min,max);

    return 0;
}
