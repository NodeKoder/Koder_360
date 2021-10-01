#include<stdio.h>
void add(int a,int b);
/*void sub(int a,int b);
void mult(int a,int b);
void div(int a,int b);*/
int main(){
    int ch,a,b;
    while(1){
        printf("------------CALCULATOR-------------");
        printf("\n1: ADD\n2: SUB\n3: MULT\n4: DIV\n5:EXIT\n");
        printf("\tEnter Your Choise: ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                printf("Enter two numbers: ");
                scanf("%d%d",&a,&b);
                printf("The result is=%d"add(a,b));
                break;
           /* case 2:
                printf("Enter two numbers: ");
                scanf("%d%d",&a,&b);
                printf("The result is=%d"sub(a,b));
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%d%d",&a,&b);
                printf("The result is=%d"mult(a,b));
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%d%d",&a,&b);
                printf("The result is=%d"div(a,b));
                break;*/
            case 5:
                exit(0);
                break;
            default:
                printf("Wrong Choise>>");
                break;
        }
    }
    return 0;
}



void add(int a,int b){
    a+b;
    return;
}