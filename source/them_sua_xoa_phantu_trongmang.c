#include <stdio.h>
#include <stdlib.h>
//int sophantu ;
void NhapMang( unsigned char *A , int *sophantu)
{
    printf("nhap so phan tu trong mang :\n");
    scanf("%d" , sophantu);
    for( int i = 0 ; i < *sophantu ; i++)
    {
        scanf("%d", &A[i]);
    }
}

void InMang( unsigned char *A , int sophantu)
{
    printf("In ra so phan tu trong mang :\n");
    for(int i = 0 ; i < sophantu ; i++)
    {
       printf("%d " , A[i] );
    }
}

void ThemPhanTuVaoCuoi( unsigned char *A , int sophantu , int *value)
{
    int size = sizeof(A)/sizeof(A[0]);// kiem tra kich thuoc cua mang .
    if(sophantu==size)
    {
        printf("khong the them vao mang !");
        return ;
    }
    printf("nhap gia tri can them :");
    scanf("%d" , value);
    A[sophantu] = *value ;
}

void themphantuvaodaumang(unsigned char *A , int sophantu , int *value)
{
    int size = sizeof(A)/sizeof(A[0]);// kiem tra kich thuoc cua mang .
    if(sophantu==size)
    {
        printf("khong the them vao mang !");
        return ;
    }
    printf("nhap gia tri can them :\n");
    scanf("%d" , value);
    sophantu++;
    for(int i = sophantu - 1 ; i > 0 ; i--)
    {
        A[i] = A[i-1];
    }
    A[0] = *value ;
}

void themphantuvaovitribatky(unsigned char *A , int sophantu , int *value , int *pos)
{
    int size = sizeof(A)/sizeof(A[0]);// kiem tra kich thuoc cua mang .
    if(sophantu==size)
    {
        printf("khong the them vao mang !");
        return ;
    }
    printf("nhap vi tri can them :\n");
    scanf("%d" , pos);
    printf("nhap gia tri can them :\n");
    scanf("%d" , value);
    sophantu++;
    for(int i = sophantu - 1 ; i > *pos ; i--)
    {
        A[i] = A[i-1];
    }
    A[*pos] = *value ;
}

void xoaphantutrongmang(unsigned char *A , int sophantu , int *pos){

    int size = sizeof(A)/sizeof(A[0]);// kiem tra kich thuoc cua mang .
    if(sophantu==size)
    {
        printf("khong the them vao mang !");
        return ;
    }
    printf("nhap vi tri can xoa :\n");
    scanf("%d" , pos);
     // Dich chuyen mang
    for(int i = *pos; i < sophantu - 1; i++){
        A[i] = A[i+1];
    }
}
void Suaphantubatkytrongmang(unsigned char *A , int sophantu , int *value , int *pos)
{
    // sophantu vẫn được giữ nguyên .
    int size = sizeof(A)/sizeof(A[0]);// kiem tra kich thuoc cua mang .
    if(sophantu==size)
    {
        printf("khong the them vao mang !");
        return ;
    }
    printf("nhap vi tri can sua :\n");
    scanf("%d" , pos);
    printf("nhap gia tri can sua :\n");
    scanf("%d" , value);
    for(int i = 0 ; i < sophantu ; i++)
    {
        if(i==*pos)
        {
            A[i] = *value;
        }
    }
}
int main()
{
    unsigned char A[100];
    int sophantu , value , pos ;
    NhapMang(A,&sophantu);
//    ThemPhanTuVaoCuoi(A,sophantu,&value);
//    themphantuvaodaumang(A,sophantu,&value);
//    themphantuvaovitribatky(A,sophantu,&value,&pos);
//    xoaphantutrongmang(A,sophantu,&pos);
    Suaphantubatkytrongmang(A,sophantu,&value,&pos);
    InMang(A,sophantu);
    return 0;
}
