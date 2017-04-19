# Linked list implementation.

An attempt to implement Linked lists and some operations on a self-contained
Library.

## Getting Started

Clone the repository, to use this header you will need to compile the object and include it on your project's folder.

### Prerequisites

This library works with vanilla C, version 4.8.4 tested.


### Installing


Clone the repository.

```
git clone https://github.com/wykthor-btracker/Linked-list-implementation.git
```
Before including the header, generate a new object file, by running:
```
gcc -c LL.c -o LL.o
```

Then on the created repository, include the header LL.h file.

```
#include "LL.h"
```
That's it! If all went well, you should be able to use the data structures and functions defined.
```
...
node first = init(1);
printf("%d",first->cont);
new(first,2);
...
```

## Quicksort function usage.

Quicksort function takes in an node for a not-ordered list and orders it.
There is a function called initList(), which is used to read input from a file, and populate a list with the contents. The contents should be a continuous set of intengers.

## Functions descriptions:
Inside the LL.h file, the function prototypes also contain a brief explanation of what and how each function works.

## Authors

* **Wykthor Gabriel** - *Initial work and maintenance of code.* - [Wykthor-Btracker](https://github.com/wykthor-btracker)

See also the list of [contributors](https://github.com/wykthor-btracker/Linked-list-implementation/graphs/contributors) who participated in this project.

## License

This project is licensed under GNU General Public License v3.0 - see the [LICENSE](https://github.com/wykthor-btracker/Linked-list-implementation/blob/master/LICENSE) file for details

