#include <stdio.h>
#include <stdlib.h>

int main(){
    while(1){ int x, a, b, c ;

        system("clear -x||cls");

        void tela(){
            printf("calculadora\n\n1 -> calcular\n2 -> subtrair\n3 -> multiplicar\n4 -> dividir\n\n0 -> sair\n\ndigite uma opção: ");
            scanf("%d", &x);
        };

        void operacoes(){
            system("clear -x||cls");
            printf("digite um numero: "); scanf("%d", &a);
            printf("digite outro numero: "); scanf("%d", &b);
        };

        tela();

        //if ( x == 1 ) {operacoes(); printf("%d", a+b, "\n"); }
        //if ( x == 2 ) {operacoes(); printf("%d", a-b, "\n"); }
        //if ( x == 3 ) {operacoes(); printf("%d", a*b, "\n"); }
        //if ( x == 4 ) {operacoes(); printf("%d", a/b, "\n"); }
        //else { printf("opção invalida"); }

        switch(x){
            case 1 : operacoes(); printf("\nresultado %d", a+b); break;
            case 2 : operacoes(); printf("\nresultado %d", a-b); break;
            case 3 : operacoes(); printf("\nresultado %d", a*b); break;
            case 4 : operacoes(); printf("\nresultado %d", a/b); break;
            case 0 : system("clear -x||cls"); return 0 ; break;
            default : printf("\nopção inválida"); break;
        }

        printf("\n"); system("read -p '\npressione enter para continuar...' OP"); system("clear -x||cls");

    } return 0;
}
