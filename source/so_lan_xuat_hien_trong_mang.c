#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array[10] , n ;
    printf("Nhap so phan tu cua Array : ");
    scanf("%d" , &n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d" , &array[i]);
    }
    // kiểm tra với phần tử trước nó
    for(int i = 0 ; i < n ; i++)
    {
       int OK = 1 ;
       for( int j = 0 ; j < i ; j++)
       {
           if(array[i]==array[j])  // nếu đằng trước nó có phần tử trùng nó thì không in ra và gán biến OK = 0 ;
           {
               OK = 0 ; break ;
           }
       }
       if(OK) printf("%d " , array[i]);
    }
    return 0;
}

