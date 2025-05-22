#include <stdio.h>

int main(){
    int n[3][4]; 
    int i, j;

    for ( i = 0; i < 3; i++ ) {
        for(j = 0; j< 4; j++){
            n[ i ][ j ] = 0; 
        }
    }
    printf( "Elemento Valor\n" );
    
    for ( i = 0; i < 3; i++ ) {
        for(j= 0; j<4 ; j++){
            printf( "%4d",n[ i ][j] );
        }
        printf("\n");
    }
    return 0;
}