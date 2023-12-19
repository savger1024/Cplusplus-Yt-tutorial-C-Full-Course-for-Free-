#include <iostream>
using std::cout;
using std::cin;

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

//1. Double every second digit from right to left
//(if doubled number is 2 digits, split them (18→ 1, 8))
//2. Add all single digits from step 1
//3. Add all odd numbered digits
//4. Sum results from step 2 and 3
//5. If it's divisable by 10, number is valid
int main()
{
    std::string cardNumber;
    int result = 0;
    cout << "Enter a credit card number\n";
    cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result % 10 == 0){
        cout << "valid";
    }
    else{
        cout << "not valid";
    }

    int end;
    cin >> end;
	return 0;
}

int getDigit(const int number){
    return number % 10 + (number / 10 % 10);
}

int sumOddDigits(const std::string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >= 0; i-=2){
        sum += cardNumber[i] - '0';
    }
    return sum;
}
int sumEvenDigits(const std::string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 2; i >= 0; i-=2){
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}