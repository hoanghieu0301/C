#include<stdio.h>
#include<conio.h>

int main(){
    int i, j, n;
    printf("Nhap vao so phan tu mang: ");
	scanf("%d", &n);
	int mang[n];
    for ( i = 0; i < n; i++)
	{
		printf("Nhap vao vi tri %d: ", i);
		scanf("%d", &mang[i]);
	}
    //output
    for ( i = 0; i < n; i++)
    {
        printf("\nGia tri cua phan tu %d: %d", (i + 1), mang[i]);
    }
    printf("\n----------------------------------");

    //sort
    for ( i = 0; i < n - 1; i++)
    {
        for ( j = i + 1; j < n; j++)
        {
            if (mang[i] < mang[j])
            {
                int temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;
            }
            
        }
        
    }
    
    for ( i = 0; i < n; i++)
    {
        printf("\nGia tri cua phan tu %d: %d", (i + 1), mang[i]);
    }
    _getch();
    return 0;
}
