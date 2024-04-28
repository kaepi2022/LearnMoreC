#include <stdio.h> 
#include <string.h>

int main(void){

    int ver;

    ver = 1;

//文字列変数宣言
    char UserID[50];
    char Password[20];
    char Order[5];

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
            goto login_is_sucsess;
        }
        else if (strcmp(Password,"HelloPass1234@@") != 0){
            goto login_is_Faild;
        }
    } //GoodManさん
    else {
        printf("指定されたユ-ザ-IDまたはメ-ルアドレスは存在しません。\n");
        return 1;
    }

//ここはログイン系
login_is_sucsess:
    printf(":) ログインは成功しました。\n");
    goto Menu;

login_is_Faild:
    printf(":( ログインに失敗しました。\n");
    return 1;

//ここから先はプログラムと機能
Menu:
    printf("\nユ-ズフルGPT  Ver.%d\n",ver);
    printf("%sさんようこそ！\nお手伝いできることはありませんか?\n\n\n",UserID);
    printf("手伝えることの一覧です。\nM1 : 計算をします。\nM2 : 文字倍増\nM3 : 利用規約およびプライバシ-ポリシ-\nM4 : ログアウトして終了\n\nこの中のM～を入力してEnterしてください。>>：");
    scanf("%s",&Order);
    
    if (strcmp(Order,"M1") == 0 || strcmp(Order,"m1") == 0){
        goto mahter;
    }

    if (strcmp(Order,"M2") == 0 || strcmp(Order,"m2") == 0){
        goto baizou;
    }

    if (strcmp(Order,"M3") == 0 || strcmp(Order,"m3") == 0){
        goto kiyaku;
    }

    if (strcmp(Order,"M4") == 0 || strcmp(Order,"m4") == 0){
        goto exit;
    }

exit:
    printf("ログアウトしています。\nログアウトに成功しました。\n");
    return 1;


    return 0;

}
