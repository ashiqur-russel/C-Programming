# IMPORTANT LIBRARY

## Installation

Use the package manager [cs50](https://manual.cs50.io/) to install the library package.

1a. Download the CS50 Library from https://github.com/cs50/libcs50/releases

1. Extract/unzip the downloaded zipped folder

2. Open Terminal and change directory to the unzipped CS50 library folder. For example if folder is on desktop and the folder is named libcs50-10.1.0 , then terminal command should be:

```bash
cd desktop/libcs50-10.1.0
```

3. Still in terminal after changing directory, then run the command:

```bash
sudo make install
```

4. After installation, close terminal, go to visual studio and write your C program

5. Link cs50 when compiling your code with clang. Example if your file name is hello.c

```bash
clang hello.c -o hello -lcs50
```

run your code

## Usage

```c
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("what's your name?);
    printf("Hello, %s", answer);
}
```
