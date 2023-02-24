// Como juntar dois vetores

#include <stdio.h>

int main()
{
    int seq1[7] = {1, 1, 2, 3, 4, 8, 9};
    int seq2[5] = {1, 3, 5, 7, 10};
    int seq3[12];
    int tam1 = 7, tam2 = 5, tam3 = 12;
    int i = 0, j = 0, k = 0,found;
    int rept;

     for(k = 0; k < tam3; k++){
        if(i < tam1 && seq1[i] < seq2[j] || j >= tam2){
            seq3[k] = seq1[i];
            i++;
        }
        else{
            seq3[k] = seq2[j];
            j++;
        } 
        printf("%d, ", seq3[k]);
    }

    return 0;
}