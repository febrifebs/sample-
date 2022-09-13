#include<stdio.h>
int main(){
// membuat variabel

char name[20], alamat [30];

printf("Nama:");
scanf("%[^\n]s", &name);

printf("Alamat domisili:");
scanf("%s", &alamat);

printf("\n--------------\n");
printf("nama yang diinputkan: %s\n", name);
printf("Alamat domisili yang diinputkan: %s\n", alamat);


     return;
}
