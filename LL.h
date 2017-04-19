#ifndef LL_H
#define LL_H
#endif

typedef struct list list;
typedef struct list *node;

struct list
{
	int cont;
	node next;
	node prev;
	int ordered;
};

/*
 * --------------------------
 * This is an attempt to create a linked list library.
 * The linked list here implemented stores intengers at the elements.
 * Probably some of the ways i use to traverse/sort/search the list aren't exceptionally efficient.
 * Use with care, i did my best to prevent dangling pointers and memory loss due to misallocation/misplaced free() calls.
 * It works well with under 200.000 elements, after that, you'll need to increase maximum main thread stacksize.
 * I do so using valgrind with a flag set, do however, constructive feedback is welcome.
 * --------------------------
*/
node last(node);
//Returns the last node on the linked list.
node firstNode(node);
//Returns the first node on the linked list.
void new(int,node);
//Creates a new element on the linked list, requires a previously defined node to be used as "anchor" for this one.
node init(int);
//Initializes a head for a list, inserting the value passed as argument on the content field.
node initList(int);
//Somewhat specific function to read a input file and generate a list of not-necessarily ordered elements.
void iterAddr(node);
//Iterates through a Linked list, but prints out the address of the element, instead of the content.
void iter(node);
//Iterates through a linked list, printing the content of each element before going to the next one, does so recursively.
void iterCounter(node);
//Iterates through a linked list, going from the node given as argument and moving backwards until the head of the list. Recursive.
void preInsert(int,node);
//Inserts a element before the given node as argument, as in the exemple: b->c insert(3,c) = b->d->c. d contains 3.
void postInsert(int,node);
//Inserts a element after the given node as argument, as in the example: b->c insert(3,c) = b->c->d. d contains 3.
node move(int, node, int);
//Iterates through the linked list, first argument is used to refer to the number of iterations, second argument is the starting point.
//Third argument is the flag used to signal which way, 1 for going towards the end, 0 for going towarsd the start.
int binarySearch(int,int,int, node);
//Intermediate function used for the binary search function.
int binaryRec(int,int, int,node);
//Recursive and final function used for the binary search algorithm.
node search(int,node);
//General search function, aplies linear search if link isn't ordered.(Being ordered or not is signaled by the flag on the node.
//Applies binary search if link is ordered.
void removeCell(node);
//Removes a cell from the linked list, applying necessary instructions to keep list working.
//Ex: a->b->c, remove(b). a->c
void close(node cell);
//Iterates recursively through a list,starting at the given node, purging the elements references from memory. Also doesn't allow for dangling pointers.
void searchAndInsert(int,int,node);
//First, calls the search(int,node) function to find a value in a list, if it exists.
//Then, performs a post-insertion at the node.
//This function considers the argument given as the start of the list, so if you give it an element at the middle of the list, it will
//Only search through that sublist.
void searchAndRemove(int,node);
//Same as search and Insert, but removes a node, quite self-explanatory.
void removePos(int, node);
//Not quite sure what i was thinking when making this one, but it starts at the given cell, then recursively goes forward
//To the cell n steps away from the starting point, and removes that cell.
int valid(node cell);
//Checks if a cell isn't initialized by checking if it's actually a NULL pointer.
//If it isn't, returns 1, 0 otherwise.
void swapVal(int, int,node);
//Takes in two intengers as argument, and a starting point.
//Searchs through the list for the two arguments, if they exist, and swap their values.
void swapCell(node,node);
//Takes in two nodes as argument, swaps their contents.
node sub(int, int , node );
//Takes in an cell, and two values as start and ending points.
//If they exist in the list that starts at the cell argument, creates a sublist of the previous list
//And return the head of the sublist.
void bubble(node,int,int);
//Performs a bubble sort on the linked list.
//Warning: Obviously very slow on 100+elements list.
node separate(node,node);
//Intermediate function for the Quicksort algorithm here implemented.
void quickSort(node,node);
//Recursive quicksort implementation for linked lists.
//Use lists bigger than 1 element because lists with 1 element are already, by definition, sorted.
void joinList(node,node);
//Takes in any two nodes belonging to diferent lists, and join the needed pointers so they become a single list.
//You can give it two nodes of the same list, but that will make it circular, code isn't implemented to deal with circular linked lists.
