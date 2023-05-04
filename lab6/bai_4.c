#include<stdio.h>
#include<conio.h>

int main(){
    int m,n,i,j;
    printf("Nhap so hang: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);
    int mang[n][m];
//inputarr
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            printf("Nhap du lieu cho hang %d cot %d: ", (i+1),(j+1));
            scanf("%d", &mang[i][j]);
        }
        
    }
//output
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            printf("%d\t", mang[i][j]*mang[i][j]);
        }
        printf("\n");
    }
    

    _getch();
    return 0;
}
