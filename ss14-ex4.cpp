#include <stdio.h> 
int main() {
    char word[100]; 
    char character;
    int i;
     printf("ban hay nhap vao mot chuoi ky tu :");
     fgets(word,50,stdin);
	    printf("ban hay nhap mot ky tu bat ky: ");
	    scanf(" %c", &character); 
	    
    int count = 0;
		for (i = 0; word[i] != '\0'; i++) {
			if (word[i] == character) {
		        count++;
		    }
        }
    
    printf("Ky tu %c so lan xuat hien trong chuoi nay chinh la :%d\n", character, count);
    
    return 0;
}

