#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
void east()
{
    for (int i = 1; i <= 8; i++)
        printf("         l       l\n");
    printf("         l  <--  l\n");
    printf("         l l l l l         \n");
    printf("----------       ----------\n");
    printf("        天       天\n");
    printf("        天       天  <--\n");
    printf("        天       天\n");
    printf("----------       ----------\n");
    printf("         l l l l l         \n");
    for (int i = 1; i <= 9; i++)
        printf("         l       l\n");
}
void west()
{
    for (int i = 1; i <= 9; i++)
        printf("         l       l\n");
    printf("         l l l l l         \n");
    printf("----------       ----------\n");
    printf("        天       天\n");
    printf("    --> 天       天\n");
    printf("        天       天\n");
    printf("----------       ----------\n");
    printf("         l l l l l         \n");
    printf("         l  -->  l\n");
    for (int i = 1; i <= 8; i++)
        printf("         l       l\n");
}
void south()
{
    for (int i = 1; i <= 9; i++)
        printf("         l       l\n");
    printf("         l l l l l         \n");
    printf("----------       ----------\n"); 
    printf("        天       天  ∥\n");
    for (int i = 1; i <= 2; i++)
        printf("        天       天  太\n");
    printf("----------       ----------\n");
    printf("         l l l l l         \n");
    for (int i = 1; i <= 2; i++)
        printf("         l       l\n");
    printf("         l  ∥   l\n");
    for (int i = 1; i <= 2; i++)
        printf("         l  太   l\n");
    for (int i = 1; i <= 4; i++)
        printf("         l       l\n");
}
void north()
{
    for (int i = 1; i <= 4; i++)
        printf("         l       l\n");
    for (int i = 1; i <= 2; i++)
        printf("         l   l   l\n");
    printf("         l   v   l\n");
    for (int i = 1; i <= 2; i++)
        printf("         l       l\n");
    printf("         l l l l l         \n");
    printf("----------       ----------\n");
    for (int i = 1; i <= 2; i++)
        printf("     l  天       天\n");
    printf("     v  天       天\n");
    printf("----------       ----------\n");
    printf("         l l l l l         \n");
    for (int i = 1; i <= 9; i++)
        printf("         l       l\n");
}
int main() 
{
    east();
    for (int j = 5; j >= 1; j--)
    {
        printf("%d", j);
        Sleep(1000);
        printf("\n");
    }
    west();
    for (int j = 5; j >= 1; j--)
    {
        printf("%d", j);
        Sleep(1000);
        printf("\n");
    }
    south();
    for (int j = 5; j >= 1; j--)
    {
        printf("%d", j);
        Sleep(1000);
        printf("\n");
    }
    north();
    for (int j = 5; j >= 1; j--)
    {
        printf("%d", j);
        Sleep(1000);
        printf("\n");
    }
    return 0;
}
