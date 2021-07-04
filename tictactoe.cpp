// This is a 2 player Tic-Tac-Toe game
//

#include <iostream>
using namespace std;

char boardMatrix [3][3] = {'1','2','3','4','5','6','7','8','9'};
char player = 'X'; // declare default player as 'X'
int count; // declare a variable to limit user input upto 9 times

void DrawBoard(){

    std::cout<<"--Tic Tac Toe Game--"<<std::endl;
    for (auto & i : boardMatrix) { // (int i = 0; i < 3; i++)
        for (char j : i) { // (int j = 0; j < 3; j++)
            std::cout<<" "<<j<<" "<<"|"; // std::cout<<" "<<boardMatrix[i][j]<<" "<<"|"
        }
        std::cout<<"\n-------------"<<std::endl;
    }
}

void TogglePlayer(){
    // function for changing players between 'X' and 'O'
    if (player=='X') // if the player is 'X'
        player='O'; // if the player is 'X' then make it 'O'
    else // if the player is 'O'
        player='X'; // if the player is 'O' then make it 'X'
}

void InputByPlayers(){
    int a;
    std::cout<<"Hey, Player "<<player<<"! Please Enter a number where you wanna mark: ";
    std::cin>>a;
    if (a==1){
        if (boardMatrix[0][0]=='1')
            boardMatrix[0][0]=player;
        else{
            std::cout<<"The number you tried already used, please try again!";
            InputByPlayers();
        }
    }

    else if (a==2){
        if (boardMatrix[0][1]=='2')
            boardMatrix[0][1]=player;
        else{
            std::cout<<"The number you tried already used, please try again!";
            InputByPlayers();
        }
    }
    else if(a==3){
        if (boardMatrix[0][2]=='3')
            boardMatrix[0][2]=player;
        else{
            std::cout<<"The number you tried already used, please try again!";
            InputByPlayers();
        }
    }
    else if(a==4){
        if (boardMatrix[1][0]=='4')
            boardMatrix[1][0]=player;
        else{
            std::cout<<"The number you tried already used, please try again!";
            InputByPlayers();
        }
    }
    else if(a==5){
        if (boardMatrix[1][1]=='5')
            boardMatrix[1][1]=player;
        else{
            std::cout<<"The number you tried already used, please try again!";
            InputByPlayers();
        }
    }
    else if(a==6){
        if (boardMatrix[1][2]=='6')
            boardMatrix[1][2]=player;
        else{
            std::cout<<"The number you tried already used, please try again!";
            InputByPlayers();
        }
    }
    else if(a==7){
        if (boardMatrix[2][0]=='7')
            boardMatrix[2][0]=player;
        else{
            std::cout<<"The number you tried already used, please try again!";
            InputByPlayers();
        }
    }
    else if(a==8){
        if (boardMatrix[2][1]=='8')
            boardMatrix[2][1]=player;
        else{
            std::cout<<"The number you tried already used, please try again!";
            InputByPlayers();
        }
    }
    else if(a==9){
        if (boardMatrix[2][2]=='9')
            boardMatrix[2][2]=player;
        else{
            std::cout<<"The number you tried already used, please try again!";
            InputByPlayers();
        }
    }
}

char Winner(){
    if (boardMatrix[0][0]=='X' && boardMatrix[0][1]=='X' && boardMatrix[0][2]=='X')
        return 'X';
    if (boardMatrix[1][0]=='X' && boardMatrix[1][1]=='X' && boardMatrix[1][2]=='X')
        return 'X';
    if (boardMatrix[2][0]=='X' && boardMatrix[2][1]=='X' && boardMatrix[2][2]=='X')
        return 'X';

    if (boardMatrix[0][0]=='X' && boardMatrix[1][0]=='X' && boardMatrix[2][0]=='X')
        return 'X';
    if (boardMatrix[0][1]=='X' && boardMatrix[1][1]=='X' && boardMatrix[2][1]=='X')
        return 'X';
    if (boardMatrix[0][2]=='X' && boardMatrix[1][2]=='X' && boardMatrix[2][2]=='X')
        return 'X';

    if (boardMatrix[0][0]=='X' && boardMatrix[1][1]=='X' && boardMatrix[2][2]=='X')
        return 'X';

    if (boardMatrix[0][2]=='X' && boardMatrix[1][1]=='X' && boardMatrix[2][0]=='X')
        return 'X';
    // For second player
    if (boardMatrix[0][0]=='O' && boardMatrix[0][1]=='O' && boardMatrix[0][2]=='O')
        return 'O';
    if (boardMatrix[1][0]=='O' && boardMatrix[1][1]=='O' && boardMatrix[1][2]=='O')
        return 'O';
    if (boardMatrix[2][0]=='O' && boardMatrix[2][1]=='O' && boardMatrix[2][2]=='O')
        return 'O';

    if (boardMatrix[0][0]=='O' && boardMatrix[1][0]=='O' && boardMatrix[2][0]=='O')
        return 'O';
    if (boardMatrix[0][1]=='O' && boardMatrix[1][1]=='O' && boardMatrix[2][1]=='O')
        return 'O';
    if (boardMatrix[0][2]=='O' && boardMatrix[1][2]=='O' && boardMatrix[2][2]=='O')
        return 'O';

    if (boardMatrix[0][0]=='O' && boardMatrix[1][1]=='O' && boardMatrix[2][2]=='O')
        return 'O';

    if (boardMatrix[0][2]=='O' && boardMatrix[1][1]=='O' && boardMatrix[2][0]=='O')
        return 'O';

    return 'D';
}

int main() {
    count=0;
    DrawBoard();
    while (true) {
        count++;
        InputByPlayers();
        DrawBoard();
        if (Winner() == 'X'){
            std::cout << "Winner is Player X!";
            break;
        }
        else if (Winner()=='O') {
            std::cout << "Winner is Player O!";
            break;
        }
        else if (Winner()=='D' && count==9){
            std::cout<<"Match Draw!"<<endl;
            break;
        }
        TogglePlayer(); // Calling the function to change the player
    }
}
