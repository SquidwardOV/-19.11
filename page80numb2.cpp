#include <iostream>
using namespace std;

int main()
{
    int n, mini = 999999, maxi = -999999;
    cin >> n;
    
    int* arr = new int[n];
    for (int i = 0; i < n; ++i){
        arr[i] = rand()%10-5;
        if (arr[i] < mini){
            mini = arr[i];
        }
        if (arr[i] > maxi){
            maxi = arr[i];
        }
    }
    for (int i = 0; i < n; ++i){
        if(arr[i] == mini && arr[i+1] == maxi || arr[i] == maxi && arr[i+1] == mini){
            cout << "Интервал существует. " << maxi <<" "<< mini;
        }
    }
}
