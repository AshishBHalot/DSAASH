#include <iostream>
#include <vector>
using namespace std;
vector<int> printNos(int x) {
    // Write Your Code Here
      std::vector<int> result;
    if (x > 0) {
        result = printNos(x - 1); // Recursively call printNos with x - 1
        result.push_back(x); // Add current value of x to the result vector
    }
    return result;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
  vector<int> result = printNos(n); // Call the function to generate the array
    
    cout << "Output: ";
    for (int num : result) {
        std::cout << num << " "; // Output the generated array
    }
    
    return 0;
}