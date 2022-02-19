#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);

    int i =0;

    while(i<a){
        long n;
        int counter=0;
        scanf("%ld",&n);

        long list[4];

        for(int j=0;j<4;j++){
            scanf("%ld",&list[j]);
        }

        long c[5]={0,0,0,0,0};
        c[0]=n;

        while(c[0]>0 || c[1]>0 || c[2]>0 || c[3]>0){
            for(int j=3;j>=0;j--){
                if(c[j]>0){
                    if(list[j]>=c[j]){
                        c[j+1]+=c[j];
                        c[j]=0;
                    }
                    else {
                        c[j+1]+=list[j];
                        c[j]-=list[j];
                    }
                }
            }
            counter++;
        }
        
        printf("%d\n",counter);
        i++;
    }


    return 0;
}
