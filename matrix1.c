# include < stdio .h >
 int main () {
 int a [3][3] , b [3][3] , c [3][3];
 int * p1 = & a [0][0] , * p2 = & b [0][0] , * p3 = & c [0][0];
 int i , j ;
 printf (" Enter first matrix :\n") ;
 for ( i =0; i <9; i ++) scanf ("%d", p1 + i ) ;
 printf (" Enter second matrix :\n") ;
 for ( i =0; i <9; i ++) scanf ("%d", p2 + i ) ;
 for ( i =0; i <9; i ++) *( p3 + i ) = *( p1 + i ) + *( p2 + i ) ;
 printf (" Resultant Matrix :\n") ;
 for ( i =0; i <9; i ++) {
 printf ("%d ", *( p3 + i ) ) ;
 if (( i +1) %3==0) printf ("\n") ;
 }
 return 0;
 }
