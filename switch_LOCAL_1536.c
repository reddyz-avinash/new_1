#include <stdio.h>

int main() {
    int choice;
     printf("Enter a number (1-3): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Btech cse\n");
	    printf("not");
	    printf("nothing");
            break;
	    case 2:
            printf("Btech aiml\n");
	    printf("not");
            break;
	     case 3:
            printf("Btech mec\n");
            break;
	     case 4:
	    printf("pharmc\n");
	    break;
	     case 5:
            printf("btech civil\n");
            break;
	     case 5:
	    printf("pharm\n");
         break:
default:
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
    }

    return 0;
}
