CREATE DATABASE Betta;

USE Betta;

CREATE TABLE empresa (
id_empresa INT PRIMARY KEY AUTO_INCREMENT,
cnpj CHAR (14),
nome_empresa VARCHAR (50),
cidade VARCHAR (30),
endereco VARCHAR (40),
cep CHAR (8)
);


CREATE TABLE dado_sensor (
id_sensor INT PRIMARY KEY AUTO_INCREMENT,
tipo_sensor varchar(50),
temperatura DOUBLE,
dt_temp DATETIME
);

