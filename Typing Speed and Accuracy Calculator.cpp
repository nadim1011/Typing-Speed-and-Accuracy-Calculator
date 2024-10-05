// nadim [ict,mbstu]
#include <bits/stdc++.h>
using namespace std;
int main() {
   system("color 1");
vector<vector<string>> showStr(5);
    showStr[0]={"power", "time", "able", "congratulation", "zombie", "enough"};
    showStr[1]={"jumps","a","cute","quick","brown","cat","fox","come","over","the","time","zoo","lazy","sleep","dog","done", "from", "nation", "document", "include" };
    showStr[2]={"done", "from", "nation", "document", "include", "tag"};
    showStr[3]={"compare", "science", "desert", "past", "principle", "there", "too", "weather", "between", "again", "except", "example", "successive", "immoral", "industrial"};
    showStr[4]={"gmail", "student", "have", "time", "information", "relay", "there", "because", "weather", "without", "again", "except", "example", "successive", "immoral", "industrial"};

vector<pair<double,pair<double,double>>> history;
    history.push_back(make_pair(30,make_pair(44,96)));
    history.push_back(make_pair(15,make_pair(46,99)));

    main_menu:
    cout<<"\n";
    cout<<"\n";
    cout<<"\t\tMain menu"<<"\n";
    cout<<"\n";
    cout<<"\tTest your typing speed\n";
    cout<<"\n";
    cout<<"\t[1] Typing Test\n";
    cout<<"\t[2] History\n";
    cout<<"\t[3] Exit\n";

   int choice;
   cout<<"\n\tSelect any by option: ";
   cin>>choice;


     if(choice==1)
       {

         system("CLS");

             int oneOfFive=rand()%5;
            cout<<"=>Press Enter to start timer then start typing the text below.\n\n\n";
            for(auto it=showStr[oneOfFive].begin();it!=showStr[oneOfFive].end();it++)
            cout<<*it<<' ';
            cout<<"\n";

         vector<string> input;
            string in_str;
            getchar();           //waiting for start
     clock_t st=clock();      //start clock

            while(cin>>in_str)
                {
                  input.push_back(in_str);
                     if(getchar()=='\n')
                        break;
                }

     clock_t en=clock();     //end clock


            int rightInput=0;
            int in_n=input.size();
               for(int j=0;j<in_n;j++)
                     {
            if(find(showStr[oneOfFive].begin(),showStr[oneOfFive].end(),input[j])!=showStr[oneOfFive].end())
                  rightInput++;
                  }

    double wordCount=min(showStr[oneOfFive].size(),input.size());   // calculating
    double sec=(1.0*(en-st)/CLOCKS_PER_SEC);
    double min=((1.0*(en-st)/CLOCKS_PER_SEC)/60);
    double speed=wordCount/min;
    double accu=(rightInput/wordCount)*100;

    sec=round(sec);
    speed=round(speed);

            system("CLS");

    //cout<<rightInput<<' '<<wordCount<<' '<<speed<<'\n';  // testing
    cout<<"\n";

            cout<<"TOTAL WORD:"<<wordCount<<'\n';
            cout<<"TIME :"<<sec<<" SEC"<<'\n';
            cout<<"SPEED :"<<speed<<" WPM"<<'\n';
            cout<<"ACCURACY :"<<accu<<" %"<<'\n';


               //vector<pair<int,pair<int,int>>> history;
               history.push_back(make_pair(wordCount,make_pair(speed,accu)));  // storing result


            cout<<"\t[1] Main menu\n";
         cout<<"\t[2] Exit\n";
               int subChoice;
            cout<<"\n\tSelect any by number: ";
               cin>>subChoice;

            if(subChoice==1)
            {
               system("CLS");
               goto main_menu;
            }
            else if(subChoice==2)
            {
               return 0;
            }


     }



     if(choice==2)
     {
            system("CLS");
            cout<<"\n\t\t\tHistory"<<"\n";
         cout<<"\n\tWord typed\tTyping speed\tAccuracy"<<'\n';
         for(int i=0;i<history.size();i++)
         {
            cout<<"\t    "<<history[i].first<<"\t\t"<<"   "<<history[i].second.first<<" WPM\t  "<<history[i].second.second<<" %\n";
         }
         cout<<"\n\n";

         cout<<"\t[1] Main menu\n";
         cout<<"\t[2] Exit\n";
               int subChoice;
            cout<<"\n\tSelect any by number: ";
               cin>>subChoice;

            if(subChoice==1)
            {
               system("CLS");
               goto main_menu;
            }
            else if(subChoice==2)
            {
               return 0;
            }

     }


   return 0;
}
