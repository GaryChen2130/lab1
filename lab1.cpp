#include <iostream>
#include <cstdio>
using namespace std;

int main(){

int n;
printf("Please key in a positive number.\n");
scanf("%d",&n);

while(n != 1){

	printf("%d ",n);
	if(n%2 != 0)n = 3*n + 1;
	else{n = n/2;}

}

printf("%d\n",n);

}

