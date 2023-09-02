#include<stdio.h>
int main()
{   
    int i,j;
        
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {

                if((j==1&&i!=1&&i!=4&&i!=5)||(j==2&&i!=2&&i!=5&&i!=3)||(j==3&&i!=1&&i!=5)||(j==4&&i!=1&&i!=2&&i!=3&&i!=4))                
                printf("*");

                else

                printf(" ");

            }

            printf("\n");
        }


    return 0;
}