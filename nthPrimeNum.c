//WAP to find nth Prime Number  
#include <stdio.h>

int isPrime(int); //Func Prototype

int main(){
    int n, i, c=0; //c is 0 initially 
    printf("Enter the Number n: ");
    scanf ("%d", &n);
    
    for (i = 2; ; i++){
        c = c + isPrime(i); //isPrime(i) will return 1 when i is Prime  
        if (c == n){
            printf("The nth (n = %d) Prime term is: %d", n, i);
            break;
        }
    }
}

int isPrime(int n)
{
    int i, r;
    for (i=2; i<=n/2; i++)
	{
        r = 0; //initial condition 
		if (n % i == 0)
		{
			r = 1;  //(if n is Composite then r will update to r = 1)
			break;
        }    
    }
    if (r==0){  //if r remains 0, means n is prime
    	return 1; 
	}
}
