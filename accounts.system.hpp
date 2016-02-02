#define AM_DEACCESS		0
#define AM_STDUSER		1
#define AM_MODERATOR	2
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
			char tym[3];
			FILE * acfile = fopen("accounts.acc", "a+");
			for (int i = 0; i < 30; i++)
			{
				fscanf(acfile, "%s %s %s", usrtab[i], pswtab[i], tym);
				acs_md[i] = atoi(tym);
			}
			int proby = 0;
			
			again: cout << "Give me a password: ";
			char pswinput[100] = "";
			cin >> pswinput;
			system("clear");
			cout << "Give a username: ";
			char username[100];
			cin >> username;
			for (int i = 0; i < 30; i++)
			{
				if ((!strcmp(pswinput, pswtab[i])) && (!strcmp(username, usrtab[i])))
				{
					access_mode = acs_md[i];
					strcpy(psw, pswtab[i]);
					strcpy(usr, usrtab[i]);
					fclose(acfile);
					return true;
				}
			}
			if (language == 1)
			{
				
				cout << "Incorrect login or password.\n";
				cout << "If you give me incorect password " << (10 - proby) << "times again, you will be blocked.\n";
			}
			else if (language == 2)
			{
				cout << "Nieprawidłowy login lub hasło.\n";
				cout << "Jeśli podasz mi niepoprawne hasło jeszcze " << (10 - proby) << " razy, zostaniesz zablokowany.\n";
			}
			if (proby >= 10)
			{
				exit(1);
			}
			goto again;
		}
		bool isaccount(void)
		{
			bool ret = false;
			FILE * acc = fopen("acconts.acc", "a+");
			char * byleco = (char *) malloc(100);
			fscanf(acc, "%s", byleco);
			if (!strcmp(byleco, ""))
				ret = false;
			else
				ret = true;
			rewind(acc);
			fclose(acc);
			return ret;
		}
		bool registration(bool firstaccount, int acs_md)
		{
			FILE * acc = fopen("accounts.acc", "a+");
			char password[100] = "";
			char usrn[100] = "";
		}
};
