#include <string>
#include <string_view>
#include <iostream>

using namespace std;

void email()
{
	string messageRecipient;
	string messageSubject;
	string messageBody;
	cout << "Enter the recipient's email address: ";
	cin >> messageRecipient;
	cout << "Enter the subject of the email: ";
	cin >> messageSubject;
	cout << "Enter the body of the email: ";
	cin >> messageBody;
	cout << "Would you like to send your message, which reads as: To: " + messageRecipient + " Subject: " + messageSubject + " Body: " + messageBody;
	cout << "Enter Y for yes or N for no: ";
	string response;
	cin >> response;
	if (response == "Y" || response == "y")
	{
		cout << "Sending message...";
	}
	else
	{
		cout << "Message not sent!";
	}
}

void exit()
{
	cout << "Exiting...";
}

template <typename PrefixType>
int startsWith(const std::string &str, PrefixType prefix)
{
	return str.starts_with(prefix);
}

int entry()
{
	string command;
	cout << "J$ ";
	cin >> command;
	if (startsWith(command, string_view("email")))
	{
		email();
	}
	if (startsWith(command, string_view("clear")))
	{
		system("clear");
	}
	else if (startsWith(command, string_view("exit")))
	{
		terminate();
	}
	else if (startsWith(command, string_view("system")))
	{
		string command;
		command.erase(0, 7);
		const char *c = command.data();
		cout << c;
		system("ls");
		command.clear();
	}
	else if (startsWith(command, string_view("help")))
	{
		cout << "email - Send an email" << endl;
		cout << "exit - Exit the Jovark Shell" << endl;
		cout << "system - Run a system command" << endl;
		cout << "clear - Clear the screen" << endl;
		cout << "help - Display this help menu" << endl;
	}
	else if (command != "")
	{
		cout << command + " is an invalid command." << endl;
		cout << "Type 'help' for a list of commands. " << endl;
		entry();
	}
	return true;
}

int main()
{
	cout << "Welcome to the Jovark Shell. Enter your commands at the J$ prompt below: " << endl;
	cout << "Use CTRL + C to exit the program. " << endl;
	do
	{
		entry();
	} while (true);
	return 0;
}
