#include <stdio.h> 

int main()
{
    int n,i;
    printf("Ban can in bang cuu chuong nao? ");
    scanf("%d",&n);
    printf("bang cuu chuong %d:\n",n);
  
    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}
