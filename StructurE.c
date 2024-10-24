// Structure
/*Name : Owaya E Augustine
  REG  : CT101/G/23524/24
  Date : 20/10/2024
 */
 
#include <stdio.h>
#include <string.h>

struct book {
	char title [30];
	char author [30];
	int publicationyear;
	char ISBN [13];
	float price;
};
int main(){
	struct book story;
	
	strcpy(story.title,"Introduction to C Programming");
	strcpy(story.author,"John Smith");
	story.publicationyear = 2022;
	strcpy(story.ISBN,"9780131103627");
	story.price = 49.99;
	
	printf("Title : %s\n",story.title);
	printf("Author : %s\n",story.author);
	printf("Publication year : %d\n",story.publicationyear);
	printf("ISBN : %s\n",story.ISBN);
	printf("Price : %.2f\n",story.price);
	
	return 0;
}