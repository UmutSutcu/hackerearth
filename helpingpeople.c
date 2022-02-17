#include <stdio.h>

int chartoint(char c){


    return c-'0';
}

int main()
{
    char list[9];
    char letter[6]={'A','E','I','O','U','Y'};

    int a=1;

    scanf("%s",list);

    int num1= chartoint(list[0]);
    int num2= chartoint(list[1]);

    if((num1+num2)%2!=0){
        a=-1;
    }
    printf("%d\n",a);
    for(int i=0;i<6;i++){
        if(list[2]==letter[i]){
            a=-1;
        }
    }
    printf("%d\n",a);
    num1= chartoint(list[3]);
    num2= chartoint(list[4]);

    if((num1+num2)%2!=0){
        a=-1;
    }
    printf("%d\n",a);
    num1= chartoint(list[7]);
    num2= chartoint(list[8]);

    if((num1+num2)%2!=0){
        a=-1;
    }
    printf("%d\n",a);

    if(a==1){
        printf("valid");
    }
    else{
        printf("invalid");
    }

    return 0;
}
