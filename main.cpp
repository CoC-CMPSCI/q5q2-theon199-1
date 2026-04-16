#include <iostream>
using namespace std;

int main()
{
    int N, M;

    cout << "Enter your base number: ";
    cin >> N;
    cout << "Enter your exponent: ";
    cin >> M;

   cout << N << " to power number: ";

   //Init the output variable, so that it does not flag as unintialized
    int output = 1;
    for (int i = 0; i <= M; i++) {
        cout << output << " ";
        output *= N;
    }

    cout << endl;

    return 0;
}
