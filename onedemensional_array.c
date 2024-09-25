#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "ODA_library.h"
int find_maxin_array(int a[],int n){
    int max = a[0];
    for(int i =0;i<n;i++){
        if(max < a[i])
        max = a[i];
    }
    return max;
}
int find_min_index(int a[],int n){
    int min = a[0] ;
    int i;
    for( i = 0;i<n;i++){
        if(min > a[i]){
            min = a[i];
        }
    }
    for( i = 0;i<n;i++){
        if(min == a[i]){
            return i;
        }
    }
}
bool check_124(int a[],int n){
    for(int i =0;i<n;i++){
        if(a[i]%2==0&&a[i]<2004)
        return 1;
    }
    return 0;
}
bool is_prime(int N){
    if(N<=1){
        return 0;
    }
    for(int i =2;i<sqrt(N);i++){
        if(N%i==0){
            return 0;
        }
    }
    return 1;
}
int count_125(int a[],int n){
    int count =0;
    for(int i =0;i<n;i++){
        if(is_prime(a[i])&&a[i]<100){
                count += 1;
        }
    }
    return count;
}
int sum_126(int a[],int n){
    int sum = 0;
    for(int i =0;i<n;i++){
        if(a[i]<0){
            sum += a[i];
        }
    }
    return sum;
}
void Swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void Order_increasing_array(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                Swap(&a[i],&a[j]);
            }
        }
        }
    }
void decreasing_array(int a[],int n){
    for (int i = 0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(a[i]<a[j]){
                Swap(&a[i],&a[j]);
            }
        }
    }
}
void Insert_array(int a[],int n){
    for(int i =0;i<n;i++){
        printf("insert a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}
void export_array(int a[],int n){
    for(int i =0;i<n;i++){
        printf("\na[%d] = %d",i,a[i]);
    }
}
void Insertfloat_array(double a[],int n){
    for(int i =0;i<n;i++){
        printf("insert a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}
void exportfloat_array(double a[],int n){
    for(int i =0;i<n;i++){
        printf("\na[%d] = %d",i,a[i]);
    }
}
void even_element(int a[],int n){
    for(int i =0;i<n;i++){
        if(a[i]%2==0){
            printf("\na[%d] = %d",i,a[i]);
        }
    }
}
void odd_element(int a[],int n){
    for(int i =0;i<n;i++){
        if(a[i]%2!=0){
            printf("\na[%d] = %d",i,a[i]);
        }
    }
}
// kỹ thuật đặc lính canh
int Max(int a[],int n){
    int max = a[0];
    for(int i =0;i<n;i++){
        if (a[i]>max){
            max = a[i];
        }
    }
    return max;
}
int positive_element(int a[],int n){
    for(int i =0;i<n;i++){
        if(a[i]>0){
            return a[i];
            break;
        }
    }
    return -1;
}
int find_last_even_element(int a[],int n){
    for(int i = n-1; i>=0;i--){
        if(a[i]%2==0){
            return a[i];
        }
    }
    return -1;
}
int find_first_even_element(int a[],int n){
    for (int i =0;i<n;i++){
        if(a[i]%2==0){
            return a[i];
        }
    }
    return -1;
}
int is_perfect_element(int N){
    int i = 1;
    int sum =0;
    while(i<N){
        if(N%i==0){
            sum += i;
        }
        i++;
    }
    if(sum == N)
    return 1;
    else
    return 0;
}
int find_perfect_element(int a[],int n){
    for(int i = n-1;i>=0;i--){
        if(is_perfect_element(a[i])){
            return a[i];
        }
    }
    return -1;
}
// Hãy tìm giá trị dương nhỏ nhất trong mảng 1 chiều các số thực.
// Nếu mảng không có giá trị dương thì sẽ trả về -1
int min_element(int a[],int n){
    int min = a[0];
    for (int i = 0;i<n;i++){
        
        if(min>a[i]&&a[i]>0){
            min = a[i];
        }

    }
    return min;
}
int min_positive_element(int a[],int n){
    for(int i =0;i<n;i++){
        if(a[i]%2==0&&a[i]==min_element(a,n)){
            return a[i];
        }
    }
    for(int i =0;i<n;i++){
        if(a[i]>=0)
        return 0;
    }
    return -1;
}

