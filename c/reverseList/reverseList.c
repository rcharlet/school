
#include <stdio.h>

typedef struct data {
	int	thing;
	struct data* next;
} data;


int reverseList(data *head) {
	// caller must pass in head or this will ophan nodes (and leak memory)
	data *prev,*node,*next;
	prev = NULL;
	node = head;
	while (node) {
		next = node->next;
		node->next = prev;
		prev = node;
		node = next;
	}
	return 0;
}



int printList(data *head) {
	data *this=head;

	while(this) {
		printf("this.thing=%d\n", this->thing);
		this=this->next;
	}
	return 0;
}

int main() {

	data d5 = {5,NULL};
	data d4 = {4,&d5};
	data d3 = {3,&d4};
	data d2 = {2,&d3};
	data d1 = {1,&d2};

	printList(&d1);
	printf("\n\n");
	reverseList(&d1);
	printList(&d5);

	return 0;
}
