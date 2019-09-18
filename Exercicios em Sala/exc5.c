#include <stdio.h>
int main() {
	int i, offset;
	int b[] = { 10, 20, 30, 40 };
	int *bPtr;
	bPtr = b;
	printf( "VETOR\n" );
	printf( "\n\tNotacao usando indices:\n" );
	for ( i = 0; i < 4; i++ )
		printf( "\t\tb[%d] = %d\n", i, b[i] );
		printf( "\n\tNotacao usando deslocamento\n" );
	for ( offset = 0; offset < 4; offset++ )
		printf( "\t\t*(b + %d) = %d\n", offset, *(b + offset) );
		printf( "\nPONTEIRO\n" );
		printf( "\n\tNotacao usando indices:\n" );
	for ( i = 0; i < 4; i++ )
		printf( "\t\tbPtr[%d] = %d\n", i, bPtr[i] );
		printf( "\n\tNotacao usando deslocamento\n" );
	for ( offset = 0; offset < 4; offset++ )
		printf( "\t\t*(bPtr + %d) = %d\n", offset, *(bPtr + offset) );
	return 0;
}
