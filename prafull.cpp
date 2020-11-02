#include<stdio.h>
int main()
{
    int a=2,k=0 ;
    while(a<=100)
    {
        for(int i=2;i<a;i++)
        {
            k=a%i;

            if(k==0)
            {
                printf("\n No is Not Prime :%d ",a);
                break;
                
            }
        } a++;

    }
    return 0;

}