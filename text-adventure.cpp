#include <iostream>
#include <string>

int main() {

    int x;

    std::cout << "This is a stupid story for codecademy in which dispensing more of my creative brain power will create no value or worth.\n";
    std::cout << "At most, we could feed this hot pile of garbage into a hot pile of training data for companies currenlty ripping off all of humanity.\n";
    std::cout << "Some of them even have really dumb names. Take for example 'Bard'. Why not just call your AI 'Fart' instead?\n";
    std::cout << "*.    *.    *.    *\n";
    std::cout << "What do you think about creating projects for things that have zero effect in the real world?\n\n";

    std::cout << "Choose 1, 2, or 3 from the following options: \n\n";
    std::string options[3] = {"1: I agree", "2: I disagree", "3: I do not care"};
    for (int i = 0; i < 3; i++) {
        std::cout << options[i] << "\n";
    }

    std::cin >> x;
    std::cout << "You chose " << x << "\n";

    if (x == 1) {
        std::cout << "I am glad you agree!";
    } 
    else if (x == 2) {
        std::cout << "That's ok. We do not have to always  agree.";
    } 
    else if (x == 3) {
        std::cout << "Not caring is not cool";
    }
    else {
        std::cout << "Your input is invalid. Please select either 1, 2, or 3.";
    }
    
    return 0;
}
