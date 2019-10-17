// MARQUEZ
#include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 void imprimir_menu();
 void leer_opcion(int &opt);
 int leer_valor(){
     int temp;
     printf("introduce el valor:");
     scanf("%d",&temp);
     return temp;
 }
 int divicion(int x, int& y){
    while(y==0){
            y=leer_valor();
    }
    return x/y;
}

 int suma(int x, int y);
 int resta(int x, int y);
 int multiplicacion(int x, int y);
 int main(){
     int a,b,c;
     int opt;
 imprimir_menu();
 leer_opcion(opt);
 a=leer_valor();
 b=leer_valor();
 switch(opt){
 case 1:
    c=suma(a,b);
    break;
 case 2:
    c=resta(a,b);
    break;
 case 3:
    c=multiplicacion(a,b);
    break;
 case 4:
    c=divicion(a,b);
    break;
 default:
    printf("opcion invalida");
 }
 }
 void imprimir_menu(){
 printf("1. suma\n");
 printf("2. resta\n");
 printf("3. multiplicacion\n");
 printf("4. divicion\n");
 int opt;
 scanf("%d",&opt);
 int a;
 int b;
 int c;
 if(opt==1){
 c =a+b;
 }
 else{
 if(opt==2){
 c=a-b;
 }
 else{
 if(opt==3){
 c=a*b;
 }
 else{
 if(opt=4){
        c=a/b;
 }
 }
 }
 }
 printf("el resultado es %d",c);
 }
 void leer_opcion(int& opt){
 printf("introduce una opcion");
 scanf("%d",&opt);
 }
 int suma(int x, int y){
     return x+y;
 }
 int resta(int x, int y){
     return x-y;
 }
 int multiplicacion(int x, int y){
     return x*y;
 }