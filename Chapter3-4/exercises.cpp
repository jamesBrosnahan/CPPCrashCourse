/*
3-4 Reimplement Listing 3-11 using no explicit types. (Hint: use auto.)
________________________________________________________________________________________
#include<cstdio>

int main(){
 int original = 100;
 int& original_ref = original;
 printf("Original:  %d\n", original);
 printf("Reference: %d\n", original_ref);

 int new_value = 200;
 original_ref = new_value;
 printf("Original:  %d\n", original);
 printf("New Value: %d\n", new_value);
 printf("Reference: %d\n", original_ref);
}
________________________________________________________________________________________
*/

#include<cstdio>

int main() {
	auto original = 100;
	auto& original_ref = original;
	printf("Original:  %d\n", original);
	printf("Reference: %d\n", original_ref);

	auto new_value = 200;
	original_ref = new_value;
	printf("Original:  %d\n", original);
	printf("New Value: %d\n", new_value);
	printf("Reference: %d\n", original_ref);
}