#include <iostream>

char board[3][3] = {{'1','2','3'},
                    {'4','5','6'},
                    {'7','8','9'}};

void drawBoard(){
    std::cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << std::endl;
}

//This function is to place the marker into the correct row and col
void placeMarker(int slot){
     int row = slot / 3;
     int col;

    if(slot%3 == 0){
        row -= 1;
        col = 2;
    } else{
        col = slot%3-1;
    }
    std::cout << row << "," << col << std::endl;
}

int main(){
    drawBoard();
    placeMarker(9);
}
