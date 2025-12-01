#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    int jerseyNo;
    char name[50];
    int runs;
    int wickets;
    int matches;
} Player;

Player *players = NULL;   
int playerCount = 0;

void addPlayer();
void removePlayer();
void searchPlayer();
void updatePlayer();
void displayAllPlayers();
void displaySortedPlayers();
void top3Players();

// MAIN
void main() {
    int choice = -1;
    while (choice != 0) {
        printf("\n=== PLAYER MANAGEMENT SYSTEM ===\n");
        printf("1. Add Player\n");
        printf("2. Remove Player\n");
        printf("3. Search Player\n");
        printf("4. Update Player\n");
        printf("5. Display All Players\n");
        printf("6. Display Sorted by Runs\n");
        printf("7. Top 3 Players (Runs & Wickets)\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addPlayer(); break;
            case 2: removePlayer(); break;
            case 3: searchPlayer(); break;
            case 4: updatePlayer(); break;
            case 5: displayAllPlayers(); break;
            case 6: displaySortedPlayers(); break;
            case 7: top3Players(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    }

    free(players);
}

// ADD PLAYER
void addPlayer() {
    players = realloc(players, (playerCount + 1) * sizeof(Player));
    if (players == NULL) {
        printf("Memory error!\n");
        exit(1);
    }

    Player *p = &players[playerCount];

    printf("Enter Player ID: ");
    scanf("%d", &p->id);
    printf("Enter Jersey Number: ");
    scanf("%d", &p->jerseyNo);
    printf("Enter Name: ");
    scanf("%s", p->name);
    printf("Enter Runs: ");
    scanf("%d", &p->runs);
    printf("Enter Wickets: ");
    scanf("%d", &p->wickets);
    printf("Enter Matches: ");
    scanf("%d", &p->matches);

    playerCount++;
    printf("✔ Player Added Successfully!\n");
}

// REMOVE PLAYER
void removePlayer() {
    if (playerCount == 0) {
        printf("No players to remove!\n");
        return;
    }

    int id, found = -1;
    printf("Enter Player ID to Remove: ");
    scanf("%d", &id);

    for (int i = 0; i < playerCount; i++) {
        if (players[i].id == id) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Player not found!\n");
        return;
    }

    for (int i = found; i < playerCount - 1; i++) {
        players[i] = players[i + 1];
    }

    playerCount--;
    players = realloc(players, playerCount * sizeof(Player));

    printf("✔ Player Removed Successfully!\n");
}

// SEARCH PLAYER
void searchPlayer() {
    int id;
    printf("Enter Player ID to Search: ");
    scanf("%d", &id);

    for (int i = 0; i < playerCount; i++) {
        if (players[i].id == id) {
            printf("\nPlayer Found:\n");
            printf("ID: %d\nJersey: %d\nName: %s\nRuns: %d\nWickets: %d\nMatches: %d\n",
                   players[i].id, players[i].jerseyNo, players[i].name,
                   players[i].runs, players[i].wickets, players[i].matches);
            return;
        }
    }
    printf("Player not found!\n");
}

// UPDATE PLAYER
void updatePlayer() {
    int id;
    printf("Enter Player ID to Update: ");
    scanf("%d", &id);

    for (int i = 0; i < playerCount; i++) {
        if (players[i].id == id) {
            printf("Enter New Name: ");
            scanf("%s", players[i].name);
            printf("Enter New Runs: ");
            scanf("%d", &players[i].runs);
            printf("Enter New Wickets: ");
            scanf("%d", &players[i].wickets);
            printf("Enter New Matches: ");
            scanf("%d", &players[i].matches);

            printf("✔ Player Updated Successfully!\n");
            return;
        }
    }
    printf("Player Not Found!\n");
}

// DISPLAY ALL
void displayAllPlayers() {
    if (playerCount == 0) {
        printf("No players to display!\n");
        return;
    }

    printf("\n=== ALL PLAYERS ===\n");
    for (int i = 0; i < playerCount; i++) {
        printf("%d | Jersey:%d | %s | Runs:%d | Wickets:%d | Matches:%d\n",
               players[i].id, players[i].jerseyNo, players[i].name,
               players[i].runs, players[i].wickets, players[i].matches);
    }
}

// SORTED BY RUNS
void displaySortedPlayers() {
    if (playerCount == 0) {
        printf("No players available!\n");
        return;
    }

    Player *copy = malloc(playerCount * sizeof(Player));
    memcpy(copy, players, playerCount * sizeof(Player));

    for (int i = 0; i < playerCount - 1; i++) {
        for (int j = 0; j < playerCount - i - 1; j++) {
            if (copy[j].runs < copy[j + 1].runs) {
                Player temp = copy[j];
                copy[j] = copy[j + 1];
                copy[j + 1] = temp;
            }
        }
    }

    printf("\n=== SORTED BY RUNS ===\n");
    for (int i = 0; i < playerCount; i++) {
        printf("%s | Runs: %d\n", copy[i].name, copy[i].runs);
    }

    free(copy);
}

// TOP 3
void top3Players() {
    if (playerCount < 3) {
        printf("Not enough players!\n");
        return;
    }

    Player *runsSort = malloc(playerCount * sizeof(Player));
    memcpy(runsSort, players, playerCount * sizeof(Player));

    Player *wickSort = malloc(playerCount * sizeof(Player));
    memcpy(wickSort, players, playerCount * sizeof(Player));

    // Sort by runs
    for (int i = 0; i < playerCount - 1; i++) {
        for (int j = 0; j < playerCount - i - 1; j++) {
            if (runsSort[j].runs < runsSort[j + 1].runs) {
                Player temp = runsSort[j];
                runsSort[j] = runsSort[j + 1];
                runsSort[j + 1] = temp;
            }
        }
    }

    // Sort by wickets
    for (int i = 0; i < playerCount - 1; i++) {
        for (int j = 0; j < playerCount - i - 1; j++) {
            if (wickSort[j].wickets < wickSort[j + 1].wickets) {
                Player temp = wickSort[j];
                wickSort[j] = wickSort[j + 1];
                wickSort[j + 1] = temp;
            }
        }
    }

    printf("\n=== TOP 3 BY RUNS ===\n");
    for (int i = 0; i < 3; i++)
        printf("%s | Runs: %d\n", runsSort[i].name, runsSort[i].runs);

    printf("\n=== TOP 3 BY WICKETS ===\n");
    for (int i = 0; i < 3; i++)
        printf("%s | Wickets: %d\n", wickSort[i].name, wickSort[i].wickets);

    free(runsSort);
    free(wickSort);
}
