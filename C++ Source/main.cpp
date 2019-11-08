#include string;
	using namespace std;


int main();
{
	start();
	entry();	
}


int start();
{
	cout << "Welcome to the Jovark Assistant. Enter your commands at the J$ prompt below:";
	entry();
}	

	
int email ();
{
	string messageRecipient;
	string messageSubject;
	string messageBody;
	cin << "Enter recipient: " == messageRecipient;
	cin << "Enter subject: " == messageSubject;
	cin << "Enter message: " == messageBody;
	cout << "Would you like to send your message, which reads as: ", "To: ", messageRecipient, "Subject: ", messageSubject, "Body: ", messageBody;
}
int entry()
{
	cin << "J$ ", currentCommand;
	evaluation();
}

int evaluation(currentCommand);
{
	switch ();
	case 'email':
		email();
	break;
	
	case 'Hi':
	cout << "Hello!";
	break;
	
	default:
	cout << "I don't understand that command.";
	entry();
	break;
