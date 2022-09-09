#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void print_array(int arr[],int size){
    for (int i =0; i<size;i++){
        std::cout << arr[i] << '\t';
    }
    std::cout << std::endl;
}

void play_game(){
    int guesses[101];
    int guess_count=0;
    int random = rand() % 101;
    std::cout << random << std::endl;
    int guess;
    std::cout << "Game is being played!\n";
    while(true){
        std::cout << "Guess the number: ";
        std::cin >> guess;
        guesses[guess_count++] = guess;
        if (guess < random){
            std::cout << "Too low!" <<std::endl;
        } 
        else if (guess > random){
            std::cout << "Too High!" <<std::endl;
        }
        else {
            std::cout << "You win!" << std::endl;
            break;
        }
    }
    print_array(guesses, guess_count);

}

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int choice;
    do{
        std::cout << "0. Quit" <<std::endl << "1. Play game\n";
        std::cin >> choice;

        switch(choice){
            case 0:
            std::cout << "Thanks for nothing!\n";
            return 0;
            case 1:
            play_game();
            break;
        }
    } while(choice != 0);

    return 0;
}
