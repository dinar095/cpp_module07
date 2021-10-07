#include "iter.hpp"

int main()
{
	int arr[] = {1, 65, 85, 75, 68, 78};
	iter<int>(arr, 6, print);
}