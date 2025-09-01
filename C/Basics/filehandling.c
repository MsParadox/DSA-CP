//program run in RAM(not permanent)
//ROM (prmanent) hdd,ssd
//ex:-sd card :read speed 270 mb/s and write speed 70 mb/s
//read   :  SD card --copy--> computer    sdcard   <--copy-- laptop 
//write  :           270mb/s                         70 mb/s
#include<stdio.h>
int main (){

//READING A FILE
FILE* ptr = fopen("mohit.txt","r"); 
char str[100];
//if(fgets(str,100,ptr)!=NULL)  :->if is for ONE line
// { printf("%s",str);
//    }
while(fgets(str,100,ptr)!=NULL)//while is for PARAGRAPH
  {printf("%s",str);
  }

//WRITING A FILE
FILE* ptr1 =fopen("ruchi.txt","w");
char str1[] ="Ruchi Sharma\nShe is my pyari sister.";
fputs(str1,ptr1);

//CLOSING A FILE

fclose(ptr);
fclose(ptr1);


 return 0;  
}