#include<iostream>
using namespace std;
int main()
{
	char OOP[10][300]={"\nQUESTION 1 \nWho invented OOP?\n a) Andrea Ferro\n b) Adele Goldberg\n c) Alan Kay]\n d) Dennis Ritchie\nEnter your choice a,b,c,d:",
	"\nQUESTION 2\n Which is not a feature of OOP in general definitions?\n a) Efficient Code\n b) Code reusability\n c) Modularity\n d) Duplicate/Redundant data\nEnter your choice a,b,c,d:",
	"\nQUESTION 3\n Which feature of OOP indicates code reusability?\n a) Abstraction\n b) Polymorphism\n c) Encapsulation\n d) Inheritance\nEnter your choice a,b,c,d:",
	"\nQUESTION 4\n Which header file is required in C++ to use OOP?\n a) OOP can be used without using any header file\n b) stdlib.h\n c) iostream.h\n d) stdio.h\nEnter your choice a,b,c,d:",
	"\nQUESTION 5\n How many types of access specifiers are provided in OOP (C++)?\n a) 4\n b) 3\n c) 2\n d) 1\nEnter your choice a,b,c,d:",
	"\nQUESTION 6\n In multilevel inheritance, which is the most significant feature of OOP used?\n a) Code efficiency\n b) Code readability\n c) Flexibility\n d) Code reusability\nEnter your choice a,b,c,d:",
	"\nQUESTION 7\n In which access should a constructor be defined, so that object of the class can be created in any function?\n a) Any access specifier will work\n b) Private\n c) Public\n d) Protected\nEnter your choice a,b,c,d:",
	"\nQUESTION 8\n Which access specifier is usually used for data members of a class?\n a) Protected\n b) Private\n c) Public\n d) Default\nEnter your choice a,b,c,d:",
	"\nQUESTION 9\n Which feature of OOP reduces the use of nested classes?\n a) Inheritance\n b) Binding\n c) Abstraction\n d) Encapsulation\nEnter your choice a,b,c,d:",
	"\nQUESTION 10\n Which type of members can’t be accessed in derived classes of a base class?\n a) All can be accessed\n b) Protected\n c) Private\n d) Public\nEnter your choice a,b,c,d:"};	
	char ANS_O[10]={'c','d','d','a','b','d','c','b','a','c'};
	char OP[10];
	
	char Python[10][300]={"\nQUESTION 1 \n Who developed Python Programming Language?\n a) Wick van Rossum\n b) Rasmus Lerdorf\n c) Guido van Rossum\n d) Niene Stom\nEnter your choice a,b,c,d:",
	"\nQUESTION 2\n Which type of Programming does Python support?\n a) object-oriented programming\n b) structured programming\n c) functional programming\n d)all of the mentioned\nEnter your choice a,b,c,d:",
	"\nQUESTION 3\n Is Python case sensitive when dealing with identifiers?\n a) no\n b) yes\n c) machine dependent\n d) none of the mentioned\nEnter your choice a,b,c,d:",
	"\nQUESTION 4\n Which of the following is the correct extension of the Python file?\n a) .python\n b) .pl\n c) .py\n d) .p\nEnter your choice a,b,c,d:",
	"\nQUESTION 5\'[]'n Is Python code compiled or interpreted?\n a) Python code is both compiled and interpreted\n b) Python code is neither compiled nor interpreted\n c) Python code is only compiled\n d) Python code is only interpreted\nEnter your choice a,b,c,d:",
	"\nQUESTION 6\n All keywords in Python are in _________\n a) Capitalized\n b) lower case\n c) UPPER CASE\n d) None of the mentioned\nEnter your choice a,b,c,d:",
	"\nQUESTION 7\n What will be the value of the following Python expression?4 + 3 % 5\n a) 7\n b) 2\n c) 4\n d) 1\nEnter your choice a,b,c,d:",
	"\nQUESTION 8\n Which of the following is used to define a block of code in Python language?\n a) Indentation\n b) Key\n c) Brackets\n d) All of the mentioned\nEnter your choice a,b,c,d:",
	"\nQUESTION 9\n Which keyword is used for function in Python language?\n a) Function\n b) def\n c) Fun\n d) Define\nEnter your choice a,b,c,d:",
	"\nQUESTION 10\n Which of the following character is used to give single-line comments in Python?\n a) //\n b) #\n c) !\n d) /*\nEnter your choice a,b,c,d:"};
	char ANS_P[10]={'c','d','b','c','a','d','a','a','b','b'};
	char PY[10];

	char Cpp[10][400]={"\nQUESTION 1\n Which of the following is the correct identifier?\n a)$var_name\n b)VAR_123\n c)varname@\n d)None of the above\nEnter your choice a,b,c,d:",
	"\nQUESTION 2\n Who invented C++?\n a) Dennis Ritchie\n b) Ken Thompson\n c) Brian Kernighan\n d) Bjarne Stroustrup\nEnter your choice a,b,c,d:",
	"\nQUESTION 3\n Which of the following is used for comments in C++?\n a) /* comment */\n b) // comment */\n c) // comment\n d) both // comment or /* comment */\nEnter your choice a,b,c,d:",
	"\nQUESTION 4\n Which of the following approach is used by C++?\n a) Left-right\n b) Right-left\n c) Bottom-up\n d) Top-down/\nEnter your choice a,b,c,d:",
	"\nQUESTION 5\n Which of the following type is provided by C++ but not C?\n a) double\n b) float\n c) int\n d) bool\nEnter your choice a,b,c,d,:",
	"\nQUESTION 6\n By default, all the files in C++ are opened in _________ mode.\n a) Binary\n b) VTC\n c) Text\n d) ISCII\nEnter your choice a,b,c,d,:",
	"\nQUESTION 7\n Which is more effective while calling the C++ functions?\n a) call by object\n b) call by pointer\n c) call by value\n d) call by reference\nEnter your choice a,b,c,d:",
	"\nQUESTION 8\n Which of the following is used to terminate the function declaration in C++?\n a) ;\n b) ]\n c) )\n d) :\nEnter your choice a,b,c,d:",
	"\nQUESTION 9\n Which of the following symbol is used to declare the preprocessor directives in C++?\n a) $\n b) ^\n c) #\n d) *\nEnter your choice a,b,c,d:",
	"\nQUESTION 10\n Pick the incorrect statement about inline functions in C++?\n a) Saves overhead of a return call from a function\n b) They are generally very large and complicated function\n c) These functions are inserted/substituted at the point of call\n d) They reduce function call overheads\nEnter your choice a,b,c,d:"};
	char ANS_C[10]={'b','d','d','c','d','c','d','a','c','b'};
	char CP[10];
	int score1=0, score2=0, score3=0;
	int repeat=0, a=0, b=0, c=0;
	char ch;
	char name[25], rollno[12];
	cout<<"\t\t\t\t\t\tONLINE QUIZ\n";
	cout<<"Enter Your Name"<<endl;
	gets (name);
	cout <<"Enter Your Roll Number"<<endl;
	gets (rollno);
	cout<<"\t\t\t\t*****INSTRUCTIONS*****\nYou are required to do 3 quizzes and In each quiz  you are given 10 questions.\n In each question you are given 4 choices and you have to opt the right choice\n Your passing criteria is 50%\n";
	system("pause");

	while(repeat<3)
	{
	
		system("cls");
		cout <<"\n\n Which Quiz you want to do ?\na.C++\nb.PYTHON\nc.OOP\nPress 'd' to quit\nEnter your choice:";
		cin>>ch;
		if(ch=='a'&& a==0)
		{
			a++;
			repeat++;
			system("cls");
			cout<<"You Opted to do C++ Quiz \n\n";
			cout<<"Quiz Started";
			for (int i=0; i<10 ;i++)
			{
				cout<<Cpp[i];
				cin>>CP[i];
			}
			for(int i=0;i<10;i++)
			{
				if(ANS_C[i]==CP[i])
				{
					score1++;
				}
			}
		}
		else if(ch=='b'&& b==0)
		{
			b++;
			repeat++;
			system("cls");
			cout<<"You Opted to do PYTHON Quiz\n\n ";
			cout<<"Quiz Started";
			for (int i=0; i<10 ;i++)
			{
				cout<<Python[i];
				cin>>PY[i];
			}
			
			for(int i=0;i<10;i++)
			{
				if(ANS_P[i]==PY[i])
				{
					score2++;
				}
			}
		}
		else if(ch=='c'&&c==0)
		{
			c++;
			repeat++;
			system("cls");
			cout<<"You Opted to do OOP Quiz\n\n ";
			cout<<"Quiz Started";
			for (int i=0; i<10 ;i++)
			{
				cout<<OOP[i];
				cin>>OP[i];
			}
			
			for(int i=0;i<10;i++)
			{
				if(ANS_O[i]==OP[i])
				{
					score3++;
				}
			}
	}
		else if(ch=='d')
		{
			break;
		}
		system("cls");
		if (repeat<3) 
		{
		cout<<"\t\t\t\t****you have completed this quiz****\n To take next quiz,\n";
		system("pause");	
		}
	}
	
	system("cls");
	cout<<"\t\t\t\t****RESULT****"<<endl;
	cout<<name<<" having Roll Number "<<rollno<< " GOT TOTAL SCORE ="<<(score1+score2+score3)<<" Out of 30."<<endl;
	cout<<"Details are as follows: \nPYTHON Score="<<score2<<endl<<"CPP Score="<<score1<<endl<<"OOP Score= "<<score3<<endl;
	int score=score1+score2+score3;
		if(score>=15)
		{
			cout<<"\nCongratulations you pass the Quiz";
			
		}
		else
		{
			cout<<"\nOOPS you Fail the quiz";
		
		}
		
	return 0;
}
		
	
