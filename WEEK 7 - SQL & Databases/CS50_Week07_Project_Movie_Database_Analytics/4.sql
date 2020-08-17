/*
Yannique Hecht
HARVARD CS50 Week 7 - Movies - Write SQL queries to answer questions about a database of movies.

In 4.sql, write a SQL query to determine the number of movies with an IMDb rating of 10.0.
Your query should output a table with a single column and a single row (plus optional header) containing the number of movies with a 10.0 rating.
*/

SELECT COUNT(title) FROM movies
JOIN ratings on movies.id = ratings.movie_id
WHERE rating = 10;