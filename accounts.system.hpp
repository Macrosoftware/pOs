#define AM_DEACCESS		0
#define AM_STDUSER		1
#define AM_MODERATOR		2
#define AM_ADMIN		3
#define AM_ROOT			4
class Account
{
	private:
		char psw[100];
		int access_mode;
		char usr[100];
		
	public:
		Account(void)
		{
			access_mode = AM_DEACCESS;
		}
		bool login(void)
		{
			char pswtab[30][100];
			int acs_md[30];
			char usrtab[30][100];
			FILE * acfile = fopen("accounts.acc", "a+");
			
			cout << "Give me password: ";
			char pswinput[100] = "";
			cin >> pswinput;
			system("clear");
			cout << "Give username: ";
			char username[100];
			cin >> usrname;
		}
};
