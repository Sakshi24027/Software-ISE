#include<stdio.h>
//deletion of duplicates from a sorted array.

int main(){
  int a,b;
    int size;
    printf("enter size: ");
    scanf("%d",&size);
    int a[size];

    printf("enter elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
   
    int len=0;

    for(int i=0;i<size;i++)
    {
        if(a[i]!=a[i+1])
        {
            a[len]=a[i];
            len++;
            
          
        }



    }
    a[len]=a[size-1];

    for(int i=0;i<len;i++){
        printf("%d\n",a[i]);
    }



    return 0;
}
