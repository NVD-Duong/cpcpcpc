#include<conio.h>
#include<stdio.h>

#include <string.h>
#define MAX 100

 
int main()
{
	char name[100];
	int tuoi;
	//ghi file
	FILE *fptr;
	fptr = fopen("D:\\program.txt","w");
	if (fptr == NULL)
	{
	
		printf ("loi !");
		exit (1);
	}
	
	printf ("Nhap ten ban vao day: ");
	gets(name);
	printf("nhap vao tuoi cua ban: ");
	scanf("%d",&tuoi);
	 fprintf (fptr, "%s,tuoi=%d",name,tuoi);
	 fclose(fptr);
   // doc file

	if ((fptr =fopen("D:\\program.txt","r")) == NULL){
		printf("Loi mo file!");
		exit(1);
	}
	 while(!feof(fptr)){
	 fscanf(fptr,"%s ", &name);
	  printf ("%s ", name);
}
	  fclose(fptr);
	  return 0;
}

 
  
