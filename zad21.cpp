#include <stdio.h>

void wyznaczniki( int a, int b, int e, int c, int d, int f );

int main( void ) {
    int a, b, e, c, d, f;
    printf( "Aby obliczyc uklad rownan postaci: \n"
    "ax + by = e \n"
    "cx + dy = f \n"
    "Podaj wspolczynniki a, b, e, c, d, f: " );
   
    scanf( "%d %d %d %d %d %d", & a, & b, & e, & c, & d, & f );
   
    if( a == 0 && b == 0 && c == 0 && d == 0 ) printf( "Wszystkie wspolczynniki przy nie wiadomych sa rowne 0!" );
    else wyznaczniki( a, b, e, c, d, f );
   
    return 0;
}

void wyznaczniki( int a, int b, int e, int c, int d, int f ) {
    int W, Wx, Wy, x, y;
   
    W = a * d - b * c;
    Wx = e * d - b * f;
    Wy = a * f - e * c;
   
    if( W != 0 ) {
        x = Wx / W;
        y = Wy / W;
       
        printf( "x = %d, y = %d", x, y );
    }
    else {
        if( Wx == 0 && Wy == 0 ) printf( "Uklad ma nieskonczenie wiele rozwiazan!" );
        else printf( "Uklad nie ma rozwiazan!" );
       
    }
   
}
