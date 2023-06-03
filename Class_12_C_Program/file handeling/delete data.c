#include<stdio.h>
int main() {
  FILE *fp, *temp;
  char name[20], addr[20];
  int salary, count = 0;

  fp = fopen("file.txt", "r");
  temp = fopen("temp.txt", "w");

  while(fscanf(fp, "%s%s%d", name, addr, &salary) != EOF) {
    //delete data whose salary less than or equal to 5000
    if(salary > 5000) {
      fprintf(temp, "%s \t%s \t%d \n", name, addr, salary);
    }else {
    	count++;
    }
  }
  
  printf("%d data deleted.", count);
  fclose(fp);
  fclose(temp);

  remove("file.txt");
  rename("temp.txt", "file.txt");
  return 0;
}