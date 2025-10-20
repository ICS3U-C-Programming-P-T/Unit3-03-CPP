// copyright 2024 Patrick
// This program prompts the user to guess a number between 0 and 9
// and checks if the guess matches a randomly generated number.
#include <iostream>
#include <random>

int main() {
    // Ask the User to pick a number from 0 to 9:
    std::cout << "Pick a number from 0 to 9: ";
    int user_number;
    std::cin >> user_number;

    // Generate a random number between 0 and 9
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, 9);
    int random_number = distr(gen);

    // If User is correct
    if (user_number == random_number) {
        std::cout << "You guessed correctly!" << std::endl;
    } else {
        // If User is wrong
        std::cout << "You guessed wrong." << std::endl;
        std::cout << "The correct answer was " << random_number << std::endl;
    }
}
