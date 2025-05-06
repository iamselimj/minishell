/**
 * @function ft_binary_search
 *
 * @brief Performs a binary search on a sorted array.
 *

	* This function searches for a value in a sorted array using the binary search algorithm.
 *
 * @param arr (int *) : The sorted array to be searched.
 * @param size (int) : The size of the array.
 * @param value (int) : The value to be searched for.
 *
 * @return (int) : The index of the value if found, or -1 if not found.
 */
int	ft_binary_search(int *arr, int size, int value)
{
	int left = 0;
	int right = size - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] == value)
		{
			return (mid);
		}
		if (arr[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}