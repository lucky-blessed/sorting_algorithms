Sorting Algorithm & Big O
This is a peer group project handled by Grace Obodo and Lucky Nkwor

Resources
iRead or watch:

Sorting algorithm
Big O notation
Sorting algorithms animations
15 sorting algorithms in 6 minutes (WARNING: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms)
CS50 Algorithms explanation in detail by David Malan
All about sorting algorithms
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
At least four different sorting algorithms
What is the Big O notation, and how to evaluate the time complexity of an algorithm
How to select the best sorting algorithm for a given input
What is a stable sorting algorithm

Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project, is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions should be included in your header file called sort.h
Don’t forget to push your header file
All your header files should be include guarded
A list/array does not need to be sorted if its size is less than 2.

Tasks
0. Bubble sort
Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm

Prototype: void bubble_sort(int *array, size_t size);
You’re expected to print the array after each time you swap two elements (See example below)
Write in the file 0-O, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

in the best case
in the average case
in the worst case

1. Insertion sort
mandatory
Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm

Prototype: void insertion_sort_list(listint_t **list);
You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
You’re expected to print the list after each time you swap two elements (See example below)
Write in the file 1-O, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

in the best case
in the average case
in the worst case

2. Selection sort
mandatory
Write a function that sorts an array of integers in ascending order using the Selection sort algorithm

Prototype: void selection_sort(int *array, size_t size);
You’re expected to print the array after each time you swap two elements (See example below)
Write in the file 2-O, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

in the best case
in the average case
in the worst case

3. Quick sort
mandatory
Write a function that sorts an array of integers in ascending order using the Quick sort algorithm

Prototype: void quick_sort(int *array, size_t size);
You must implement the Lomuto partition scheme.
The pivot should always be the last element of the partition being sorted.
You’re expected to print the array after each time you swap two elements (See example below)
Write in the file 3-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

in the best case
in the average case
in the worst case

4. Shell sort - Knuth Sequence
#advanced
Write a function that sorts an array of integers in ascending order using the Shell sort algorithm, using the Knuth sequence

Prototype: void shell_sort(int *array, size_t size);
You must use the following sequence of intervals (a.k.a the Knuth sequence):
n+1 = n * 3 + 1
1, 4, 13, 40, 121, ...
You’re expected to print the array each time you decrease the interval (See example below).

5. Cocktail shaker sort
#advanced
Write a function that sorts a doubly linked list of integers in ascending order using the Cocktail shaker sort algorithm

Prototype: void cocktail_sort_list(listint_t **list);
You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
You’re expected to print the list after each time you swap two elements (See example below)
Write in the file 101-O, the big O notations of the time complexity of the Cocktail shaker sort algorithm, with 1 notation per line:

in the best case
in the average case
in the worst case

6. Counting sort
#advanced
Write a function that sorts an array of integers in ascending order using the Counting sort algorithm

Prototype: void counting_sort(int *array, size_t size);
You can assume that array will contain only numbers >= 0
You are allowed to use malloc and free for this task
You’re expected to print your counting array once it is set up (See example below)
This array is of size k + 1 where k is the largest number in array
Write in the file 102-O, the big O notations of the time complexity of the Counting sort algorithm, with 1 notation per line:

in the best case
in the average case
in the worst case

7. Merge sort
#advanced
Write a function that sorts an array of integers in ascending order using the Merge sort algorithm

Prototype: void merge_sort(int *array, size_t size);
You must implement the top-down merge sort algorithm
When you divide an array into two sub-arrays, the size of the left array should always be <= the size of the right array. i.e. {1, 2, 3, 4, 5} -> {1, 2}, {3, 4, 5}
Sort the left array before the right array
You are allowed to use printf
You are allowed to use malloc and free only once (only one call)
Output: see example
Write in the file 103-O, the big O notations of the time complexity of the Merge sort algorithm, with 1 notation per line:

in the best case
in the average case
in the worst case

8. Heap sort
#advanced
Write a function that sorts an array of integers in ascending order using the Heap sort algorithm

Prototype: void heap_sort(int *array, size_t size);
You must implement the sift-down heap sort algorithm
You’re expected to print the array after each time you swap two elements (See example below)
Write in the file 104-O, the big O notations of the time complexity of the Heap sort algorithm, with 1 notation per line:

in the best case
in the average case
in the worst case

9. Radix sort
#advanced
Write a function that sorts an array of integers in ascending order using the Radix sort algorithm

Prototype: void radix_sort(int *array, size_t size);
You must implement the LSD radix sort algorithm
You can assume that array will contain only numbers >= 0
You are allowed to use malloc and free for this task
You’re expected to print the array each time you increase your significant digit (See example below)


10. Bitonic sort
#advanced
Write a function that sorts an array of integers in ascending order using the Bitonic sort algorithm

Prototype: void bitonic_sort(int *array, size_t size);
You can assume that size will be equal to 2^k, where k >= 0 (when array is not NULL …)
You are allowed to use printf
You’re expected to print the array each time you swap two elements (See example below)
Output: see example
Write in the file 106-O, the big O notations of the time complexity of the Bitonic sort algorithm, with 1 notation per line:

in the best case
in the average case
in the worst case


11. Quick Sort - Hoare Partition scheme
#advanced
Write a function that sorts an array of integers in ascending order using the Quick sort algorithm

Prototype: void quick_sort_hoare(int *array, size_t size);
You must implement the Hoare partition scheme.
The pivot should always be the last element of the partition being sorted.
You’re expected to print the array after each time you swap two elements (See example below)
Write in the file 107-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

in the best case
in the average case
in the worst case

12. Dealer
#advanced
Write a function that sorts a deck of cards.

Prototype: void sort_deck(deck_node_t **deck);
You are allowed to use the C standard library function qsort
Please use the following data structures:

You have to push you deck.h header file, containing the previous data structures definition
Each node of the doubly linked list contains a card that you cannot modify. You have to swap the nodes.
You can assume there is exactly 52 elements in the doubly linked list.
You are free to use the sorting algorithm of your choice
The deck must be ordered:
From Ace to King
From Spades to Diamonds
See example below
