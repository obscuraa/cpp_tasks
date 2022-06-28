#include <bits/stdc++.h>
using namespace std;
 
// Function to generate random numbers
void multiplicativeCongruentialMethod(
    int Xo, int m, int a, int c,
    vector<int>& randomNums,
    int noOfRandomNums)
{
 
    // Initialize the seed state
    randomNums[0] = Xo;
 
    // Traverse to generate required
    // numbers of random numbers
    for (int i = 1; i < noOfRandomNums; i++) {
 
        // Follow the multiplicative
        // congruential method
        randomNums[i]
            = (randomNums[i - 1] * a + c) % m;
    }
}

int main()
{
    int x , y = 1;
    int Xo = 157; // seed value
    int m = 32768; // modulus parameter
    int a = 32768*x + 31; // multiplier term
    int c = 32768*y + 187;
 
    // Number of Random numbers
    // to be generated
    int noOfRandomNums = 5;
 
    // To store random numbers
    vector<int> randomNums(noOfRandomNums);
 
    // Function Call
    multiplicativeCongruentialMethod(
        Xo, m, a, c, randomNums,
        noOfRandomNums);
 
    // Print the generated random numbers
    for (int i = 0; i < noOfRandomNums; i++) {
        cout << randomNums[i] << " ";
    }
    return 0;
}
