#include<stdio.h>
#include<conio.h>

void main(){
    int m = 5;
    int arr1[m];
    for (int i = 0; i<m;i++){
        printf("Please enter the number: ");
        scanf("%d", &arr1[i]);
    }
    for (int i = 0;i<m-1;i++){
        for(int j = 0;j<m-1;j++){
            if (arr1[j] < arr1[j+1]){
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
    }
    printf("Descending Order\n");
    for (int i = 0;i<m;i++){
        printf("%d\t", arr1[i]);
    }
}
