#include<iostream>
#include<string>

using namespace std;

int main()
{
	int first;
	int second;
	int third;
	int fourth;
	int fifth;
	int sixth;
	int seventh;
	int eighth;
	int ninth;
	int tenth;

	cout << "Do you want to get married or live alone?" << endl << "0 - Married" << endl << "1 - Alone" << endl;
	cin >> first;
	if (first == 0)
	{
		cout << "Do you love him?" << endl << "0 - Yes" << endl << "1 - No" << endl;
		cin >> second;
		if (second == 0)
		{
			cout << "Do you live in the country or in a castle?" << endl << "0 - Country" << endl << "1 - Castle" << endl;
			cin >> third;
			if (third == 0)
			{
				cout << "One day you two are walking in the woods and see a bear" << endl << "0 - EAT HIM, LET ME LIVE!" << endl << "1 - GET BEHIND ME!" << endl;
				cin >> fourth;
				if (fourth == 0)
				{
					cout << "Your husband is devoured by the bear." << endl << "0 - NOOOOO, HONNY!" << endl << "1 - YES! We got rid of that loser" << endl;
					cin >> fifth;
					if (fifth == 0)
					{
						cout << "You die of sadness" << endl;
					}
					else
					{
						cout << "You die because you're terrible" << endl;
					}
				}
				else
				{
					cout << "You are devoured by the bear" << endl << "0 - Awh, shucks" << endl << "1 - Yay, my guy got away!" << endl;
					cin >> fifth;
					if (fifth == 0)
					{
						cout << "At least you lived a noble life" << endl;
					}
					else
					{
						cout << "You are the best kind of person" << endl;
					}
				}
			}
			else
			{
				cout << "One day you two are strolling throught the courtyard and someone throws poo at you" << endl << "0 - EXECUTE HIM!" << endl << "1 - PUT HIM IN PRISON!" << endl;
				cin >> fourth;
				if (fourth == 0)
				{
					cout << "It turns out that your husband was the one to throw poop and you and now he's dead" << endl << "0 - He deserved it" << endl << "1 - Dang it" << endl;
					cin >> fifth;
					if (fifth == 0)
					{
						cout << "Yeah, he did. But now there isn't a monarch and you get killed for the thrown" << endl;
					}
					else
					{
						cout << "You rule the thrown happily by yourself" << endl;
					}
				}
				else
				{
					cout << "So you put him in prison. Cool. The castle is also attacked because the guy is angry" << endl << "0 - Surrender" << endl << "1 - TO ARMS!" << endl;
					cin >> fifth;
					if (fifth == 0)
					{
						cout << "They kill you because why not" << endl;
					}
					else
					{
						cout << "You guys are not even close to enough to stop them. You get taken away as a sex slave" << endl;
					}
				}
			}
		}
		else
		{
			cout << "Do you want a divorce?" << endl << "0 - Yes" << endl << "1 - No" << endl;
			cin >> third;
			if (third == 0)
			{
				cout << "Then you're now divorced" << endl << "0 - Yay" << endl << "1 - Awh, shucks" << endl;
				cin >> fourth;
				if (fourth == 0)
				{
					cout << "You get taken as a slave because you don't have a husband to protect you" << endl;
				}
				else
				{
					cout << "The king takes you as his bride" << endl;
				}
			}
			else
			{
				cout << "You're pretty much living like every other women in this world" << endl;
			}
		}
	}
	else
	{
		cout << "Would you ever want to love someone?" << endl << "0 - No" << endl << "1 - Yes" << endl;
		cin >> second;
		if (second == 0)
		{
			cout << "You get married anyway because that's the way the world works" << endl;
		}
		else
		{
			cout << "Great! Too bad you die in your sleep" << endl;
		}
	}

	system("pause");
	return 0;
}