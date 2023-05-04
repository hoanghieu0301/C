#include<stdio.h>
#include<conio.h>
struct SinhVien
{
	char mssv[20];
	char tenSV[20];
	char nganhHoc[50];
	float diemTB;
};

int main()
{
	int i,n;
	printf("Nhap so sinh vien muon them: ");
	scanf("%d", &n);
	struct SinhVien nhomSV[n];
	//input
	for ( i = 0; i < n; i++)
	{
		printf("Nhap ma so sinh vien: ");
		fflush(stdin);
		gets(nhomSV[i].mssv);
		printf("Nhap ten sinh vien: ");
		fflush(stdin);
		gets(nhomSV[i].tenSV);
		printf("Nhap nganh hoc: ");
		fflush(stdin);
		gets(nhomSV[i].nganhHoc);
		printf("Nhap diem trung binh: ");
		scanf("%f", &nhomSV[i].diemTB);
		
	}

	for ( i = 0; i < n; i++)
	{
		printf("\nTHONG TIN SINH VIEN %d", i+1);
		printf("\nMa so sinh vien: %s", nhomSV[i].mssv);
		printf("\nTen sinh vien: %s", nhomSV[i].tenSV);
		printf("\nNganh hoc: %s", nhomSV[i].nganhHoc);
		printf("\nDiem trung binh: %.2f", nhomSV[i].diemTB);
	}
	
	
	_getch();
	return 0;
}
