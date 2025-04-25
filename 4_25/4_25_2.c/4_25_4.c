#include <stdio.h>

int main() {
    int num;
    // 奇数か偶数かを判定
    scanf("%d",&num);
    if ( num%2 == 0 ){
    //偶数なら偶数と出力
    printf("偶数です\n");
    }
    else{
        //奇数なら奇数と出力
        printf("奇数です\n");
    }
    return 0;
}