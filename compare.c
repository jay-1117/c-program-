#include <stdio.h>
#include<string.h>


int main()

{
	char str1[20];
	char str2[20];
	

	
	
	printf("Enter String 1 : ");
	scanf("%s",&str1);
	
		
		printf("Enter String 2 : ");
	scanf("%s",&str2);
	
	
//	char arr1[]= "This is the example";
//	char  arr2[]= "This is the exampl";
	
     int result=strcmp(str1,str2);
     
     if(result == 0)
     {
	 
     printf("the strings are equal");
 }
     
     else
     {
     	printf("the strings are not equal");
	 }
	 return 0;
     
     
	
		
}


