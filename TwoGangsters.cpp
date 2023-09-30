#include <iostream>

int main()
{
    int cansShotByHarry, cansShotByLarry;
    int totalCans = 10;

    std::cout << "Enter the number of cans shot by Harry: ";
    std::cin >> cansShotByHarry;

    std::cout << "Enter the number of cans shot by Larry: ";
    std::cin >> cansShotByLarry;

    int remainingCansForHarry = totalCans - cansShotByHarry;
    std::cout << "The number of cans not shot by Harry is: " << remainingCansForHarry << "\n";

    int remainingCansForLarry = totalCans - cansShotByLarry;
    std::cout << "The number of cans not shot by Larry is: " << remainingCansForLarry << "\n";
}
