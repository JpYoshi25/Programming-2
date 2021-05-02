#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i,vowels=0,consonants=0;
    int length;
        printf("Input a sentence: ");
        gets(str);
        i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
            str[i]=str[i]-32;
        i++;
    }
    printf("String converted: ");
    puts(str);

  length = strlen(str);

  printf("\nString length: %d", length);

    for(i=0;str[i];i++)
    {
    	if((str[i]>=65 && str[i]<=90)|| (str[i]>=97 && str[i]<=122))
    	{

            if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U')
		      vowels++;
            else
             consonants++;
        }

 	}


    printf("\nvowels: %d",vowels);
    printf("\nconsonants: %d",consonants);

  return 0;

}



