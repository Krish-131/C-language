#include<stdio.h>
int main()
{
    int a,m,p,c,total;
    float per;

    printf("enter maths marks:");
    scanf("%d",&m);

    printf("enter physics marks:");
    scanf("%d",&p);
    
    printf("enter chemistry marks:");
    scanf("%d",&c);

    total=m+c+p;
    printf("total=%d",total);

    per=(total*100)/300;
    printf("per=%f",per);

    a=(int) per/10;
    
    if(m<0||m>100||c<0||c>100||p<0||p>100)
    {
        printf("enter valid value");
    }
    else
    {
        switch (a)
        {
        case 10:
        case 9:
        case 8:
            printf("Distinction");
            break;
            
        case 7:
        case 6:
            printf("First class");
            break;
            
        case 5:
        case 4:
            printf("Second class");
            break;
        
        default:
            printf("Fail");
            break;
        }
    }
    return 0;

}
    
