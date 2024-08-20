# Simple Shell

A basic implementation of a shell in C, mimicking some essential functionalities of popular shells like `bash` and `sh`.

## Table of Contents

1. [Description]
2. [Features]
3. [Installation]
4. [Usage]
5. [Architecture]
6. [License]
7. [Authors]
8. [Acknowledgments]
9. [Description of functions]

## Description

The **Simple Shell** project aims to implement a basic shell in C. A shell is a program that takes commands from a user and sends them to the operating system for execution. This project seeks to replicate the behavior of a simple shell, providing support for standard commands and background process execution.

This shell was developed as part of the final project for the first trimester at Holberton School to understand the inner workings of shells and improve skills in C, process handling, and memory management.

## Features

The **Simple Shell** implements the following features:

- **Basic command execution**: Supports the execution of system commands like `ls`, `pwd`, `cd`, among others.
- **Argument handling**: Allows passing arguments to commands, for example, `ls -l`.
- **Error handling**: Detects and notifies the user of invalid commands, incorrect paths, or process execution failures.

## Installation

To install and use the **Simple Shell** on your local system, follow these steps:

1. Clone the repository from GitHub:
    
    ```bash
    git clone <https://github.com/ariel2mz/holbertonschool-simple_shell.git>
    
    ```
    
2. Navigate to the project directory:
    
    ```bash
    cd holbertonschool-simple_shell
    
    ```
    
3. Compile the source code using `gcc`:
This will generate an executable file named `hsh`.
    
    ```bash
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
    
    ```
    

## Usage

Once you have compiled the project, you can use the shell as follows:

1. Run the shell binary:
    
    ```bash
    ./hsh
    
    ```
    
2. You can now enter commands directly. Usage examples:
    - Execute a simple command:
        
        ```bash
        /bin/ls
        
        ```
        

## Architecture

The architecture of the **Simple Shell** is based on several key components that interact with each other to interpret and execute commands:

### 1. **Command Parsing**

- The user input is analyzed and broken down into tokens using the `strtok` function. Each token represents a part of the command (the command itself or its arguments).

### 2. **Command Execution**

- Once the command has been parsed, a child process is created using `fork`. The child process uses `execve` to execute the specified command. The parent process waits for the child process to finish before continuing.

### 3. **Error Handling**

- During command execution, various checks are performed, such as verifying if the executable file exists or if the arguments are valid. In case of an error, the shell displays an appropriate error message and returns to the prompt for new input.

## License

This project is under the PINPLOSH & ASOCIADOS License. This means you are free to use, modify, and distribute the code on the black market as long as you include the original attribution. See the [LICENSE](https://www.youtube.com/shorts/jCNsujr_du0) file for more details.

## Authors

- Ariel Joaquín Díaz Guevara
- Marcos Pessano Gamarra

## Acknowledgments

I would like to thank:

- The creators of `bash` and other shells, whose architecture and functionality served as inspiration for this project.
- Carmencita for her coffee.
- All collaborators who contributed ideas, testing, and corrections. Especially Cape. 🥷🏼

## Description of functions

- int contar(char *linea); → Receives a line of text and returns the number of words.
- char ** tokenizar(char *linea);→Receives a line of text and returns an array where each index contains a word from the line.
- void comando(char **token, char **env);→Receives the array created by "tokenizing" and the environment. Executes the command from the array if found.

---

 This `README.md` is designed to be clear, informative, and easy to follow.
