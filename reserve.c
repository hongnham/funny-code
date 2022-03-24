#include <stdio.h>  
#include <string.h>  
  
void reserve(char *str1)  
{  
    int i, len, temp;  
    len = strlen(str1); // get total length str1 
    printf("len = %d", len);
      
    for (i = 0; i < len/2; i++)  
    {  
        temp = str1[i];  
        str1[i] = str1[len - i - 1];  
        str1[len - i - 1] = temp;  
    }  
}  
      
    int main()  
    {  
        char str[50]; 
        printf (" Enter the string: ");  
        gets(str);   
          
        printf (" \n Before reverse: %s \n", str);  
          
        reserve(str);  
        printf (" <<<<=====After reverse====>>>>: %s", str);  
    }  
