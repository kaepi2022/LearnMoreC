#include <stdio.h>
#include <string.h>

int main(void){
    int givemoney,money,mokumoney,mounth;

    printf("目標額を入力してください：>>");
    scanf("%d",&mokumoney);

    printf("一カ月にもらえるお金の数を入力してください：>>");
    scanf("%d",&givemoney);

    mounth = 0;
    money = 0;

    while (money < mokumoney){
        money += givemoney;
        mounth += 1;
    }

    printf("%dカ月後に%d円になります。\n" ,mounth,mokumoney);

    return 0;

}