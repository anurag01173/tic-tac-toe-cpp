#include<iostream>
#include<string>
using namespace std;

//-----------------------------
//my tech 
// void count_words(string str)
// {
//     int count=0;
//     int len=str.size();
// for(int i=0 ; i<len;i++)
// {
// if(str[i]==' ')
// count++;
// }
// cout<<"words are"<<count+1;

// } 


// int main()
// {
//     string s="kaka is maka is taka";
//     count_words(s);
//     return 0;
// }



//sir tech
/*int count_word(string str)
{
    if(str.empty())
    return 0;

    int count=1;
    for(auto s:str)
    {
        if(s==' ')
        count++;
    }
    return count;
}

int main()
{
    string s="kaka is maka is taka";
    int  s1=count_word(s);
    cout<<"count words = "<<s1;
    return 0;
}*/

//------------------------------

/*void trim_string(string &str)
{
    string :: iterator it;
    while(str.back()==' ')
    str.pop_back();

    while(str.front() == ' '){
it=str.begin();
str.erase(it);
 }
}

int main()
{
      string s="  kaka is maka is taka  ";
      trim_string(s);
      cout<<" the word after trim is\n"<<s;
      return 0;
}*/

//-----------------------------------------


/*void remove_extraspace(string &str)
{
    string ::  iterator it;
    for(it=str.begin();it!=str.end();it++)
    {
    if(*it == ' '&&*(it+1) ==' ')
    {
    str.erase(it);
    it= str.begin();
    }
    }
}
int main()
{
      string s="  kaka    is maka                     is taka  ";
      remove_extraspace(s);
      cout<<" after extra space is removed\n"<<s;
      return 0;
}*/


//-------------------------------------------------

//cant understand
/*vector<string> Split_string(string str)
{
    vector<string> temp;
    string s1;
    for(auto s : str)
        if(s != ' ')
            s1.push_back(s);
        else    {
            temp.push_back(s1);
            s1.clear();
        }
    temp.push_back(s1);
    return temp;
}*/

//-----------------------------------------------------


