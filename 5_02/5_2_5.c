#include <stdio.h>

int main() {
    int score;
    printf("点数を入力してください。\n");
    scanf("%d",&score);
    // 点score が80以上なら「合格」と表示
    if(score>=80){
        printf("合格です。\n");
    }
    else{
        printf("不合格です。\n");
    }
    return 0;
}