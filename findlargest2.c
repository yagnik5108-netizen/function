# include < stdio .h >
 int main () {
 int a [3][3] , * p = & a [0][0];
 int i , max , min ;
 printf (" Enter elements of 3x3 matrix :\n") ;
 for ( i =0; i <9; i ++) scanf ("%d", p + i ) ;
 max = min = * p ;
 for ( i =1; i <9; i ++) {
 if (*( p + i ) > max ) max = *( p + i ) ;
 if (*( p + i ) < min ) min = *( p + i ) ;
 }
 printf (" Largest = %d\ nSmallest = %d\n", max , min ) ;
 return 0;
 }
