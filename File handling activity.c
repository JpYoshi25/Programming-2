#include <stdio.h>
#include <string.h>

int main ()
{
  FILE * fptr;
  int i,n;
  char str[50];
  char fname[50];
  char str1;
    //INPUT
	printf(" Input the file location: ");
	gets(fname);
    fptr = fopen(fname, "a");
    printf(" Input how many lines to be appended: ");
    scanf("%d", &n);

        for(i = 0; i < n+1;i++)
        {
            fgets(str, sizeof str, stdin);
            fputs(str, fptr);
        }
  fclose (fptr);

	fptr = fopen (fname, "r");
	//OUTPUT
	printf("\n Inside of the %s:\n",fname);
	str1 = fgetc(fptr);

	while (str1 != EOF)
		{
			printf ("%c", str1);
			str1 = fgetc(fptr);
		}
    fclose (fptr);

  return 0;
}
