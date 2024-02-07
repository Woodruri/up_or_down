#include <stdio.h>
#include <stdbool.h>


//my initial solution, I believe it is implementation dependant
bool up_or_down(){

	int testArr[2];

	//this means that the consecutive element is LESS than or down 
	//from where we allocated the array
	if (&testArr[0] > &testArr[1])
		return true;	
	return false;
}

//this compares our initial call to the function to a new call (higher on the stack)
// If the new call's x is higher than the old one's, we grow up.
bool UOD_with_func(int *other){
    int x;

    if (!other)
        return his_uod(&x);
    else
        return &x > other;
}

int main(){

    //with an array to check
    printf("my up or down func:\n");
	if (up_or_down())
		printf("Stack growns down\n");
	else
		printf("Stack grows up\n");

    //with the functions
    printf("his up or down func:\n");
	if (UOD_with_func(NULL))
		printf("Stack growns down\n");
	else
		printf("Stack grows up\n");
	return 0;
}
