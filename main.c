#include <stdio.h>
int main(){
    printf("hola");
    char name[50];
    char apellido1[20];
    char apellido2[20];
    int age;
    float credit1;
    float credit2;
    float credit3;


    float costem1 = credit1*15.45;
    float costem2 = (credit2);
    float costem3 = (credit2);

    printf("Introduzca su nombre utilizando hasta 50 carácteres\n");
    fgets(&name,sizeof name,stdin);
    printf("Introduzca sus apellidos utilizando hasta 20 carácteres por apellido\n");
    scanf("%s%s",&apellido1,&apellido2);
    printf("Introduzca su edad\n");
    scanf("%d",&age);
    printf("Introduzca sus créditos en la matrícula\n");
    scanf("%f%f%f",&credit1,&credit2,&credit3);