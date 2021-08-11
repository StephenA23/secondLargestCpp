#include <iostream>

using namespace std;

int secondLargest(int arr[], int n)
{
    int largest, secondLargest;

    // if one element in the array 
    // second largest is the only value in the array

    if( n == 1)
    {
        return arr[0];
    }

    // When more than one element,
    // compare the first two elements in the array
    if(arr[0] > arr[1])
    {
        largest = arr[0];
        secondLargest = arr[1];
    }
    else
    {
        largest = arr[1];
        secondLargest = arr[0];
    }

    for(int i = 2; i < n; i++)
    {
        if(arr[i] >= largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main()
{

    int arr[] = {5 ,3, 4, 5, 9, 50, 90, 55, 105};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << secondLargest(arr, n) <<endl;
    return 0;
}
