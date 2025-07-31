#include <iostream>
#include <cstring>
#include <unistd.h>

using namespace std;

// Function to receive messages from the server
void receive_messages(int client_socket) {
    char buffer[1024];
    while (true) {
        memset(buffer, 0, sizeof(buffer));
        int received = recv(client_socket, buffer, sizeof(buffer), 0);

        if (received <= 0) {
            cout << "Server connection lost." << endl;
            break;
        }

        cout << buffer << endl;
    }
}

// Main client function
void start_client() {
    int client_socket;
    sockaddr_in server_addr;

    client_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (client_socket == -1) {
        cerr << "Failed to create socket." << endl;
        exit(1);
    }

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(12345);
    server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");

    if (connect(client_socket, (struct sockaddr *)&server_addr, sizeof(server_addr)) == -1) {
        cerr << "Failed to connect to server." << endl;
        exit(1);
    }

    // Start a thread to receive messages
    thread receiver_thread(receive_messages, client_socket);
    receiver_thread.detach();

    string message;
    while (true) {
        getline(cin, message);

        if (message == "exit") {
            send(client_socket, message.c_str(), message.length(), 0);
            break;
        }

        send(client_socket, message.c_str(), message.length(), 0);
    }

    close(client_socket);
}

int main() {
    start_client();
    return 0;
}
