-- Create the database if it doesn't exist and switch to it
CREATE DATABASE IF NOT EXISTS tictactoe;
USE tictactoe;

-- Create the Users table
CREATE TABLE IF NOT EXISTS Users (
    username VARCHAR(30) UNIQUE NOT NULL,
    password_hash CHAR(60) NOT NULL, -- Assuming bcrypt hash
    PRIMARY KEY (username)
);

-- Create the History table
CREATE TABLE IF NOT EXISTS History (
    game_id INT AUTO_INCREMENT PRIMARY KEY,
    username VARCHAR(30) NOT NULL,
    game_result ENUM('win', 'lose', 'draw') NOT NULL,
    opponent_type ENUM('human', 'AI') NOT NULL,
    symbol ENUM('X', 'O') NOT NULL,
    game_timestamp TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    game_state VARCHAR(9) NOT NULL, -- Representing the board as a 9-character string
    FOREIGN KEY (username) REFERENCES Users(username)
);

-- Add indexes for performance
CREATE INDEX idx_username ON History(username);
CREATE INDEX idx_game_result ON History(game_result);
CREATE INDEX idx_opponent_type ON History(opponent_type);
