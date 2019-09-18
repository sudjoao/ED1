
#include <stdio.h>
#include <stdlib.h>
int maior( int a, int b ) {
    return a > b;
}
int menor( int a, int b ) {
    return a < b;
}
void minmax( int n, int *v, int          (*compara)( int a, int b ) ) {
    int i, elem;
    elem = v[0];
    for ( i = 1; i < n; i++ )
        if ( (*compara)( v[i], elem ) )
            elem = v[i];
    printf( "elem = %d\n", elem );
}

int main() {
    int v[5] = { 5, 2, 4, 8, 6 };
    minmax( 5, v, maior );
    minmax( 5, v, menor );
return 0;
}
