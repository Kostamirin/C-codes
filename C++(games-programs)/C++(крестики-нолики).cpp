#include <iostream>
#include <ctime>


int litleRand(int first, int second);
void selectTic(char player, char computer, int first, int second);
void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);


int main(){
    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',};
    int first;
    int second;
    char player;
    char computer;

    selectTic(player, computer, first, second);

    //delete first;
    //delete second;

    bool running = true;
    drawBoard(spaces);

    while(running){
        playerMove(spaces, player);
        drawBoard(spaces);

        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
    }
    std::cout <<"Thanks for playing !" <<'\n';

    return 0;
}

void drawBoard(char *spaces){
    std::cout <<'\n';
    std::cout <<"     |     |     " <<'\n';
    std::cout <<"   "<<spaces[0] <<" | "<<spaces[1] <<"   | "<< spaces[2] <<"  "  <<'\n';
    std::cout <<"_____|_____|_____" <<'\n';
    std::cout <<"     |     |     " <<'\n';
    std::cout <<"   "<<spaces[3] <<" | "<<spaces[4] <<"   | "<< spaces[5] <<"  "  <<'\n';
    std::cout <<"_____|_____|_____" <<'\n';
    std::cout <<"     |     |     " <<'\n';
    std::cout <<"   "<<spaces[6] <<" | "<<spaces[7] <<"   | "<< spaces[8] <<"  "  <<'\n';
    std::cout <<"     |     |     " <<'\n'  <<'\n';
}
void playerMove(char *spaces, char player){
    int number;
    do{
        std::cout <<"You playing a " <<player <<'\n';
        std::cout <<"Enter a spot to place a marker(1 - 9):";
        std::cin >>number;
        number --;
        if(spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
    }while( number > 0 || number < 8);
}
void computerMove(char *spaces, char computer){
    int number;
    while(true){
        number = rand() % 9;

        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
}
bool checkWinner(char *spaces, char player, char computer){
    if((spaces[0] != ' ')  && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])){
        spaces[0] == player ? std::cout <<"You WIN !\n" : std::cout <<"You LOSE\n";
    }
    else if((spaces[3] != ' ')  && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])){
        spaces[3] == player ? std::cout <<"You WIN !\n" : std::cout <<"You LOSE\n";
    }
    else if((spaces[6] != ' ')  && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])){
        spaces[6] == player ? std::cout <<"You WIN !\n" : std::cout <<"You LOSE\n";        
    }
    else if((spaces[0] != ' ')  && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])){
        spaces[0] == player ? std::cout <<"You WIN !\n" : std::cout <<"You LOSE\n";
    }
    else if((spaces[1] != ' ')  && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])){
        spaces[1] == player ? std::cout <<"You WIN !\n" : std::cout <<"You LOSE\n";
    }
    else if((spaces[2] != ' ')  && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])){
        spaces[2] == player ? std::cout <<"You WIN !\n" : std::cout <<"You LOSE\n";
    }
    else if((spaces[0] != ' ')  && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])){
        spaces[0] == player ? std::cout <<"You WIN !\n" : std::cout <<"You LOSE\n";
    }
    else if((spaces[2] != ' ')  && (spaces[2] == spaces[4]) && (spaces[5] == spaces[6])){
        spaces[2] == player ? std::cout <<"You WIN ! \n" : std::cout <<"You LOSE! \n";
    }
    else{
        return false;
    }
    
return true;
}
bool checkTie(char *spaces){
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    std::cout <<"It`s TIE!" <<'\n';
    return 0;
}

int litleRand(int first, int second){
    first = rand() % 2;
    second = rand() % 2;
    return 0;
} 

void selectTic(char player, char computer, int first, int second){
    litleRand(first, second);

    if(first == 0 && second == 1){
        player = 'X';
        computer = 'O';
    }
    else if(first == 1 && second == 0){
        player = 'O';
        computer = 'X';
    }
    else{
        do{
            selectTic(player, computer, first, second);
        }while(first == second);
    }
}


