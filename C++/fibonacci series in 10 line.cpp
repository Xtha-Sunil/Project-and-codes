#include <stdio.h>
void fibo(int start = 0, int curr = 1, int n_term = 10){
	printf("%d ",start);
	if (n_term)
		fibo(curr, (start + curr), n_term - 1);
}
int32_t main(){
	fibo();
	return 0;
}