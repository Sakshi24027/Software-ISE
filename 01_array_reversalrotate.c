#include<stdio.h>

void reverse(int a[],int start,int end){
    while(start<end)
    {
        int temp=a[start];
        a[start++]=a[end];
        a[end--]=temp;

    }
}


int main(){
    int size;
    printf("enter the size of array: ");
    scanf("%d",&size);
    int a[size];

    printf("enter the elements: ");

    for(int i=0;i<size;i++){

        scanf("%d",&a[i]);
    }
    int k;
    printf("enter the position:");
    scanf("%d",&k);

    reverse(a,0,size-k-1);
    reverse(a,size-k,size-1);
    reverse(a,0,size-1);








return 0;
}