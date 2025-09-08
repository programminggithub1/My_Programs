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

void main() {
    int choice = -1;
    while (choice != 0) {
        printf("\n=== PLAYER MANAGEMENT SYSTEM ===\n");
        printf("1. Add Player\n");
        printf("2. Remove Player\n");
        printf("3. Search Player\n");
        printf("4. Update Player Data\n");
        printf("5. Display All Players\n");
        printf("6. Display Sorted Players\n");
        printf("7. Display Top 3 Players (Runs & Wickets)\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) 
            addPlayer();
        else if (choice == 2) 
            removePlayer();
        else if (choice == 3) 
            searchPlayer();
        else if (choice == 4) 
            updatePlayer();
        else if (choice == 5) 
            displayAllPlayers();
        else if (choice == 6) 
            displaySortedPlayers();
        else if (choice == 7) 
            top3Players();
        else if (choice == 0) 
            printf("Exiting...\n");
        else 
            printf("Invalid choice!\n");
    }

    free(players);  
}

// Add Player
void addPlayer() {
    if (players == NULL) {
      
        players = (Player*)malloc(sizeof(Player));
    } else {
        players = (Player*)realloc(players, (playerCount + 1) * sizeof(Player));
    }

    if (players == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    Player *p = &players[playerCount];
    p->id = playerCount + 1;
	printf("Enter id Number: ");
    scanf("%d", &p->id);
    printf("Enter Jersey Number: ");
    scanf("%d", &p->jerseyNo);
    printf("Enter Player Name: ");
    scanf("%s", p->name);
    printf("Enter Runs: ");
    scanf("%d", &p->runs);
    printf("Enter Wickets: ");
    scanf("%d", &p->wickets);
    printf("Enter Matches Played: ");
    scanf("%d", &p->matches);

    playerCount++;
    printf("? Player added successfully!\n");
}

// Remove Player
void removePlayer() {
    if (playerCount == 0) {
        printf("No players to remove!\n");
        return;
    }
    int id;
    printf("Enter id Number to remove: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < playerCount; i++) {
        if (players[i].id == id) {
            found = 1;
            for (int j = i; j < playerCount - 1; j++) {
                players[j] = players[j + 1];
            }
            playerCount--;

            if (playerCount == 0) {
                free(players);
                players = NULL;
            } else {
                players = (Player*)realloc(players, playerCount * sizeof(Player));
            }

            printf("? Player removed successfully!\n");
            break;
        }
    }
    if (!found) {
        printf("? Player not found!\n");
    }
}

// Search Player
void searchPlayer() {
    if (playerCount == 0) {
        printf("No players available!\n");
        return;
    }
        int id;
        printf("Enter id Number: ");
        scanf("%d", &id);
        for (int i = 0; i < playerCount; i++) {
            if (players[i].id == id) {
                printf("Found: ID:%d | Jersey:%d | Name:%s | Runs:%d | Wickets:%d | Matches:%d\n",
                       players[i].id, players[i].jerseyNo, players[i].name,
                       players[i].runs, players[i].wickets, players[i].matches);
                return;
            }
        }
    printf("? Player not found!\n");
}

// Update Player
void updatePlayer() {
    if (playerCount == 0) {
        printf("No players available!\n");
        return;
    }
    int jersey;
    printf("Enter Jersey Number to update: ");
    scanf("%d", &jersey);

    for (int i = 0; i < playerCount; i++) {
        if (players[i].jerseyNo == jersey) {
            printf("Enter New Runs: ");
            scanf("%d", &players[i].runs);
            printf("Enter New Wickets: ");
            scanf("%d", &players[i].wickets);
            printf("Enter New Matches: ");
            scanf("%d", &players[i].matches);
            printf("? Player updated successfully!\n");
            return;
        }
    }
    printf("? Player not found!\n");
}

// Display All Players
void displayAllPlayers() {
    if (playerCount == 0) {
        printf("No players available!\n");
        return;
    }
    printf("\n=== Player List ===\n");
    for (int i = 0; i < playerCount; i++) {
        printf("ID:%d | Jersey:%d | Name:%s | Runs:%d | Wickets:%d | Matches:%d\n",
               players[i].id, players[i].jerseyNo, players[i].name,
               players[i].runs, players[i].wickets, players[i].matches);
    }
}

// Display Sorted Players 
void displaySortedPlayers() {
    if (playerCount == 0) {
        printf("No players available!\n");
        return;
    }
    int choice;
    printf("\nSort by:\n1. Runs (Ascending)\n2. Wickets (Ascending)\nEnter choice: ");
    scanf("%d", &choice);

    Player temp;
    for (int i = 0; i < playerCount - 1; i++) {
        for (int j = 0; j < playerCount - i - 1; j++) {
            int swap = 0;
            if (choice == 1 && players[j].runs > players[j + 1].runs) swap = 1;
            else if (choice == 2 && players[j].wickets > players[j + 1].wickets) swap = 1;

            if (swap) {
                temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }
    displayAllPlayers();
}

// Display Top 3 Players
void top3Players() {
    if (playerCount < 3) {
        printf("Not enough players to show top 3!\n");
        return;
    }

    // Sort by Runs 
    for (int i = 0; i < playerCount - 1; i++) {
        for (int j = 0; j < playerCount - i - 1; j++) {
            if (players[j].runs < players[j + 1].runs) {
                Player temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }
    printf("\nTop 3 Players by Runs:\n");
    for (int i = 0; i < 3; i++) {
        printf("jersyno::%d name::%s Runs:: %d\n", players[i].jerseyNo,players[i].name, players[i].runs);
    }

    // Sort by Wickets 
    for (int i = 0; i < playerCount - 1; i++) {
        for (int j = 0; j < playerCount - i - 1; j++) {
            if (players[j].wickets < players[j + 1].wickets) {
                Player temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }
    printf("\nTop 3 Players by Wickets:\n");
    for (int i = 0; i < 3; i++) {
        printf("jersyno::%d name::%s Wickets:: %d\n",players[i].jerseyNo, players[i].name, players[i].wickets);
    }
}
