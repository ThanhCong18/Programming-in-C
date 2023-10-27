#include<stdio.h>
int mark[20] = {0};
// in ra so lần xuất hiện của mỗi phần tử trong mang và mỗi phần tử ta in ra 1 lần . 
int main()
{
    int A[20] , n ; 
    printf("nhap so phan tu cua mang A :");
    scanf("%d" , &n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d" , &A[i]);
    }
    for(int i = 0 ; i < n ; i++)
    {
        mark[A[i]]++;
    }

    for(int i = 0 ; i < n ; i++)
    {
        if(mark[A[i]]!=0){
        printf("%d %d\n" , A[i] , mark[A[i]]);
            mark[A[i]] = 0;             // gắn mảng mark tại vị trí A[i] bằng 0 mark[A[i]] = 0 . để in ra mỗi phần tủ 1 lần . 
        }
    }
    return 0 ; 
}