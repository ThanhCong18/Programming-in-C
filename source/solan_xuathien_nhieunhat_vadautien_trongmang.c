#include<stdio.h>
// 10
// 1 2 3 3 3 3 9 9 9 9 
int cnt[20] = {0};
int main()
{
    int A[20] , n ; 
    printf("nhap so phan tu cua mang A :");
    scanf("%d" , &n);
    for( int i = 0 ; i < n ; i++)
    {
        scanf("%d" , &A[i]);
    }
    for(int i = 0 ; i < n ; i++)
    {
        cnt[A[i]]++;
    }
    int dem = 0 , res ;
    for(int i = 0 ; i < n ; i++)
    {
        if(cnt[A[i]] > dem)
        {
            dem = cnt[A[i]] ; 
            res = A[i] ;
        }
        // truong hop in ra so lan xuat hien lan dau tien thi khong can xet dau bang . 
    }
    printf("tan suat xuat hien : %d\n", dem );
    printf("tan suat xuat hien : %d\n",  res );
    return 0 ; 
}