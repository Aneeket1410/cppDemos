#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <array>
#include <fstream>

void print_vector(std::vector<int> &data){
    //forrange help print collection, makes it much easier
    for (auto &&value : data)
    {
        std::cout << value << '\t';
    }
    std::cout << std::endl;
    
}

void print_array(int arr[],int size){
    for (int i =0; i<size;i++){
        std::cout << arr[i] << '\t';
    }
    std::cout << std::endl;
}

void print_array1(std::array<int, 251> arr,int size){
    for (int i =0; i<size;i++){
        std::cout << arr[i] << '\t';
    }
    std::cout << std::endl;
}


void play_game(){
    // int guesses[101];
    // int guess_count=0;
    
    std::vector<int> vect_guesses;

    // std::array<int, 251> arr_guesses;
    // int arr_count = 0;
    
    int random = rand() % 101;
    std::cout << random << std::endl;

    int guess;
    std::cout << "Game is being played!\n";
    while(true){
        std::cout << "Guess the number: ";
        std::cin >> guess;

        //impl using c-type array
        // guesses[guess_count++] = guess;

        //implementation using vector
        vect_guesses.push_back(guess);

        //imp using STL array
        // arr_guesses[arr_count++] = guess;

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

    std::ifstream input("best_scores.txt");
    if (!input.is_open()){
        std::cout<<"Couldn't open the file."<< std::endl;
        return;
    }
    int high_score;
    input >> high_score;
    input.close();
    std::ofstream output("best_scores.txt");
    if (!output.is_open()){
        std::cout<<"Couldn't open the file."<< std::endl;
        return;
    }    
    if (high_score > vect_guesses.size()){
        output << vect_guesses.size();
    } else output << high_score;

    output.close();

    //printing using c-type array
    // print_array(guesses, guess_count);

    //printing vector doesn't require to maintain the size of array
    print_vector(vect_guesses);

    //printing with STL array
    // print_array1(arr_guesses, arr_count);
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
