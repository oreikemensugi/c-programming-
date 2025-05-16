//長方形の面積を求める関数
#include<stdio.h>
float chouhoukei(float T,float Y);
int main(void){
    float menseki = chouhoukei(5.0,3.0);
   printf ("%f\n",menseki);

return 0;
}
float chouhoukei( float T,float Y){
    float menseki;
    menseki=T*Y;

    return menseki;
}


