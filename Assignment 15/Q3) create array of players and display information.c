#include <stdio.h>

typedef struct player {
    char name[10];
    int matches;
    int runs;
    int wickets;
} player;

void acceptplayers(player players[], int n); //declaration
void displayplayers(player players[], int n);
void maxruns(player players[], int n);
void maxwickets(player players[], int n);

void main() {
    int n;
    printf("Enter number of players: ");
    scanf("%d", &n);

    player team[50];
    acceptplayers(team, n);   // call
    displayplayers(team, n);  // call
    maxruns(team, n);         // call
    maxwickets(team, n);      // call
}

void acceptplayers(player players[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of player %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", players[i].name);
        printf("Enter matches: ");
        scanf("%d", &players[i].matches);
        printf("Enter runs: ");
        scanf("%d", &players[i].runs);
        printf("Enter wickets: ");
        scanf("%d", &players[i].wickets);
    }
}

void displayplayers(player players[], int n) {
    printf("\n--- Player Information ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nName: %s", players[i].name);
        printf("\nMatches: %d", players[i].matches);
        printf("\nRuns: %d", players[i].runs);
        printf("\nWickets: %d\n", players[i].wickets);
    }
}

void maxruns(player players[], int n) {
    int max = players[0].runs;
    for (int i = 1; i < n; i++) {
        if (players[i].runs > max)
            max = players[i].runs;
    }
    printf("\nPlayer(s) with maximum runs (%d):\n", max);
    for (int i = 0; i < n; i++) {
        if (players[i].runs == max) {
            printf("%s (Matches: %d, Runs: %d, Wickets: %d)\n",
                   players[i].name, players[i].matches, players[i].runs, players[i].wickets);
        }
    }
}

void maxwickets(player players[], int n) {
    int max = players[0].wickets;
    for (int i = 1; i < n; i++) {
        if (players[i].wickets > max)
            max = players[i].wickets;
    }
    printf("\nPlayer(s) with maximum wickets (%d):\n", max);
    for (int i = 0; i < n; i++) {
        if (players[i].wickets == max) {
            printf("%s (Matches: %d, Runs: %d, Wickets: %d)\n",
                   players[i].name, players[i].matches, players[i].runs, players[i].wickets);
        }
    }
}
