DROP DATABASE IF EXISTS Students;

CREATE DATABASE Students;

USE students;

CREATE TABLE Student(
    uid INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(20),
    mobile CHAR(10),
    city VARCHAR(15),
    email VARCHAR(50)
);

