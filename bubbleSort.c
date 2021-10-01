#include<stdio.h>
void swap(int *p, int *q){
        int temp = *p;
        *p = *q;
        *q = temp;
        
}
void BubbleSort(int arr[], int n){
        int i, j,flag = 0;//use flag for making bubble sort algo as adaptive
        for(i = 0; i < n-1; i++){
                for(j = 0; j < n-1-i; j++){
                        if(arr[j] > arr[j+1]){
                                swap(&arr[j],&arr[j+1]);
                                flag = 1;
                        }
                }
                if(flag == 0)
                        break;
        }

}


void Display(int arr[], int n){
        int i;
        for(i = 0; i < n; i++){
                printf("%d ",arr[i]);
        }
        printf("\n");
}
int main(){
        int arr[]={1,2,3,4,5,8,9};
        int n = sizeof(arr)/sizeof(arr[0]);
        BubbleSort(arr,n);
        Display(arr,n);
        return 0;
}