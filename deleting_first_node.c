#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
    //adding a comment
    
};
struct node* deletingfirst(struct node *head)
{
    struct node *p=head;
    head=head->next;
    free(p);
    return head;
}
void traversig(struct node *head)
{
    struct node *ptr=head;
    int i=0;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
        i++;
    }

}

int main(){
    struct node *head,*second,*third;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head->data=2;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=22;
    third->next=NULL;

    traversig(head);
    head=deletingfirst(head);
    printf("after deletion\n");
    traversig(head);


}
