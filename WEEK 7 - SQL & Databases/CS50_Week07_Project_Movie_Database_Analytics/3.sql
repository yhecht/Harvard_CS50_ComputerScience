/*
Yannique Hecht
HARVARD CS50 Week 7 - Movies - Write SQL queries to answer questions about a database of movies.

In 3.sql, write a SQL query to list the titles of all movies with a release date on or after 2018, in alphabetical order.
Your query should output a table with a single column for the title of each movie.
Movies released in 2018 should be included, as should movies with release dates in the future.
*/

SELECT title FROM movies
WHERE year >= 2018
ORDER BY 1 ASC;