#include <iostream>

int main()
{
    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;

    int answer1;
    int answer2;
    int answer3;
    int answer4;

    std::cout << "The Sorting Hat Quiz!";
    std::cout << "Q1) When I'm dead, I want people to remember me as?\n\n";
    std::cout << "1) The Good\n";
    std::cout << "2) The Great\n";
    std::cout << "3) The Wise\n";
    std::cout << "4) The Bold\n";
    std::cin >> answer1;

    switch (answer1) {
        case 1 : 
            hufflepuff++;
            break;
        case 2 : 
            slytherin++;
            break;
        case 3 :
            ravenclaw++;
            break;
        case 4 :
            gryffindor++;
            break;
        default :
            std::cout << "Invalid input";
            break;
    }

    std::cout << "Q2) Dawn or Dusk?\n";
    std::cout << "1) Dawn";
    std::cout << "2) Dusk";
    std::cin >> answer2;

    switch (answer2) {
    case 1:
        gryffindor++;
        ravenclaw++;
        break;
    case 2:
        slytherin++;
        hufflepuff++;
        break;
    }
}
