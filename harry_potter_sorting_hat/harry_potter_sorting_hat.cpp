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

    int max = 0;
    std::string house;

    std::cout << "The Sorting Hat Quiz!";
    std::cout << "Q1) When I'm dead, I want people to remember me as?\n\n";
    std::cout << "1) The Good\n";
    std::cout << "2) The Great\n";
    std::cout << "3) The Wise\n";
    std::cout << "4) The Bold\n";
    std::cin >> answer1;

    //Decides the answer and allocates the points for the choosen answer
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

    std::cout << "Q3) Dawn or Dusk?\n\n";
    std::cout << "1) Dawn\n";
    std::cout << "2) Dusk\n";
    std::cin >> answer2;

    //Decides the answer and allocates the points for the choosen answer
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

    std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n";
    std::cout << "1) The violin\n";
    std::cout << "2) The trumpet\n";
    std::cout << "3) The piano\n";
    std::cout << "4) The drum\n";
    std::cin >> answer3;

    //Decides the answer and allocates the points for the choosen answer
    switch (answer3) {
    case 1:
        slytherin++;
        break;
    case 2:
        hufflepuff++;
        break;
    case 3:
        ravenclaw++;
        break;
    case 4:
        gryffindor++;
        break;
    default:
        std::cout << "Invalid input";
        break;
    }

    std::cout << "Q4) Which road tempts you most?\n\n";
    std::cout << "1) The wide, sunny grassy lane\n";
    std::cout << "2) The narrow, dark, lantern-lit alley\n";
    std::cout << "3) The twisting, leaf-strewn path through woods\n";
    std::cout << "4) The cobbled street lined (ancient buildings)\n";
    std::cin >> answer1;

    //Decides the answer and allocates the points for the choosen answer
    switch (answer1) {
    case 1:
        hufflepuff++;
        break;
    case 2:
        slytherin++;
        break;
    case 3:
        gryffindor++;
        break;
    case 4:
        ravenclaw++;
        break;
    default:
        std::cout << "Invalid input";
        break;
    }

    //Determines the house with the max points
    if (gryffindor > max) {
        
        max = gryffindor;
        house = "Gryffindor";
    }

    if (hufflepuff > max) {

        max = hufflepuff;
        house = "Hufflepuff";
    }

    if (slytherin > max) {

        max = slytherin;
        house = "Slytherin";
    }

    if (ravenclaw > max) {

        max = ravenclaw;
        house = "Ravenclaw";
    }

    std::cout << house << "!\n";
}
