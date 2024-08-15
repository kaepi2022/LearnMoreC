#include <stdio.h>
#include <string.h>

int USB(int _FC,int _FS);
int LSB(int _FC,int _FS);

int main(void){

    int _FC = 0;
    int _FS = 0;
    int _MODE = 0;
    int _LOOP = 0;

    printf("DSBのfcとfsを入力してください\n>>$ ");
    scanf("%d%d",&_FC,&_FS); //fcとfsを入力

    while(_LOOP == 0){ 
        printf("DSB波の側波帯を求めます。\n番号を入力してください。\nUSB = 1\nLSB = 2\nを入力して下さい\n>>$ ");
        scanf("%d",&_MODE);

        if (_MODE == 1){
            _LOOP = 1; //ループ終了
            USB(_FC,_FS);
        } else if (_MODE == 2){
            _LOOP = 1;
            LSB(_FC,_FS);
        } else {
            printf("指定されている番号を正しく入力してください。\n");
        }
    }

    return 0;

}
int USB(int _FC,int _FS){

    int ANS = 0;
    ANS = _FC + _FS;

    printf("上側波帯 = %dMHz\n",ANS);
    
    return 0;

}
int LSB(int _FC,int _FS){

    int ANS = 0;
    ANS = _FC - _FS;

    printf("下側波帯 = %dMHz\n",ANS);
    
    return 0;

}