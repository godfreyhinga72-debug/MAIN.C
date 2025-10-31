/*
NAME; GODFREY HINGA NDUNGU
REG NO;CT101/G/26515/26515
DATE; 30 OCTOBER, 2025.
DESCRIPTION; 2D-ARRAY ROOM OCCUPANCY( ONE BRANCH)
*/

#include <stdio.h>

int main() {
    int occupancy[5][10];
    int floor, room;
    int occupied, vacant;
    int totalVacant = 0;


    int data[5][10] = {
        {1,0,1,1,0,1,1,1,0,1},  // 3 vacant
        {1,1,1,0,1,0,1,1,1,0},  // 3 vacant
        {0,1,1,1,1,1,0,1,0,1},  // 3 vacant
        {1,0,1,1,0,1,1,0,1,1},  // 3 vacant
        {1,1,0,1,1,1,1,0,1,0}   // 4 vacant
    };

    
    
    for (floor = 0; floor < 5; floor++) {
        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = data[floor][room];
        }
    }


    printf("ROOM OCCUPANCY STATUS (1 = Occupied, 0 = Vacant)\n\n");
    for (floor = 0; floor < 5; floor++) {
        printf("Floor %d: ", floor + 1);
        for (room = 0; room < 10; room++) {
            printf("%d ", occupancy[floor][room]);
        }
        printf("\n");
    }

    printf("\n--------------------------------------------\n");


    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;
        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        totalVacant += vacant;
        printf("Floor %d -> Occupied: %d | Vacant: %d\n", floor + 1, occupied, vacant);
    }

    printf("\nTotal Vacant Rooms in Branch: %d\n", totalVacant);
    printf("Total Occupied Rooms in Branch: %d\n", 50 - totalVacant);

    return 0;
}
