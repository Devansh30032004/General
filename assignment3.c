#include <stdio.h>
#include <stdbool.h>
 
float root(int n)
{
    float p = n;
    float q = 1;
    float y = 0.000001;
    
    while (p - q > y) {
        p = (p + q) / 2;
        q = n / p;
    }
    return p;
}

int main()
{
    //part 1
    int x;
    printf("Write x : ");
    scanf("%d", &x);
    float sqroot= root(x);
    printf("The approximate square root of %d is %f", x, sqroot);
    
    //part 2
    bool isprime = true;
    if(x%2==0){
        if(x>2){
            isprime = false;
        }
        else{
            isprime = true;
        }
    	
    }
    else{
    	for(int i =1;((2*i)+1)<= sqroot;i++){
    		int odd = (2*i)+1;
    		if(x%odd==0){
    			isprime = false;
    		}
    	}
    }
    if(isprime){
    	printf("\n%d is prime number", x);
    }
    else{
    	printf("\n%d is not prime number", x);
    }
 return 0;   
}