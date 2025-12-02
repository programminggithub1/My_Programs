#include <stdio.h>
#include <string.h>

typedef struct {
    char title[50];
    char director[50];
    int year;
    char genre[30];
} Movie;

void addMovie(Movie *m);
void displayMovies(Movie movies[], int n);
void searchMovie(Movie movies[], int n, char searchTitle[]);
void updateMovie(Movie movies[], int n, char searchTitle[]);

void main() {
    Movie movies[50];
    int n, choice;
    char searchTitle[50];

    printf("Enter number of movies to add: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Movie %d:\n", i + 1);
        addMovie(&movies[i]);
    }

    do {
        printf("\n--- Movie Database Menu ---\n");
        printf("1. Display all movies\n");
        printf("2. Search movie by title\n");
        printf("3. Update movie details\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                displayMovies(movies, n);
                break;
            case 2:
                printf("Enter movie title to search: ");
                scanf("%s", searchTitle);
                searchMovie(movies, n, searchTitle);
                break;
            case 3:
                printf("Enter movie title to update: ");
                scanf("%s", searchTitle);
                updateMovie(movies, n, searchTitle);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 4);
}

void addMovie(Movie *m) {
    printf("Enter Title: ");
    scanf("%s", m->title);
    printf("Enter Director: ");
    scanf("%s", m->director);
    printf("Enter Release Year: ");
    scanf("%d", &m->year);
    printf("Enter Genre: ");
    scanf("%s", m->genre);
}

void displayMovies(Movie movies[], int n) {
    printf("\n--- Movie List ---\n");
    for(int i=0; i<n; i++) {
        printf("\nTitle: %s\n", movies[i].title);
        printf("Director: %s\n", movies[i].director);
        printf("Year: %d\n", movies[i].year);
        printf("Genre: %s\n", movies[i].genre);
    }
}

void searchMovie(Movie movies[], int n, char searchTitle[]) {
    for(int i=0; i<n; i++) {
        if(strcmp(movies[i].title, searchTitle) == 0) {
            printf("\nMovie Found!\n");
            printf("Title: %s\n", movies[i].title);
            printf("Director: %s\n", movies[i].director);
            printf("Year: %d\n", movies[i].year);
            printf("Genre: %s\n", movies[i].genre);
            return;
        }
    }
    printf("Movie not found.\n");
}

void updateMovie(Movie movies[], int n, char searchTitle[]) {
    for(int i=0; i<n; i++) {
        if(strcmp(movies[i].title, searchTitle) == 0) {
            printf("\nEnter new details for movie '%s':\n", searchTitle);
            addMovie(&movies[i]);
            printf("Movie updated successfully!\n");
            return;
        }
    }
    printf("Movie not found.\n");
}
