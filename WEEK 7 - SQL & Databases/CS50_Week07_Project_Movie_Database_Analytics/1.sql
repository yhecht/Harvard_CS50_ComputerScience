/*
Yannique Hecht
HARVARD CS50 Week 7 - Movies - Write SQL queries to answer questions about a database of movies.

In 1.sql, write a SQL query to list the titles of all movies released in 2008.
Write a SQL query to list the titles of all movies released in 2008.
Your query should output a table with a single column for the title of each movie.
*/

SELECT title FROM movies
WHERE year = 2008;