#include <stdio.h>

int main()
{
    int r,c;
    int rr,cc;
    
    scanf("%d %d\n",&r,&c);
    scanf("%d %d",&rr,&cc);
    
    int a=(r-rr)*(c-cc);
    printf("%d",a);

    return 0;
}
