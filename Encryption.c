#include<stdio.h>
#include<stdlib.h>
int main(){
int size;
printf("enter the size of the password:");
scanf("%d",&size);
char arr[size];
int decrypt[size];
printf("\nEnter the password:");
for(int i=0;i<size;i++){
    scanf("%c",&arr[i]);
}
printf("\nEncrypted password:");
for(int i=0;i<size;i++){
printf("%c",arr[i]-rand());
decrypt[i]=rand();
}
printf("\ndecrypt key:");
for(int i=0;i<size;i++){
printf("%d ",decrypt[i]);
}
}
