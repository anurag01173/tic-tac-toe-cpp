#include<iostream>
#include<string>

using namespace std;


// int count_vowels(string str)
// {
//     int count_v=0;
//     for(int x=0; str[x];x++)
//     {
//         if('a'==str[x] || 'e'==str[x] ||'i'==str[x] ||'o'==str[x] ||'u'==str[x]  )
//         count_v++;

//         if('A'==str[x] || 'E'==str[x] ||'I'==str[x] ||'O'==str[x] ||'U'==str[x]  )
//         count_v++;
//     }
// return count_v;    
// }

// int main()
// {
//     string s="Anurag";

//     cout<<"vowles ="<<count_vowels(s);
//     return 0;
// }

//---------------------------

// bool is_palindrom(string str)
// {
//     int z, len=str.size();
// for(int x=0,z=len-1;x<len/2;x++,z--)
// {
//     if(str[x]!=str[z])
//     return false;

//     return true;
// }

// }

// int main()
// {
//     string s="nitin";
//     if(is_palindrom(s))
//     cout<<"palindrom";
//     else
//     cout<<"not palindrom";
//     return 0;

// }



//-----------------------------------


/* bool find_pattern(string patt, string str)
{
    int lenp=patt.size();
    int lens = str.size();
int a,z;
    for(int x=0;x<=lens-lenp;x++)
    {
        z=x;
        for(int a=0;a<lenp;a++,z++)
        
            if(patt[a]!=str[z])
            break;

            if(a==lenp)
            return true;
    }
return false;
}

int main()
{
  string s="chulbul is hindi tacher "  ;
  string p="hindi";

  if(find_pattern(p,s))
  cout<<"pattern found ";
else
cout<<"pattren not found ";

return 0;
}*/



//-------------------------------------------------

/* void capitalise(string &str)
{
    for(int x=0;str[x];x++)
{
    if(x==0 && str[x]>='a'&& str[x]<='z')
    str[x]=str[x]-32;

    else if (str[x]==' '&& str[x+1]>='a'&& str[x+1]<='z')
     str[x+1]=str[x+1]-32;
}
}

int main()
{
    string s=" kata is mom tim tim tim";
    capitalise(s);
    cout<<"capitalize 1st word is"<<s;
    return 0;

}  */

//----------------------------------

/*void reverse_string(string &str)
{
    char ch;
    int z,len=str.size();
    for(int  x=0,z=len-1;x<len/2;x++,z--)
    {
    ch=str[x];
    str[x]=str[z];
    str[z]=ch;
    }
}

int main()
{
    string s="jamuna ";
reverse_string(s);
cout<<"reverse is "<<s;

return 0;
}