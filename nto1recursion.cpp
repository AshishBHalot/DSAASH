#include <iostream>
#include <vector>
using namespace std;

vector<int> printNos(int x) {
    vector<int> result;
    if(x < 1) {
        return result;
    }
    result.push_back(x);
    result = printNos(x - 1);
    
    return result;
}


int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
vector<int> result = printNos(n); // Call the function to generate the array
    
   cout << "Output: ";
    for (int num : result) {
    cout << num << " "; // Output the generated array
    }
    
    return 0;
}