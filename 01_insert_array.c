#include<stdio.h>
#include<stdlib.h>

int main(){
 //Adding a comment
    int size;
    printf("enter size:");
    scanf("%d",&size);
    int arr[size];
     printf("enter elements of array: ");
    for(int i=0;i<size;i++){
       
        scanf("%d",&arr[i]);
    }

    //size++;
    int n,pos;

    printf("enter the element to be insert\n: ");
    scanf("%d",&n);
    printf("enter the position to be insert\n: ");
    scanf("%d",&pos);

    for(int i=size;i>pos;i--){

        arr[i]=arr[i-1];
    }

    arr[pos]=n;
    printf("new array is:");

    for(int i=0;i<=size;i++){

        printf("%d",arr[i]);
        printf(" ");

        
    }

   
   


}
