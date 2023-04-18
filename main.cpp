#include <iostream>
#include <cmath>

using namespace std;

double question3(int n, double sum=0) {

    if (n <= 0) {
        return sum;
    } else {
        double temp = pow(-1, n+1) / n;
        return question3(n-1, sum+temp);
    }
}

double question4() {
    int n;
    cout << "Please enter the step size of the function: \n";
    cin >> n;

    double sum = 0;
    for (int i = 1; i <= n; i++) {
        double temp = pow(-1, i+1) / i;
        sum += temp;
    }

    return sum;
}

int main() {
    int n;
    cout << "Please enter the step size of the function: \n";
    cin >> n;
    double result1 = question3(n);
    double result2 = question4();
    cout << "The sum using recursion is: " << result1 << endl;
    cout << "The sum using loop is: " << result2 << endl;
    return 0;
}