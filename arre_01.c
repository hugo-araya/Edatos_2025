#include <stdio.h>

int main(){
    int n[ 10 ]; 
    int i;

    for ( i = 0; i < 15; i++ ) {
        n[ i ] = 100; 
    }
    printf( "Elemento Valor\n" );
    
    for ( i = 0; i < 15; i++ ) {
        printf( "%5d%13d\n", i, n[ i ] );
    }
    return 0;
}