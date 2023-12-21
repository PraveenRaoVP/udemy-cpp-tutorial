#include <bits/stdc++.h>

using std::cout;
using std::cin;
using std::string;

void printGrid(int grid[3][3]) {
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(grid[i][j] % 2 ==0){
                cout << "X" << " ";
            } else if(grid[i][j] % 2 == 1 && grid[i][j] != -1) {
                cout <<"O"<< " ";
            } else{
                cout << "." << " ";
            }
        }
        cout << "\n";
    }
}

bool checkIsGameOver(int grid[3][3]) {
    for(int i=0;i<3;i++){
        if(grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2] && grid[i][0] != -1){
            return true;
        }
    }
    for(int i=0;i<3;i++){
        if(grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i] && grid[0][i] != -1){
            return true;
        }
    }
   
    if(grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2] && grid[0][0] != -1){
        return true;
    }
    
    if(grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0] && grid[0][2] != -1){
        return true;
    }
    return false;
}


int main() {
    int grid[3][3];
    memset(grid, -1, sizeof(grid));
    string player1, player2;
    cout << "Enter the name of the first player: ";
    cin >> player1;
    cout << "Enter the name of the second player: ";
    cin >> player2;

    cout << "Welcome to Tic-Tac-Toe!\n";

    printGrid(grid);

    cout << "To play, you need to enter the row and column of the grid you want to place your mark in.\n";
    cout << "The grid is marked from 1 to 3\n";
    cout << "For example, if you want to place your mark in the top left corner, you would enter 1 1\n";
    cout << "If you want to place your mark in the bottom right corner, you would enter 3 3\n";
    cout << "The first player to get 3 marks in a row, column, or diagonal wins!\n";

    cout << "Let's begin!\n";

    int row, col;
    int turn = 0;

    while(true){
        if(turn % 2 == 0){
            cout << "X's Turn\n";
        }
        else{
            cout << "O's Turn\n";
        }

        cout << "Enter the row and column of the grid you want to place your mark in: ";
        cin >> row >> col;

        if(grid[row-1][col-1] != -1){
            cout << "Grid is already taken. Try again.\n";
            continue;
        } else{
            grid[row-1][col-1] = turn % 2;
        }

        printGrid(grid);
        if(checkIsGameOver(grid)){
            if(turn % 2 == 0){
                cout << player1 << " wins!\n";
            }
            else{
                cout << player2 << " wins!\n";
            }
            break;
        }
        if(turn == 9) {
            cout << "Game ended in a draw :( \n";
        }
        turn++;
    }

    char choice;

    cout << "Thanks for playing!\n";
    cout << "Do you want to continue playing? (y/n): ";
    cin >> choice; s

    if(choice == 'y' || choice == 'Y'){
        main();
    } else{
        cout << "See you again!\n";
    }

    return 0;
}
