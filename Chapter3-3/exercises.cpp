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
	Element* previous{};
	void insert_after(Element* new_element) {
		new_element->next = next;
		next = new_element;
	}
	void insert_before(Element* new_element) {
		new_element->previous = previous;
		previous = new_element;
	}
	char prefix[2];
	short operating_number;
};

int main() {
	Element trooper1, trooper2, trooper3;

	trooper1.prefix[0] = 'T';
	trooper1.prefix[1] = 'K';
	trooper1.operating_number = 421;
	
	trooper2.prefix[0] = 'F';
	trooper2.prefix[1] = 'N';
	trooper2.operating_number = 2187;

	trooper3.prefix[0] = 'L';
	trooper3.prefix[1] = 'S';
	trooper3.operating_number = 005;
	
	trooper1.insert_after(&trooper2);
	trooper2.insert_after(&trooper3);
	
	trooper2.insert_before(&trooper1);
	trooper3.insert_before(&trooper2);

	for (Element *cursor = &trooper1; cursor; cursor = cursor->next) {
		printf("stormtrooper %c%c-%d\n", cursor->prefix[0], cursor->prefix[1], cursor->operating_number);
	}

	for (Element *cursor = &trooper3; cursor; cursor = cursor->previous) {
		printf("stormtrooper %c%c-%d\n", cursor->prefix[0], cursor->prefix[1], cursor->operating_number);
	}
	
	return 0;
}










