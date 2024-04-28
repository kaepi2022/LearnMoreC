#include <stdio.h>
#include <string.h>

int main(void){

//文字列変数宣言
    char UserID[50];
    char Password[20];

//ログイン入力を表示
    printf("ようこそ\nユ-ザ-IDまたはメ-ルアドレスを使用>>：");
    scanf("%s",&UserID);

//GoodManさん
    if (strcmp(UserID,"GoodMan") == 0 || strcmp(UserID,"GoodManOresanjyo@gmail.com") == 0) {

        if (strcmp(UserID,"GoodManOresanjyo@gmail.com") == 0){
            strcpy(UserID,"GoodMan"); //メ-ルアドレスを正式なユ-ザ-IDに変換

        }
        printf("ようこそ%sさん\nパスワ-ド>>：",UserID);
        scanf("%s",&Password);

        if (strcmp(Password,"HelloPass1234@@") == 0){
            printf("ログインに成功しました\nプログラムを終了します。\n");
            return 1;
        }
        else if (strcmp(Password,"HelloPass1234@@") != 0){
            printf("パスワ-ドが間違っているのでログインできませんでした。\n");
            return 1;
        }
    }
//Adminさん
    if (strcmp(UserID,"Admin") == 0 || strcmp(UserID,"AdministerinMineServer@gmail.com") == 0) {

        if (strcmp(UserID,"AdministerinMineServer@gmail.com") == 0){
            strcpy(UserID,"Admin"); //メ-ルアドレスを正式なユ-ザ-IDに変換

        }
        printf("ようこそ%sさん\nパスワ-ド>>：",UserID);
        scanf("%s",&Password);

        if (strcmp(Password,"Administer") == 0){
            printf("ログインに成功しました\nプログラムを終了します。\n");
            printf("サ-バ-の乗っ取り対策のため事件が起きた場合は追跡させていただきます\n");

            return 1;
        }

        else if (strcmp(Password,"Administer") != 0){
            printf("パスワ-ドが間違っているのでログインできませんでした。\n");
            return 1;
        }
    } 
    else {
        printf("指定されたユ-ザ-IDまたはメ-ルアドレスは存在しません。\n");
        return 1;

    }

    return 0;

}
