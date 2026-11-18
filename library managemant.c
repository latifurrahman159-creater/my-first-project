#include<stdio.h>
#include<string.h>
struct Book{
    int id;
    char title[100];
    char author[100];
    int isIssued;
};
struct Book library[200];
int count=0;
void addBook(){
printf("enter book iD ");
scanf("%d",&library[count].id);
getchar();
printf("enter title to the book ");
gets(library[count].title);
printf("enter author of the book");
gets(library[count].author);
library[count].isIssued=0;
count++;
printf("\nBOOK ADDED SUCESSFULLY\n");
}

void displayBooks(){
if(count==0){
    printf("BOOKS ARE NOT IN LIBRARAY");
}else{
    printf("ALL books are availaible\n");
    for(int i=0; i<count; i++){
        printf("ID: %d || TITLE : %s || ATUHTOR : %s  || status %s\n ",
             library[i].id,
              library[i].title,
            library[i].author,
        library[i].isIssued ? "ISSUDED" : "AVAILAIBLE");
    }
}
}
void searchBook(){
int id, found=0;
printf("enter ID to search book ");
scanf("%d", &id);
for(int i=0; i<count; i++){
    if(library[i].id==id){
        printf("FOUND : %d || TITLE : %s || ATUHTOR : %s  || status %s\n ",
             library[i].id,
              library[i].title,
            library[i].author,
        library[i].isIssued ? "ISSUDED" : "AVAILAIBLE");
        found=1;
        break;
    }
}
if(found==0){
    printf("no books are found \n");
}
}
void issueBook(){
int id; int found=0;
printf("enter  book id  to issue ");
scanf("%d", &id);
for(int i=0; i<count; i++){
    if(library[i].id==id){
        found=1;
    
    if(library[i].isIssued==0){
    library[i].isIssued=1;
    printf("BOOK ISSUED SUCESSFULLY\n");
    
    }else{
        printf("books are already issued\n");
    }
    break;
}
}
if(found==0){
    printf("book are not found\n");
}
}
void returnBook(){
int id,  found=0;
printf("enter id to check that book is return or not ");
scanf("%d",&id);
for(int i=0; i<count; i++){
if(library[i].id==id){
found=1;

if(library[i].isIssued==1){
library[i].isIssued=0;
printf("book return sucessfully\n");
}else{
    printf("book was not issued\n");
}
    break;
}
}
 if(found==0){
    printf("book was not found\n");
 }
}
int main(){
int choice,running=1;
while(running==1){
    printf("\n=====LIBRARY MANAGEMENT =====\n");
    printf("1. ADD NEW BOOKs\n");
    printf("2. Display all books\n");
    printf("3.search  book by id\n");
    printf("4. ISSUED a book\n ");
    printf("5.return a book\n");
    printf("Enter a choice");
    scanf("%d", &choice);
    switch(choice){
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: issueBook(); break;
            case 5: returnBook(); break;
            case 6: 
            printf(" exciting good boy\n");
            running=0;
            break;
            default:
            printf("invalid choice try again\n");
        }
}

    return 0;
}