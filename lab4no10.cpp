#include <stdio.h>
int main() {
	int score[100] , a1 = 0 , b1 = 0 , c1 = 0 , d1 = 0 , f1 = 0 ;
	int n = 0;
	while (1) {
    scanf("%d", &score[n]);
    if (score[n] == -1) break;
    n++;
}                                                      

	for( int i = 0 ; i < n ; i++) {
		
		printf("%d" , score[i]);
		
		if(score[i] > 100){
			printf("(error score)") ;
		}
        else if (score[i] >= 85){
        a1++ ;
		printf("(A)");
	    }
		else if (score[i] >= 75){
		b1++ ;
		printf("(B)");
	    }
		else if (score[i] >= 68){
		c1++ ;
		printf("(C)");
        }
		else if (score[i] >= 55){
		d1++ ;
		printf("(D)");
	    }
		else if (score[i] < 0)
		printf("(error score)") ;
		else if (score[i] < 55){
		f1++ ;
		printf("(F)");	
		}
		printf("\n") ;

}
  
    printf("A(%d)\n" , a1) ;
    printf("B(%d)\n" , b1) ;
    printf("C(%d)\n" , c1) ;
    printf("D(%d)\n" , d1) ;
    printf("F(%d)\n" , f1) ;
    

	
	return 0 ;

}
