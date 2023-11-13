#include <stdio.h>
#include <math.h>

int main() {
    int n;
    while(1){
	    printf("Enter the number of decimal places for pi: ");
	    scanf("%d", &n);
	
	    if (n < 0) {
	        printf("Invalid input. Please enter a non-negative number.\n");
	        return 0;
	    }
	
	    double pi = M_PI;
	    double multiplier = pow(10, n);
	    double rounded_pi = round(pi * multiplier) / multiplier;
	
	    printf("Pi to %d decimal places is: %.*lf\n", n, n, rounded_pi);
	}
    return 0; 
}

