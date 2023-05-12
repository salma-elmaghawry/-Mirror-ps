#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	if (n % 2 == 0)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];

		}
		sort(arr, arr + n);
		for (int  i = 0; i < n/2; i++)
		{
			cout << arr[i]<<" ";
		}
		for (int  i = n/2-1; i >=0 ; i--)
		{
			cout << arr[i] << " ";
		}
		cout << endl;

		reverse(arr, arr + n);
		for (int  i = 0; i < n/2; i++)
		{
			cout << arr[i] <<" ";
		}
		for (int i = n / 2 - 1; i >= 0; i--)
		{
			cout << arr[i] << " ";
		}

		
	}
}
//another solution 
/*
* int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n); // sort the array in ascending order

    for (int i = 0; i < n / 2; i++) {
        cout << a[i] << " ";
    }
    for (int i = n / 2 - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i = n / 2; i < n; i++) {
        cout << a[i] << " ";
    }
    for (int i = n - 1; i >= n / 2; i--) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
*/