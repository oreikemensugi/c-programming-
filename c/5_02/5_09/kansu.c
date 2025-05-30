//c言語の関数について
//特定の処理をまとめたプログラム
#include<stdio.h>

int add(int a,int b);
int add5(int a);

int main(void){
    printf("%d\n",add(37,3));
}
//メイン関数はプログラム全体で最初に実行される関数
//私たちが作った関数は、すべてメイン関数で実行される。

int add(int a,int b){
    return a+b;
}

//関数はリターンをかく


int add5(int a){
    a=a+5;
    return a;
}
