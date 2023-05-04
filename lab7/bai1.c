#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[20];
    printf("Nhap vao chuoi: ");
    gets(s);
    int i, na = 0, pa = 0;
    for (i = 0; i < strlen(s); i++)
    {
        char ch = tolower(s[i]);
        if (isalpha(ch))
        {
            if (ch == 'a' || ch == 'u' || ch == 'e' || ch == 'i' || ch == 'o')
            {
                na++;
            }
            else
            {
                pa++;
            }
        }
    }

    printf("Chuoi '%s' co chua %d nguyen am va %d phu am", s, na, pa);

    _getch();
    return 0;
}
