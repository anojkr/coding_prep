#include <stdio.h>
#include <stdlib.h>


struct node {
	int data;
	struct node *next;
};


struct node * get_node(int data) {
	struct node *t = (struct node *) malloc(sizeof(struct node));
	t->data = data;
	t->next = NULL;
}

struct node *add_node(struct node *head, int data) {
	struct node *t = head;
	if (head == NULL) {
		return get_node(data);
	} else {
		while (t->next != NULL) {
			t = t->next;
		}
		t->next = get_node(data);
		return head;
	}
}

struct node * create_list(struct node **head) {
		int n;
		scanf("%d", &n);
		while (n) {
			int data;
			scanf("%d", &data);
			*head = add_node(*head, data);
			n--;
		}
}

void print_list(struct node *t) {
	printf("\n");
	while (t != NULL) {
		printf("%d ", t->data);
		t = t->next;
	}
}

void intersect(struct node *a, struct node *b, int num) {
	struct node *t = a;
	while (t->next != NULL) {
		t = t->next;
	}

	struct node *p = b;
	while (num) {
		p = p->next;
		num--;
	}

	t->next = p;
}



// struct node *temp = NULL;
// int flag = 0;

// void check(struct node *a, struct node *b) {
// 	printf("\n");
// 	printf("----------\n");
// 	printf("%d\n", a->data);
// 	printf("%d\n", b->data);
// 	printf("----------\n");

// 	if (a != NULL && b != NULL) {
// 		if (a != b && a->next == b->next) {
// 			// flag = 1;
// 			// temp = a->next;
// 			printf("true\n");
// 		}
// 	}
// }


// void fun(struct node *a, struct node *b){

// 	if (a->next != NULL && b->next != NULL) {
// 		fun(a->next, b->next);
// 	}

// 	if (a->next == NULL && b->next != NULL) {
// 		fun(a, b->next);
// 	}

// 	if (a->next != NULL && b->next == NULL) {
// 		fun(a->next, b);
// 	}
// 	check(a, b);
// }

void test(struct node *a, struct node *b) {
	int c = 0;
	struct node *t = a;
	struct node *arr[50];
	while (t != NULL){
		arr[c] = t;
		t = t->next;
		c++;
	}

	int k = 0;
	struct node *brr[50];
	struct node *p = b;
	while (p != NULL){
		brr[k] = p;
		p = p ->next;
		k++;
	}

	for (int i = c-1 , j = k-1; i>=0 && j>=0; i--,j--) {
		if (arr[i] == brr[j] && arr[i-1] != brr[j-1]) {
			printf("\n%d\n", brr[j]->data);
			break;
		}
	}

}

void main () {
	struct node *a = NULL;
	struct node *b = NULL;
	create_list(&a);
	create_list(&b);

	print_list(a);
	print_list(b);

	int num;
	scanf("%d", &num);
	intersect(a, b, num);

	print_list(a);
	print_list(b);
	
	test(a, b);

}