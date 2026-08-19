💬 Java Real-Time Chat Messenger

A simple real-time client-server chat application developed using Java Socket Programming and TCP/IP communication.

The application allows a Java client and server running in separate terminals to establish a TCP connection and exchange messages in real time.

📌 Project Overview

This project demonstrates how client-server communication works using Java networking APIs.

The server listens for incoming client connections on a specific port, while the client connects to the server using its IP address and port number.

Once the connection is established, both applications can exchange messages through input and output streams.

Architecture
                 TCP Connection
                localhost:2100
                      │
                      │
             ┌────────▼────────┐
             │   Chat Server   │
             │                 │
             │  ServerSocket   │
             │    Port 2100    │
             └────────┬────────┘
                      │
                      │ Socket
                      │
             ┌────────▼────────┐
             │   Chat Client   │
             │                 │
             │     Socket      │
             └─────────────────┘
🚀 Features
. Real-time message communication
. Java-based client-server architecture
. TCP socket communication
. Separate client and server applications
. Terminal-based chat interface
. Port-based network communication
. Input and output stream handling
. Connection termination using the end command
🛠️ Technologies Used
. Java	Application development
. Socket Programming	Network communication
. TCP/IP	Reliable data transmission
. ServerSocket	Accepting client connections
. Socket	Establishing client-server communication
. BufferedReader	Reading messages
. PrintStream	Sending messages
Command Line	User interaction
📂 Project Structure
java-real-time-chat-messenger/
│
├── ChatClient.java
├── ChatServer.java
├── README.md
├── .gitignore
│
└── screenshots/
    ├── client-terminal.png
    └── server-terminal.png
⚙️ How It Works
1. Server Initialization

The server creates a ServerSocket on port 2100.

ServerSocket ssobj = new ServerSocket(2100);

The server then waits for a client connection.

Socket sobj = ssobj.accept();
2. Client Connection

The client connects to the server using:

Socket sobj = new Socket("localhost", 2100);

This establishes a TCP connection between the client and server.

3. Message Communication

The client sends messages to the server using:

pobj.println(str1);

The server receives them using:

bobj1.readLine();

The server can then send a response back to the client.

4. Connection Termination

The client can terminate the conversation by entering:

end

The socket connection is then closed.

▶️ How to Run
Prerequisites

Make sure Java is installed on your system.

Check your Java version:

java --version

Check the Java compiler:

javac --version
Step 1 — Clone the Repository
git clone <YOUR_GITHUB_REPOSITORY_URL>

Navigate to the project directory:

cd java-real-time-chat-messenger
Step 2 — Compile the Programs

Compile both Java files:

javac ChatServer.java ChatClient.java

This will generate:

ChatServer.class
ChatClient.class
Step 3 — Start the Server

Open the first terminal and run:

java ChatServer

You should see something similar to:

Server Application is Running
Server is Waiting at port 2100

The server is now waiting for a client connection.

Step 4 — Start the Client

Open a second terminal in the same project directory and run:

java ChatClient

You should see:

Client Application is Running
Connection is Successful with server
-------------------------------------
-------Marvellous Chat Client--------
-------------------------------------
Enter Message for server :
Step 5 — Start Chatting

Enter a message from the client terminal:

Hello Server

The server receives:

Client says :Hello Server

The server can then enter a response:

Hello Client

The client receives:

Server says :Hello Client
🔄 Communication Flow
       Chat Client
            │
            │ Message
            ▼
       Chat Server
            │
            │ Response
            ▼
       Chat Client

The communication continues until the client enters:

end
🧠 Concepts Demonstrated

This project provides practical implementation of several important computer science and networking concepts:

Java Networking

Using Java's networking APIs to establish communication between independent processes.

Client-Server Architecture

The server waits for connections while the client initiates the connection.

TCP Communication

The project uses TCP sockets, providing reliable and ordered communication.

Input/Output Streams

Java streams are used to send and receive messages across the network connection.

Port-Based Communication

The server listens on port:

2100

while the client connects to the same port.

Blocking I/O

The application waits for input from the network or terminal before continuing execution.

📸 Project Screenshots
Server Terminal

Add your server screenshot here:

screenshots/server-terminal.png
Client Terminal

Add your client screenshot here:

screenshots/client-terminal.png

You can display them in GitHub using:

![Chat Server](screenshots/server-terminal.png)

![Chat Client](screenshots/client-terminal.png)
🔮 Future Enhancements

The current version provides basic one-to-one client-server communication.

Planned improvements include:

Multiple simultaneous clients

Multithreaded client handling

Usernames

User authentication

Broadcast messaging

Private messaging

Group chat

Message timestamps

Chat history

Database integration

File sharing

GUI using JavaFX or Swing

Online/offline user status

📚 Learning Outcomes

Through this project, I gained practical experience with:

Java Socket Programming
TCP/IP networking
Client-server architecture
Network ports
Socket and ServerSocket
Java I/O streams
Blocking communication
Exception handling
Network connection management
👨‍💻 Author

Aaditya Mundhe

Project

Java Real-Time Chat Messenger

Domain

Java | Networking | Socket Programming | Backend Development
