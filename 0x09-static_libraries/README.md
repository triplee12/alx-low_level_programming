**C - Building And Using Static And Shared "C" Libraries**

## How To create Static Libraries Using Commands
- gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c | ar -rc libmy.a *.o

### How To Create Static Libraries Using Shell Command

check create_static_lib.sh on the repo <a href="https://github.com/triplee12/alx-low_level_programming/blob/master/0x09-static_libraries/create_static_lib.sh" target="_blank">Goto file</a>

- Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
