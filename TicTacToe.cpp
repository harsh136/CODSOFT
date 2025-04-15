#include<iostream>
using namespace std;
void board(char *space);
void move(char *space, char player);
bool checkwin(char *space, char player);
bool checktie(char *space);
int main()
{
    char space[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    bool run = true;
    char playAgain;

    do
    {
        for (int i = 0; i < 9; i++)
        {
            space[i] = ' ';
        }
        player = 'X';
        run = true;
        board(space);

        while (run)
        {
            cout << "Player " << player << "'s turn:\n";
            move(space, player);
            board(space);

            if (checkwin(space, player))
            {
                cout << "Player " << player << " wins!\n";
                run = false;
            }
            else if (checktie(space))
            {
                cout << "It's a Tie!\n";
                run = false;
            }
            else
            {
                player = (player == 'X') ? 'O' : 'X';
            }
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout<<"Thanks for playing!\n";
    return 0;
}
void board(char *space){
    cout<<'\n';
    cout<< "     |     |     "<<'\n';
    cout<< "  " << space[0] << "  |  " << space[1] << "  |  " << space[2] << "  "<<'\n';
    cout<< "-----|-----|-----"<<'\n';
    cout<< "     |     |     "<<'\n';
    cout<< "  " << space[3] << "  |  " << space[4] << "  |  " << space[5] << "  "<<'\n';
    cout<< "-----|-----|-----"<<'\n';
    cout<< "     |     |     "<<'\n';
    cout<< "  " << space[6] << "  |  " << space[7] << "  |  " << space[8] << "  "<<'\n';
    cout<< "     |     |     "<<'\n';
    cout<<'\n';
}
void move(char *space, char player){
    int num;
    do
    {
        cout<<"Enter a spot (1-9): ";
        cin>> num;
        num--;
        if (num >= 0 && num < 9 && space[num] == ' ')
        {
            space[num] = player;
            break;
        }
        else
        {
            cout << "Invalid move. Please enter a number between 1 and 9 for an empty spot.\n";
        }

    } while (true);
}
bool checkwin(char *space, char player){
    if ((space[0] != ' ') && (space[0] == space[1]) && (space[1] == space[2]))
    {
        return true;
    }
    else if ((space[3] != ' ') && (space[3] == space[4]) && (space[4] == space[5]))
    {
        return true;
    }
    else if ((space[6] != ' ') && (space[6] == space[7]) && (space[7] == space[8]))
    {
        return true;
    }
    else if ((space[0] != ' ') && (space[0] == space[3]) && (space[3] == space[6]))
    {
        return true;
    }
    else if ((space[1] != ' ') && (space[1] == space[4]) && (space[4] == space[7]))
    {
        return true;
    }
    else if ((space[2] != ' ') && (space[2] == space[5]) && (space[5] == space[8]))
    {
        return true;
    }
    else if ((space[0] != ' ') && (space[0] == space[4]) && (space[4] == space[8]))
    {
        return true;
    }
    else if ((space[2] != ' ') && (space[2] == space[4]) && (space[4] == space[6]))
    {
        return true;
    }
    else {
        return false;
    }
}
bool checktie(char *space){
    for (int i = 0; i < 9; i++)
    {
        if (space[i] == ' ')
        {
            return false;
        }
    }
    return true;
}
