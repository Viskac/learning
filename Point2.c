#include<stdio.h>
int main(){
    int z[5] = {3,5,7,9,0};
    int *p;
    p = &z[0];
    printf("z[0]: %d\n",*p);
    printf("z[1]: %d\n",*(p+1));
    printf("==========\n");
    for (int i = 0; i < 5; i++)
    {
        printf("z[%d]: %d\n",i,*(p+i));
    }
    printf("=============\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i+1; j++)
        {       
               printf("%c",61);
        }
        printf("\n");
    }


}