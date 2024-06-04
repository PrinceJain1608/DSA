void sort012(int arr[], int n)
{
    int currIndex = 0;
    int left = 0;
    int right = n - 1;
    
    while (currIndex <= right)
    {
    	if (arr[currIndex] == 0) {
            swap(arr[currIndex], arr[left]);
            currIndex++;
            left++;
        }
        else if (arr[currIndex] == 1)
            currIndex++;
        else
        {
            swap(arr[currIndex], arr[right]);
            right--;
        }
    }
}
