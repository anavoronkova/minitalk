# Minitalk

## Summary
Minitalk is a small data exchange program developed in C using UNIX signals. The project involves creating a client-server communication model where messages are transmitted using specific UNIX signals.

## Introduction
The purpose of Minitalk is to implement inter-process communication using UNIX signals. This project includes a client and server program to exchange data using only SIGUSR1 and SIGUSR2 signals, helping develop an understanding of low-level data communication mechanisms.

## Installation
1. Clone the repository:
   ```
   git clone <repository_url>
   ```
2. Navigate to the project directory:
   ```
   cd minitalk
   ```
3. Compile the project:
   ```
   make
   ```

## Usage
1. Run the server to obtain its PID:
   ```
   ./server
   ```
2. Use the client to send a message to the server:
   ```
   ./client <server_pid> "Your message here"
   ```

## Features
- **Client-Server Communication**: The server prints messages sent by the client.
- **UNIX Signals**: Communication is handled using SIGUSR1 and SIGUSR2.
- **Real-Time Message Display**: Messages are displayed by the server without noticeable delay.
- **Robust Error Handling**: Handles invalid PIDs, memory allocation issues, and other errors.
- **Bonus**: Acknowledgment signals and support for Unicode characters.