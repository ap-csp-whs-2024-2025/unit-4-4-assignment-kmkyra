#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string

int main()
{
    //std::cin >> lalalala
    // Complete the homework problems here
    
    // Problem 1
    int num = 0;
    std::cout << "Give me a number from 1 to 100" << std::endl;
    std::cin >> num;
    while (num < 1 || num > 100)
    {
        std::cout << "Invalid. Please try again." << std::endl;
        std::cin >> num;
    }
    std::cout << "Thank you for your input." << std::endl;
    
    // Problem 2
    int attempts = 1;
    std::string guess;
    std::string color = "purple";

    std::cout << "What's my favorite color?" << std::endl;
    std::cin >> guess;
    while (guess != color)
    {
        std::cout << "Incorrect. Try again." << std::endl;
        std::cin >> guess;
        attempts = (attempts + 1);
    }
    std::cout << "Correct! You took " << attempts << " attempts!" << std::endl;
    
    // Problem 3
    int sum = 0;
    int input = 0;
    int loop = 0;

    std::cout << "How many numbers do you want to add?" << std::endl;
    std::cin >> loop;
    for (int i = 1; i <= loop; i = i + 1)
    {
        std::cout << "Give me a number." << std::endl;
        std::cin >> input;
        sum = sum + input;
    }
    std::cout << "The sum is " << sum << "." << std::endl;
    
    return 0;
}
