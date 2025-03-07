# INET 3101

## Lab 1 Core Concepts

Who wrote the program (ensure all members are listed in the doc)
Patrick Krzykowski

Program description paragraph
This program acts as a user interface where the user can select options from the given list, 
and interact with the one that is chosen. Some of the functions require the user to input values 
for the program to save into the database. The program as a whole allows the user to add and 
delete records, as well as print all records, number of records, database size, and how many times
the database has changed.

Menu definition and usage
The menu allows users to select from 7 different options. It reads the input given by the user and 
runs the desired function. The loop continues to run until the user chooses to exit the program.

Each function 

pRecords()
Input: n/a
Output: void
Description: Prints all records(Does not do anything right now)

aRecord()
Input: n/a
Output: void
Description: Takes user input and stores it as record

dRecord()
Input: n/a
Output: void
Description: Deletes last record(Does not do anything right now)

numRecords()
Input: n/a
Output: void
Description: Prints number of records(Does not do anything right now)

sizeDB()
Input: n/a
Output: void
Description: Prints size of database(Does not do anything right now)

numChange()
Input: bool print
Output: void
Description: If print is true, prints change, otherwise increments it by 1

main()
Input: Whatever user responds with
Output: int
Description: Main function for a program that runs simple menu for user to interact with

Listing of files required and what type they are (.h header, .c c code, etc..)
