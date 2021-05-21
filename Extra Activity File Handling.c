#include <stdio.h>
#include <string.h>
int main()
{
  //FILE variable
  {
      FILE *fptr;
  //varibales
  int id,mth,sci,eng,avg1,avg2,ttl1,ttl2;
  char name1[50];
  char name2[50];

  // open the file in write mode
  fptr = fopen("file1", "w");

  // get input of student1
  printf("\nName: ");
  gets(name1);
  printf("ID: ");
  scanf("%d", &id);
  printf("Math: ");
  scanf("%d", &mth);
  printf("Science: ");
  scanf("%d", &sci);
  printf("English: ");
  scanf("%d", &eng);
  ttl1=mth+sci+eng;
  avg1=ttl1/3;

  // write file
  fprintf(fptr, "Name: %s \nID: %d \nMath: %d \nScience: %d\nEnglish: %d\nTotal grade: %d\nTotal average: %d", name1, id, mth,sci,eng,ttl1,avg1);

  fclose(fptr);

  // read reading
  fptr = fopen("file1", "r");
  // close
  fclose(fptr);
  // open the file in write mode
    fptr = fopen("file2", "w");

  // get input of student2
  printf("\n\nName: ");
  scanf("%s",name2);
  printf("ID: ");
  scanf("%d", &id);
  printf("Math: ");
  scanf("%d", &mth);
  printf("Science: ");
  scanf("%d", &sci);
  printf("English: ");
  scanf("%d", &eng);
  ttl2=mth+sci+eng;
  avg2= ttl2/3;
  // write file
  fprintf(fptr, "Name: %s \nID: %d \nMath: %d \nScience: %d\nEnglish: %d\nTotal grade: %d\nTotal average: %d", name2, id, mth,sci,eng,ttl2,avg2);

  fclose(fptr);

  // read file
  fptr = fopen("file2", "r");
  //close
  fclose(fptr);
}
return 0;
}
