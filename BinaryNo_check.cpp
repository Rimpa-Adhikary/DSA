//binary number or not
#include<iostream>
#include<string>
using namespace std;
class binary
{
    string s;
    public:
        void read(void);
        void check(void);
        void ones_compliment(void);
        void display(void);
};
void binary :: read(void)
{
    cout<<"Enter number to check binary or not"<<endl;
    cin>>s;
}
void binary ::check(void)
{
    for( int i=0; i< s.length(); i++)
    {
        if((s.at(i)!='0')&&(s.at(i)!='1'))
        {
            cout<<"Incorrect binary number"<<endl;
            exit(0);
        }   
    }
    cout<<"binary number"<<endl;
}
void binary::ones_compliment(void)
{
	cout<<"after 1's compliment"<<endl;
	for( int i=0; i< s.length(); i++)
    {
    	if(s.at(i)=='0')
    		s.at(i)='1';
    	else
    		s.at(i)='0';
	}
}
void binary::display(void)
{
	cout<<"displaying number"<<endl;
	for( int i=0; i< s.length(); i++)
	{
		cout<<s.at(i);
	}
	cout<<" "<<endl;
}
int main()
{
    binary b;
    b.read();
    b.check();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}
