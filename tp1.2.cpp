#include "tp1.2.h"

int main() {

    std::cout << "Enter tenis count of wins of player 1 : ";
    int nbr_wins_player1;
    std::cin >> nbr_wins_player1;

    std::cout << "Enter tenis count of wins of player 2 : ";
    int nbr_wins_player2;
    std::cin >> nbr_wins_player2;

    print_tenis_score(nbr_wins_player1, nbr_wins_player2);

}

int get_tennis_score(int point){
    int score[4] = {0,15,30,40};
    if (point < 4){
        return score[point];
    } else {
        return 40;
    }

}


void print_tenis_score(int nbr_wins_player1, int nbr_wins_player2) {
    if(nbr_wins_player1 < 4 && nbr_wins_player2 < 4){
        std::cout << get_tennis_score(nbr_wins_player1) << " - " << get_tennis_score(nbr_wins_player2) << std::endl;
    } else if(nbr_wins_player1 == nbr_wins_player2){
        std::cout << "Deuce with " << get_tennis_score(nbr_wins_player1) << std::endl;
    } else if(nbr_wins_player1 >= nbr_wins_player2 + 2){
        std::cout << "Player 1 wins, score " << get_tennis_score(nbr_wins_player1) << " - " << get_tennis_score(nbr_wins_player2) << std::endl;
    } else if(nbr_wins_player2 >= nbr_wins_player1 + 2){
        std::cout << "Player 2 wins, score " << get_tennis_score(nbr_wins_player1) << " - " << get_tennis_score(nbr_wins_player2) << std::endl;
    }  else if(nbr_wins_player1 == nbr_wins_player2 + 1){
        std::cout << "Advantage player 1, score " << get_tennis_score(nbr_wins_player1) << " - " << get_tennis_score(nbr_wins_player2) << std::endl;
    } else if(nbr_wins_player2 == nbr_wins_player1 + 1){
        std::cout << "Advantage player 2, score " << get_tennis_score(nbr_wins_player1) << " - " << get_tennis_score(nbr_wins_player2) << std::endl;
    }
}
