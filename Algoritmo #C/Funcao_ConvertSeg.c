#include <stdio.h>

int converte_seg(int hora, int min, int seg);

int main(){
    int hora, min, seg;
    printf("Entre com a hora:\n");
    scanf("%d", &hora);
    printf("Entre com os minutos:\n");
    scanf("%d", &min);
    printf("Entre com os segundos:\n");
    scanf("%d", &seg);
    
    int total_seg = converte_seg(hora, min, seg);
    printf("O total de segundos inserido: %d\n", total_seg);
    return 0;
}

int converte_seg(int hora, int min, int seg){
    int total_seg = (hora * 3600) + (min * 60) + seg;
    return total_seg;
}