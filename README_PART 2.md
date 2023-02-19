# Alien vs. Zombie

Please introduce the game here.

You may add one signature screenshot of your program here or above the title. Check out [this tutorial](https://www.digitalocean.com/community/tutorials/markdown-markdown-images) to learn how to do it.

Please provide the YouTube link to your [Video Demo](https://youtube.com).

## Compilation Instructions

Provide instructions on how to compile your program, especially when it is non-trivial.


```
g++ main.cpp folder1\code.cpp folder2\code.cpp ......
```

## User Manual

Please provide the user manual on how to use your program.

Please DO NOT change the Progress Log below. Leave it as it is.

The user may alter the board size and the amount of zombies present thanks to the code, which defines a gaming board as a 2D array of characters. The method change settings asks the user to provide new values for the number of rows, columns, and zombies and determines whether the number of zombies is more than the maximum of 9. With the exception of the centre cell (labelled "A") and the cells that will house the zombies, the create matrix function creates random elements for each cell in the game board. The game board is displayed to the console through the display matrix function. 
The primary function first shows the user the default game settings and then asks them to be changed if they so want. The change settings function is called if the user decides to alter the settings; else, an error message is shown. The game board is then initialised and displayed, respectively, by calling the create matrix and display matrix routines.

## Progress Log

- [Part 1](PART1.md)
- [Part 2](PART2.md)

## Contributors

Please replace the following with your group members' names. 

- Logenthiran


