# Dynamic-Head-Tail-Insertion-in-a-Singly-Linked-List
Overview
This C++ program implements a singly linked list with a unique head-tail insertion approach. Depending on the number of nodes, a new value is inserted either at the head (if the count is odd) or at the tail (if the count is even). The program continuously allows the user to insert values and displays the updated list.

Features
Insert elements dynamically at the head or tail based on the list size.

Display the linked list after each insertion.

Automatically calculates and maintains the count of head and tail insertions.

Provides a user-friendly interactive experience.

**Usage**
Compile the code using a C++ compiler
Run the executable
Follow the on-screen instructions

Enter values to insert into the linked list.

The program will decide whether to insert at the head or tail.

It will display the updated list after each insertion.

You can continue adding elements until you choose to exit.

**Example Output**
Current list:
NULL

Enter a value: 10
10 is inserted at head

Updated List:
10 -> NULL

Total 1 values inserted at Head and 0 values inserted at Tail

Do you want to continue? (Y/N): Y
Functions Explained
fronter(int d): Inserts a node at the head of the list.

tail(int d): Inserts a node at the tail of the list.

display(): Prints the linked list in a readable format.

headtailinsertion(int d): Determines whether to insert at the head or tail based on the total number of elements.

Author
👨‍💻 Zain Ul Abidin
