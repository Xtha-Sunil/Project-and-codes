#include<stdio.h>
#include<string.h>
int main() {
  FILE *fp;
  char name[20], addr[20];
  int salary, count = 0;

  fp = fopen("file.txt", "r");

  while(fscanf(fp, "%s%s%d", name, addr, &salary) != EOF) {
    //employee from panchkhal
    if(strcmp(addr, "panchkhal")==0) {
      printf( "%s \t%s \t%d \n", name, addr, salary);
      count++;
    }
  }
  printf("\n%d data found.", count);
  fclose(fp);
  return 0;
}