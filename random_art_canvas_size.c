#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
        //initiate srand
        srand(time(NULL));

        //have the user choose a number
        int num;
        printf("Please enter a number to use for the list: \n");
        scanf("%d", &num);

        //allocate memory for the list of numbers
        int * rand_art_sizes = (int *)malloc(num * sizeof(int));
        printf("size of rand_art_sizes is %d\n", sizeof(int));

        //assign values inside array of numbers
        for(int i = 0; i < num; i++) {
              rand_art_sizes[i] = 32 * i;
              printf("%d x %d\n", *(rand_art_sizes + i), rand_art_sizes[i]);
        }

        //get a random value from the list for the user
        int rand_selection = rand() % (num + 1);

        printf("%d x %d is your pizel canvas size today\n", 
                         rand_art_sizes[rand_selection],
                         rand_art_sizes[rand_selection]);

        rand_art_sizes = NULL;
        free(rand_art_sizes);
        return 0;
}
