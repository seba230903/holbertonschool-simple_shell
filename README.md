# C - simple shell

This project was made at the end of the fisrt trimester in holberton school. The target of this project is to make our own functional shell.

## Description

A shell is a computer program that exposes an operating system's services to a human user or other programs.

## General Requirements

- Allowed editors: vi, vim, emacs
- All your files will be comiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end wit a new line
- A README.md file, athe the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Your shell should not have any memory leaks
- No more than 5 functoins per file
- All your header files should be include guarded
- Use system calls only when you need to

## Allowed functions and system calls 

- access (man 2 acces)
- chdir (man 2 chdir)
- close (man 2 close)
- closedir (man 3 closedir)
- execve (man 2 execve)
- exit (man 3 exit)
- _exit (man 3 _exit)
- fflush (man 3 fflush)
- fork (man2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- getpid (man 2 getpid)
- isatty (man 3 isatty)
- kill (man 2 kill)
- malloc (man 3 malloc)
- open (man 2 open)
- opendir (man 3 opendir)
- perror (man 3 perror)
- read (man 2 read)
- readdir (man 3 readdir)
- signal (man 2 signal)
- stat (__xstat)(man 2 stat)
- lstat (__lxstat(man 2 lstat)
- fstat (__fxstat)(man 2 fstat)
- strtok (man 3 strtok)
- wait (man 2 wait)
- waitpid (man 2 waitpid)
- wait 3 (man 2 wait3)
- wait 4 (man 2 wait4)
- write (man 2 write)

## Functions



## Compilation

This project was compiled this way
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

## Tasks

- 0 - Write a README, a man file, and an AUTHORS file at the root of the repository.
- 1 - Write a beautiful code that passes the Betty checks.
- 2 - Write a UNIX command line interpreter.
- 3 - Handle command lines with arguments.
- 4 - Handle the PATH. fork must not be called if the command doesn't exist.

#### Authors:
[Michael Golenia](https://github.com/MichaelTwG) & [Sebastian Lopez](https://github.com/seba230903)
:)
