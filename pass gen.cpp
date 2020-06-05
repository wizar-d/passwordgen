#include <iostream>
#include <algorithm>
#include <ctime>
int main()
{
    srand(time(NULL));
    std::cout << "how many characters would you like your password to be?\n ";
    int amountofchars; // amountofchars will be used as the number of characters in the password
    std::cin >> amountofchars;
    if (!std::cin) { // checks if answer is an integer
        std::cout << "re-open the program and answer with an integer";
        getchar(); // so the program works when not in visual studio
    }
    else {
        std::string password;
        const std::string wordList[72] = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0", "!", "@", "#", "$", "%","^", "&", "*", "*", "(", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", };
        // the wordlist is the characters it picks from
        for (int i = 0; i < amountofchars; i++) {
            password = password + wordList[rand() % 72];
        }
        std::cout << "your password is " << password;
        getchar(); // so the program works when not in visual studio
    }
}
