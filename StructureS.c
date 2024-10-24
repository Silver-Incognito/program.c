// Structure
/*Name : Owaya E Augustine
 REG   : CT101/G/23524/24
 Date  : 20/10/2024 */
 
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
	
	printf("Title : ");
	scanf ("%s",story.title);
	printf("Author:");
	scanf ("%s",story.author);
	printf ("Publication Year:");
	scanf ("%d",&story.publicationyear);
	printf("ISBN :");
	scanf ("%s",story.ISBN);
	printf("Price :");
	scanf ("%f",&story.price);
	
	return 0;
}