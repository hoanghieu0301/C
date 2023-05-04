#include<stdio.h>
#include<conio.h>

int main(){
	int i, n;
	float tong, trungBinh;
	int count = 0;

	printf("Nhap so phan tu mang: ");
	scanf("%d", &n);
	int mang[n];
	for ( i = 0; i < n; i++)
	{
		printf("Nhap gia tri cho phan tu thu %d: ", i + 1);
		scanf("%d", &mang[i]);
	}
	
	for ( i = 0; i < n; i++)
	{
		printf("\nGia tri cua phan tu thu %d la: %d", (i + 1), mang[i]);
	}
	
	for ( i = 0; i < n; i++)
	{
		if (mang[i] % 3 == 0)
		{
			tong += mang[i];
			count++;
		}
		
	}
	
	trungBinh = tong / count;
	printf("\nTrung binh tong cac so chia het cho 3 la: %.2f", trungBinh);
	_getch();
	return 0;
}
