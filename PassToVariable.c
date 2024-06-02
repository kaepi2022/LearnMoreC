#include <stdio.h>
#include <string.h>
int paass(int max , int min){
    printf("%dと%dが渡された",max,min);
    return 0;
}
int main(void){
    
    int data1,data2;

    printf("渡したいデ-タを2個入力してください：>>>");
    scanf("%d",&data1);
    scanf("%d",&data2);
    
    passs(data1,data2);
}