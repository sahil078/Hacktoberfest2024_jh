public class BinarySearchExample {

    // Binary Search method: returns the index of the target if found, or -1 if not found
    public static int binarySearch(int[] array, int target) {
        int left = 0;               // Starting index of the search range
        int right = array.length - 1; // Ending index of the search range

        while (left <= right) {
            int mid = left + (right - left) / 2; // Calculate middle index

            // Check if the target is present at mid
            if (array[mid] == target) {
                return mid; // Target found, return the index
            }

            // If target is greater, ignore the left half by moving the left index
            if (array[mid] < target) {
                left = mid + 1;
            }
            // If target is smaller, ignore the right half by moving the right index
            else {
                right = mid - 1;
            }
        }

        // If we exit the loop, the target is not present in the array
        return -1;
    }

    public static void main(String[] args) {
        // Test case array (sorted array for binary search to work)
        int[] array = {2, 4, 7, 10, 14, 18, 21, 26, 30, 34};

        // Test cases
        System.out.println("Searching for 10: Index = " + binarySearch(array, 10)); // Expected output: 3
        System.out.println("Searching for 21: Index = " + binarySearch(array, 21)); // Expected output: 6
        System.out.println("Searching for 5: Index = " + binarySearch(array, 5));   // Expected output: -1 (not found)
        System.out.println("Searching for 34: Index = " + binarySearch(array, 34)); // Expected output: 9
        System.out.println("Searching for 1: Index = " + binarySearch(array, 1));   // Expected output: -1 (not found)
    }
}
