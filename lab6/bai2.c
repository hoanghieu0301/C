#include<stdio.h>
#include<conio.h>

int main(){
    int i,n;
    printf("Nhap vao so phan tu mang: ");
	scanf("%d", &n);
	int mang[n];
    for ( i = 0; i < n; i++)
    {
        printf("Nhap gia tri cho phan tu thu %d: ", (i + 1));
        scanf("%d", &mang[i]);
    }

    int min = mang[0], max = mang[0];
    for ( i = 0; i < n; i++)
    {
        if (mang[i] > max)
        {
            max = mang[i];
        }
        if (mang[i] < min)
        {
            min = mang[i];
        }
        
    }
    
    printf("Max la: %d", max);
    printf("\nMin la: %d", min);

	_getch();
	return 0;
}
