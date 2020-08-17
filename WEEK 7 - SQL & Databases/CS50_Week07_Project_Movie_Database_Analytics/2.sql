/*
Yannique Hecht
HARVARD CS50 Week 7 - Movies - Write SQL queries to answer questions about a database of movies.

In 2.sql, write a SQL query to determine the birth year of Emma Stone.
Your query should output a table with a single column and a single row (plus optional header) containing Emma Stone’s birth year.
You may assume that there is only one person in the database with the name Emma Stone.
*/

SELECT birth FROM people
WHERE name = "Emma Stone";