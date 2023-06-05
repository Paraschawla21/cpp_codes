#include <bits/stdc++.h>
using namespace std;
int main()
{
    int key;
    string message, choice;
    cout << "\nEnter the text you want to Encrypt or Decrypt:\n";
    getline(cin, message);
    cout << "\nEnter the Key value:\n";
    cin >> key;
    cout << "\nType 'encrpyt' for encryption or 'decrypt' for decryption:\n";
    cin >> choice;
    if (choice == "encrypt")
    {
        string encrypted_text;
        for (int i = 0; i < message.length(); i++)
        {
            if (message[i] + key > 'z')
            {
                encrypted_text += message[i] + key - 26;
            }
            else if (message[i] == ' ')
            {
                encrypted_text += ' ';
            }
            else
            {
                encrypted_text += message[i] + key;
            }
        }
        cout << "\nEncrypted text is:\n"
             << encrypted_text;
    }
    else if (choice == "decrypt")
    {
        string decrypted_text;
        for (int i = 0; i < message.length(); i++)
        {
            if (message[i] == ' ')
            {
                decrypted_text += ' ';
            }
            else if (message[i] - key < 'a')
            {
                decrypted_text += message[i] - key + 26;
            }
            else
            {
                decrypted_text += message[i] - key;
            }
        }
        cout << "\nDecrypted text is:\n"
             << decrypted_text;
    }
    return 0;
}