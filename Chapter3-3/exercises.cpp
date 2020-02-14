/*
3-3 Add an Element* previous to Listing 3-9 to make a doubly linked list.
Add an insert_before method to Element.
Traverse the list from front to back,
then from back to front,
using two separate for loops.
Print the operating_number inside each loop.
________________________________________________________________________________________
struct Element {
	Element* next{};
	void insert_after(Element* new_element) {
		new_element->next = next;
		next = new_element;
	}
	char prefix[2];
	short operating_number;
};
________________________________________________________________________________________
*/

#include <cstdio>

struct Element {
	Element* next{};
	void insert_after(Element* new_element) {
		new_element->next = next;
		next = new_element;
	}
	char prefix[2];
	short operating_number;
};

int main() {

}
