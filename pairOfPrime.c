//Successfully Completed...
#include <stdio.h>

int isPrime(int n);

int main(){
    int n, x1, x2,returnValue1, returnValue2, i; //x1 + x2 = n
    printf("Enter the Number: "); 
    scanf("%d", &n);
    for( i=2; i <= n/2; i++) 
    {
        x1 = i;
        x2 = n - x1;  //now getting the pair of 2 numbers
        
        //returnValue1 
		returnValue1 = isPrime(x1);
		
        if (returnValue1 == 1){
            returnValue2 = isPrime(x2);
        }
        if (returnValue1 ==1 && returnValue2 == 1){
            printf("%d %d \n", x1, x2);
        }
    }


}


int isPrime(int n)  //Function Definition starts here
{
    int i, r;
    for (i=2; i<=n/2; i++)
	{
        r = 0; //initial condition 
		if (n % i == 0)
		{
			r = 1;  //(if n is Composite then r = 1)
			break;
        }    
    }
    if (r==0){  //if r == 0, means n is prime
    	return 1; 
	}
}
