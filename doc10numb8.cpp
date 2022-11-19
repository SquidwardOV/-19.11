#include <iostream>

using namespace std;


int main()
{
    int n, count = 0, res = 1;;


    cin >> n;

    int* array = new int[n];



    for (int i = 0; i < n; ++i) {
        cin >> array[i];

        if (array[i] > 0) {
            count += 1;
        }

        if ((count == 1) && (array[i] > 0)) {
            res *= array[i];

        }
        if ((count == 3) && (array[i] > 0)) {
            res *= array[i];
        }
        if ((count == 6) && (array[i] > 0)) {
            res *= array[i];
        }
    }

    delete[] array;
    cout << res;
}
