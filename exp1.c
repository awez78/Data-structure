#include<stdio.h>

int a[10];
int choice,index,element;
void insertElement();
void deleteElement();
void display();

int main(){

do{
    printf("\n---MENU---\n");
    printf("1.Insert Element\n");
    printf("2.Delete Element\n");
    printf("3.Display Array\n");
    printf("4.Exit Program\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        printf("\nEnter the index position: ");
        scanf("%d",&index);
        printf("\nEnter the element to insert: ");
        scanf("%d",&element);
        insertElement();
        break;
    case 2:
        printf("Enter the index position to delete: ");
        scanf("%d",&index);
        deleteElement();
        break;
    case 3:
        display();
        break;
    case 4:
        printf("Exiting the program...\n");
        break;
    default:
        printf("Invalid choice, Please try again");
    }
}
while(choice!=4);
return 0;
}
void insertElement(){
    if(index>=10||index<0)
    {
        printf("Invalid index position!!!");
    }
    else
    {
        a[index-1]=element;
    }
}
void deleteElement(){
    if(index>=10||index<0)
    {
        printf("Invalid index position!!!");
    }
    else
    {
        a[index-1]=0;
    }
}
void display(){
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d  ",a[i-1]);
    }
}
