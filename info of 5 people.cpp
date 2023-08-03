#include <stdio.h>

struct address {
    int houseNo;
    int BlockNo;
    char city[30], state[30];
};

void showAdd(struct address *people) {
	
		printf("The house number is = %d\n",people->houseNo);
	    printf("The block number is = %d\n",people->BlockNo);
	    printf("The city name is = %s\n",people->city);
	    printf("The  state name is = %s\n",people->state);
	
	
}

int main() {
	
	struct address people[2];
	
	for(int i = 0; i < 2; i++){
	
	printf("Enter your house number: ");
	scanf("%d",&people[i].houseNo);
	printf("Enter your block number: ");
	scanf("%d",&people[i].BlockNo);
	printf("Enter name of your city: ");
	scanf("%s",people[i].city);
	getchar();
	printf("Enter name of your state: ");
	scanf("%s",people[i].state);
	getchar();
	showAdd(&people[i]);
}

}
