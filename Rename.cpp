#include<fstream.h>
#include<string.h>
#include<ctype.h>

//raw =  dir /a /b
void main()
{

fstream e,f,g;
char a[240],b[240];
char comma = 34;

e.open("new.txt",ios::in);
f.open("raw.txt",ios::in);
g.open("Rename.bat",ios::out);

	while((!e.eof())&&(!f.eof()))
		{
			f.getline(a,240);
			e.getline(b,240);
			
			g<<"ren "<<comma<<a<<comma<<" "<<b<<comma<<">>C:\ren.txt\n";
		}


cin>>a;
f.close();
g.close();
}
