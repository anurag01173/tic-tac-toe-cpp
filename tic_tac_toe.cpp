  #include <iostream>
using namespace std;

char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

void displayBoard()
{
    cout << "\n";
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << "\n";
    cout << "---|---|---\n";
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << "\n";
    cout << "---|---|---\n";
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "\n";
}

void playerMove(char player)
{
    int position;

    while (true)
    {
        cout << "Player " << player << ", enter position: ";
        cin >> position;

        if (position < 1 || position > 9)
        {
            cout << "Enter a number from 1 to 9.\n";
            continue;
        }

        int row = (position - 1) / 3;
        int col = (position - 1) % 3;

        if (board[row][col] == 'X' || board[row][col] == 'O')
        {
            cout << "Position already taken.\n";
        }
        else
        {
            board[row][col] = player;
            break;
        }
    }
}

bool checkWinner(char player)
{
    // Rows
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == player &&
            board[i][1] == player &&
            board[i][2] == player)
        {
            return true;
        }
    }

    // Columns
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == player &&
            board[1][i] == player &&
            board[2][i] == player)
        {
            return true;
        }
    }

    // Diagonal 1
    if (board[0][0] == player &&
        board[1][1] == player &&
        board[2][2] == player)
    {
        return true;
    }

    // Diagonal 2
    if (board[0][2] == player &&
        board[1][1] == player &&
        board[2][0] == player)
    {
        return true;
    }

    return false;
}

bool checkDraw()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != 'X' && board[i][j] != 'O')
            {
                return false;
            }
        }
    }

    return true;
}

void computerMove()
{
    // Try to win
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != 'X' && board[i][j] != 'O')
            {
                char temp = board[i][j];

                board[i][j] = 'O';

                if (checkWinner('O'))
                    return;

                board[i][j] = temp;
            }
        }
    }

    // Try to block player
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != 'X' && board[i][j] != 'O')
            {
                char temp = board[i][j];

                board[i][j] = 'X';

                if (checkWinner('X'))
                {
                    board[i][j] = 'O';
                    return;
                }

                board[i][j] = temp;
            }
        }
    }

    // Take center
    if (board[1][1] != 'X' && board[1][1] != 'O')
    {
        board[1][1] = 'O';
        return;
    }

    // Take first empty position
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != 'X' && board[i][j] != 'O')
            {
                board[i][j] = 'O';
                return;
            }
        }
    }
}

int main()
{
    int choice;

    cout << "====================\n";
    cout << "    TIC TAC TOE\n";
    cout << "====================\n";

    cout << "1. Two Players\n";
    cout << "2. Play with Computer\n";
    cout << "Enter choice: ";
    cin >> choice;

    // Two player game
    if (choice == 1)
    {
        char player = 'X';

        while (true)
        {
            displayBoard();

            playerMove(player);

            if (checkWinner(player))
            {
                displayBoard();
                cout << "Player " << player << " wins!\n";
                break;
            }

            if (checkDraw())
            {
                displayBoard();
                cout << "Game Draw!\n";
                break;
            }

            if (player == 'X')
                player = 'O';
            else
                player = 'X';
        }
    }

    // Player vs Computer
    else if (choice == 2)
    {
        while (true)
        {
            displayBoard();

            // Player X
            playerMove('X');

            if (checkWinner('X'))
            {
                displayBoard();
                cout << "You win!\n";
                break;
            }

            if (checkDraw())
            {
                displayBoard();
                cout << "Game Draw!\n";
                break;
            }

            // Computer O
            cout << "Computer's turn...\n";
            computerMove();

            if (checkWinner('O'))
            {
                displayBoard();
                cout << "Computer wins!\n";
                break;
            }

            if (checkDraw())
            {
                displayBoard();
                cout << "Game Draw!\n";
                break;
            }
        }
    }

    else
    {
        cout << "Invalid choice!\n";
    }

    return 0;
}