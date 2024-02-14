//CODESOFT TASK 3
#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char turn = 'X';
int row, column;
bool draw = false;

void display_board() {
    system("cls");
    /*the above  function allows to modify the input in the same board */
    cout << "\n\n\tTic Tac Toe Game\n\n";
    cout << "\tPlayer 1 --> X "<<endl;
    cout<<"Player 2 --> O " << endl;
    cout << "\t     |     |     \n";
    cout << "\t  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "  \n";
    cout << "\t_____|_____|_____\n";
    cout << "\t     |     |     \n";
    cout << "\t  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "  \n";
    cout << "\t_____|_____|_____\n";
    cout << "\t     |     |     \n";
    cout << "\t  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "  \n";
    cout << "\t     |     |     \n";
}

void player_turn() {
    int choice;
    if (turn == 'X')
        cout << "\n\tPlayer 1 [X] turn: ";
    if (turn == 'O')
        cout << "\n\tPlayer 2 [O] turn: ";
    cin >> choice;

    switch (choice) {
        case 1:
            row = 0;
            column = 0;
            break;
        case 2:
            row = 0;
            column = 1;
            break;
        case 3:
            row = 0;
            column = 2;
            break;
        case 4:
            row = 1;
            column = 0;
            break;
        case 5:
            row = 1;
            column = 1;
            break;
        case 6:
            row = 1;
            column = 2;
            break;
        case 7:
            row = 2;
            column = 0;
            break;
        case 8:
            row = 2;
            column = 1;
            break;
        case 9:
            row = 2;
            column = 2;
            break;
        default:
            cout << "Invalid Move";
    }

    if (turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O') {
        board[row][column] = 'X';
        turn = 'O';
    } else if (turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O') {
        board[row][column] = 'O';
        turn = 'X';
    } else {
        cout << "Box already filled! Please choose another!!\n";
        player_turn();
    }
    display_board();
}

bool gameover() {
    for (int i = 0; i < 3; i++)
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
            return false;

    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
        return false;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return true;

    draw = true;
    return false;
}

bool playAgain() {
    char choice;
    cout << "Do you want to play again? (y/n): ";
    cin >> choice;
    return (choice == 'y' || choice == 'Y');
}

int main() {
    bool play_again = true;
    while (play_again) {
        while (gameover()) {
            display_board();
            player_turn();
            gameover();
        }
        if (turn == 'X' && draw == false)
            cout << "Player 2 --> O Wins!!! Congratulations" << endl;
        else if (turn == 'O' && draw == false)
            cout << "Player 1 --> X Wins!!! Congratulations" << endl;
        else
            cout << "GAME DRAW!!!\n";

        play_again = playAgain();
        if (play_again) {
            // Reset the game variables
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    board[i][j] = '1' + i * 3 + j;
                }
            }
            turn = 'X';
            draw = false;
        }
    }
    cout << "Thanks for playing Tic Tac Toe created by AKSAY !\n";
    return 0;
}
/*Decleration:
     the above program was truely learnt by understanding the concept of
     2D matrix and with the help of my mentor I coded the above
     program and with the full commitent towards the task
     AKSAY M */
