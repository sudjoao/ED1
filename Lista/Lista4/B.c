#include <stdio.h>
int f91(int N){
	if(N<=100)
		return f91(f91(N+11));
	return N-10;
}
int main(){
	int n, out;
	while(scanf("%d", &n), n)
		printf("f91(%d) = %d\n", n, f91(n));
	return 0;
}
		
