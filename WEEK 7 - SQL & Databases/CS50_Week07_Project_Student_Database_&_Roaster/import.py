# Yannique Hecht
# HARVARD CS50 Week 7 - Houses - Implement a program to import student data into a database, and then produce class rosters


# In import.py, write a program that imports data from a CSV spreadsheet.
    # Your program should accept the name of a CSV file as a command-line argument.
    # If the incorrect number of command-line arguments are provided, your program should print an error and exit.
    # You may assume that the CSV file will exist, and will have columns name, house, and birth.
    # For each student in the CSV file, insert the student into the students table in the students.db database.
    # While the CSV file provided to you has just a name column, the database has separate columns for first, middle, and last names. You’ll thus want to first parse each name and separate it into first, middle, and last names. You may assume that each person’s name field will contain either two space-separated names (a first and last name) or three space-separated names (a first, middle, and last name). For students without a middle name, you should leave their middle name field as NULL in the table.

from csv import reader
from cs50 import SQL
from sys import argv
import sqlite3

# open student database in a variable
db = SQL("sqlite:///students.db")

# check for correct usage in commandline, else return error message
if len(argv) < 2:
    print("Usage: import.py characters.csv")
    exit()

# open characters.csv, copy content
with open(argv[1], newline='') as characters_new:
    characters = reader(characters_new)
    for character in characters:
        if character[0] == 'name':
            continue

        # split full name into first, last and middle name columns
        fullName = character[0].split()
        # insert splitted name into database, if no middle name exis, leave middle name column empty
        if len(fullName) < 3:
            db.execute("INSERT INTO students(first, middle, last, house, birth) VALUES(?, ?, ?, ?, ?)",
                       fullName[0], None, fullName[1], character[1], character[2])

        else:
            db.execute("INSERT INTO students(first, middle, last, house, birth) VALUES(?, ?, ?, ?, ?)",
                       fullName[0], fullName[1], fullName[2], character[1], character[2])