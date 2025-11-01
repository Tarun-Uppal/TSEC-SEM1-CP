#include<stdio.h>
#include<conio.h>

void main(){
    int m = 3;
    int n = m;
    int arr1[m][n];
    printf("Please enter array 1\n");
    for (int i = 0; i<m;i++){
        for (int j = 0; j<n;j++){
            int a = 0;
            printf("Please enter the number: ");
            scanf("%d", &a);
            arr1[i][j] = a;
        }
    }
    int arr2[m][n];
    printf("Please enter array 2\n");
    for (int i = 0; i<m;i++){
        for (int j = 0; j<n;j++){
            int a = 0;
            printf("Please enter the number: ");
            scanf("%d", &a);
            arr2[i][j] = a;
        }
    }
    int ans[m][n];
    for (int i = 0; i<m;i++){
        for (int j = 0; j<n;j++){
            int sum = 0;
            for (int z = 0; z<n; z++){
                sum += arr1[z][i]*arr2[j][z];
            }
            ans[i][j] = sum;
        }
    }
    printf("Product of array 1 and 2\n");
    for (int i = 0; i<m;i++){
        for (int j = 0; j<n;j++){
            printf("%d\t", ans[i][j]);
        }
        printf("\n");
    }
}
