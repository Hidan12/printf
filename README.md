#### Readme of the project 

# 0x11. C - printf 

### Flowchart of the _printf function

![This is a alt text.](https://app.code2flow.com/qALQQDhmj7Tb.png "Flowchart.")
## Description
> This project point to make the own ```printf``` but in a minor
> version. It means that will recognize the type identifiers ```i```, 
> ```d```, ```c```,```s``` and ```%```. The handle flags, the field width,
> the precision and the length modifiers of 
> the printf ar not supported yet.
> To made the above cases, some files was needed to avoid problems.
> The entire project is locate in the main branch of the repository.

#### Description of the files in the repository 
```
int_printf.c  ..............   Contain the code for the printf function 
man_3_printf  ..............   Contain the use manual of the function  
function.c    ..............   Contain the functions percent and find_fun
_putchar.c    ..............   Contain the code to print characters|
main.h        ..............   Contain the header and all the prototypes functions
chars.c       ..............   Hold the print conditions of char and string 
numbers.c     ..............   Hold the print conditions of decimal and integer

```
## man _printf
> This file has the manual to use the _printf with success.
> If the reader want to install it just has to use the command below:

`(terminal)$ man -l man_3_printf`

## Libraries
* `#include <stdlib.h>`
* `#include <stdio.h>`
* `#include <stdarg.h>`
* `#include "main.h"`

## Enviroment
* C language.
* Ubuntu-20-04 (WSL).
* gcc with the flags -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format.
* Holberton's manual style named Betty.

## Method to teamwork

> The project was developed in peers that coding together at the same time. 
> In this way was posible to knew the meaning of every code line. 
> The commits to the repository were shared between both peers.
> To work in the same repository the partners use the below code:
```
(terminal)$ git clone https://github.com/Hidan12/printf.git
```
> When the program was compiled, it ran with the code below:

```
(terminal)$ ./a.out
```
## Authors
This code and all the files were made by [Martin Vidan](https://github.com/Hidan12) and [Daniela Botero Restrepo](https://github.com/DaboRestrepo).

#### Note

*The repository will recive some changes to add others identifiers.*
