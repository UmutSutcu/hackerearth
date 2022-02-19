#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);

    int i =0;

    while(i<a){
        int n;
        int counter=0;
        scanf("%d",&n);

        int list[4];

        for(int j=0;j<4;j++){
            scanf("%d",&list[j]);
        }

        int c[4]={n,0,0,0};

        for(int j=0;j<4;j++){
            while(c[j]>0){
                if(list[j]>=c[j]){
                    counter++;
                    c[j+1]=c[j];
                    c[j]=0;
                }
                else {
                    counter++;
                    c[j+1]=list[j];
                    c[j]=n-list[j];
                }
            }
        }
        printf("%d\n",counter);

        i++;
    }


    return 0;
}
