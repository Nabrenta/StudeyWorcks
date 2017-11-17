#include<iostream>
#include "ErrorUser.h"
using namespace std;
void ErrorUser::AutorisError()
{
	cerr << "Autorisation failed! Incorrect login or password!" << endl;
}
void WasntTaken::noBook()
{
	cerr << "This book wasn't taken!" << endl;
}
void EmptyUsList::noUser()
{
	cerr << "User list is empty!" << endl;
}
void Debth::debthBook()
{
	cerr << "You can*t take book becouse you has debth!" << endl;
}