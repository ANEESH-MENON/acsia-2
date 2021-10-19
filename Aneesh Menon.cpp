#include<iostream.h>
#include<string>
using namespace std;
class Note
{
 public:
 string title;
 string text;
 string tags[25];
 void addNote(string ti,string te,string ta[25])
 { 
   title=ti;
   text=te;
   int count=0;
   for(int i=0;i<25;i++)
   {	
	    if(ta[i]!="\0")
	    count++;
   }
   for(i=0;i<count;i++)
   {	tags[i]=ta[i]; }
 }
 void getNotedetails()
 {
   cout<<"Title:"<<title<<"\n";
   cout<<"Text:"<<text<<"\n";
   cout<<"Tags: {";
   for(int i=0;i<2;i++)
   { cout<<tags[i]<<",";}
   cout<<"}";
 }
 
};

int main()
{
  Note n;
  int ch;
  string title="Acsia";
  string text="ECU Software and Research Company"
  string ta[2]={"ECU Software","Research"};
  n.addNote(title,text,ta);
  do{
    cout<<"enter 1,2 or 3 from the below options";
    cout<<"1.search by title";
    cout<<"2.search by text";
    cout<<"3.search by tags";
    cin>>ch;
    switch(ch)
    {
      case 1:
        cout<<"enter the title";
        string strtitle;
        cin>>strtitle;
        if(n.title==title)
        n.getNotedetails();
      break;
      case 2:
        cout<<"enter the text";
        string strtitle;
        cin>>strtext;
        if(n.text==text)
        n.getNotedetails();
      break;
      case 3:
        cout<<"enter the tag";
        string strtag;
        cin>>strtag;
        for(i=0;i<2;i++){
          if(n.ta[i]==strtag)
          n.getNotedetails();}
      break;
    string ans;
    cout<<"do you want to continue";
    cin>>ans;
    
      
    }while(ans=="yes")
  }
  return 0;  
}

