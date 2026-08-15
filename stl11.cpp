#include<iostream>
#include<queue>
#include<vector>

using namespace std;


// class Student
// {
// private:
//  int roll_no;
//  string name;
//  string courseName;
  

//  public:
//  Student(int r, string n, string cn)
//  {
// roll_no = r;
// name=n;
// courseName=cn;
//  }

//  Student()
//  {}
//     void setroll_no(int r)
//     {
//         roll_no=r;
//     }
 
//     void setname(string n)
//     {
//         name=n;
//     }

//     void setcourseName(string cn)
//     {
//         courseName=cn;
//     }

//     int getroll_no()
//     {
//         return roll_no;
//     }
//  string getname()
//     {
//         return name;
//     }

//     string  getcourseName()
//     {
//         return courseName;
//     }

//     void showdata()
//     {
//         cout<<"rollNo \n"<<roll_no<<endl;
//         cout<<"name is\n"<<name<<endl;
//         cout<<"cousename\n"<<courseName<<endl;

//     }
// };


// class roll_rank
// {
//     public:
//     bool operator()(Student s1, Student s2)
//     {
//     return s1.getroll_no() < s2.getroll_no();
//     }
// };

// int main()
// {
//     Student s1(29,"kuku","bca");
//     Student s2(39,"tuku","ba");
//     Student s3(99,"suku","mca");

//     priority_queue<Student ,vector<Student>, roll_rank> pq1;

//     pq1.push(s1);
//     pq1.push(s2);
//     pq1.push(s3);

//     Student s4= pq1.top();
// s4.showdata();
//     return 0;
// }


//----------------------------------------------------------






// class Student
// {
// private:
//  int roll_no;
//  string name;
//  string courseName;
  

//  public:
//  Student(int r, string n, string cn)
//  {
// roll_no = r;
// name=n;
// courseName=cn;
//  }

//  Student()
//  {}
//     void setroll_no(int r)
//     {
//         roll_no=r;
//     }
 
//     void setname(string n)
//     {
//         name=n;
//     }

//     void setcourseName(string cn)
//     {
//         courseName=cn;
//     }

//     int getroll_no()
//     {
//         return roll_no;
//     }
//  string getname()
//     {
//         return name;
//     }

//     string  getcourseName()
//     {
//         return courseName;
//     }

//     void showdata()
//     {
//         cout<<"rollNo \n"<<roll_no<<endl;
//         cout<<"name is\n"<<name<<endl;
//         cout<<"cousename\n"<<courseName<<endl;

//     }
// };


// class Name
// {
//     public:
//     bool operator()(Student s1, Student s2)
//     {
//     return s1.getname() < s2.getname();
//     }
// };

// int main()
// {
//     Student s1(29,"kuku","bca");
//     Student s2(39,"tuku","ba");
//     Student s3(99,"suku","mca");

//     priority_queue<Student ,vector<Student>, Name> pq1;

//     pq1.push(s1);
//     pq1.push(s2);
//     pq1.push(s3);

//     Student s4= pq1.top();
// s4.showdata();
//     return 0;
// }




//-----------------------------









// class Batsman
// {
// private:
//  int runs;
//  string name;
//  int hundreds;
// int fifties;  

//  public:
//  Batsman(int r, string n, int h, int f)
//  {
// runs = r;
// name=n;
// hundreds = h;
// fifties = f;  
//  }

//  Batsman()
//  {}
//     void  setruns(int r)
//     {
//         runs=r;
//     }
 
//     void setname(string n)
//     {
//         name=n;
//     }

//     void sethundreds(int h)
//     {
//         hundreds=h;
//     }

//     void setfifty(int f)
//     {
//         fifties=f;
//     }

//     int getruns()
//     {
//         return runs;
//     }
//  string getname()
//     {
//         return name;
//     }

//     int  gethundreds()
//     {
//         return hundreds;
//     }

//      int  getfifties()
//     {
//         return fifties;
//     }

//     void showdata()
//     {
//         cout<<"runs \n"<<runs<<endl;
//         cout<<"name is\n"<<name<<endl;
//         cout<<"hundreds\n"<<hundreds<<endl;
//          cout<<"fifties\n"<<fifties<<endl;
//     }
// };


// class runs
// {
//     public:
//     bool operator()(Batsman s1, Batsman s2)
//     {
//     return s1.getruns() < s2.getruns();
//     }
// };

// int main()
// {
//   Batsman s1(29,"kuku",40,90);
//     Batsman s2(39,"tuku",65,77);
//    Batsman s3(99,"suku",73,9);

//     priority_queue<Batsman ,vector<Batsman>, runs> pq1;

//     pq1.push(s1);
//     pq1.push(s2);
//     pq1.push(s3);

//     Batsman s4= pq1.top();
// s4.showdata();
//     return 0;
// }


//------------------------------










// class Batsman
// {
// private:
//  int runs;
//  string name;
//  int hundreds;
// int fifties;  

//  public:
//  Batsman(int r, string n, int h, int f)
//  {
// runs = r;
// name=n;
// hundreds = h;
// fifties = f;  
//  }

//  Batsman()
//  {}
//     void  setruns(int r)
//     {
//         runs=r;
//     }
 
//     void setname(string n)
//     {
//         name=n;
//     }

//     void sethundreds(int h)
//     {
//         hundreds=h;
//     }

//     void setfifty(int f)
//     {
//         fifties=f;
//     }

//     int getruns()
//     {
//         return runs;
//     }
//  string getname()
//     {
//         return name;
//     }

//     int  gethundreds()
//     {
//         return hundreds;
//     }

//      int  getfifties()
//     {
//         return fifties;
//     }

//     void showdata()
//     {
//         cout<<"runs \n"<<runs<<endl;
//         cout<<"name is\n"<<name<<endl;
//         cout<<"hundreds\n"<<hundreds<<endl;
//          cout<<"fifties\n"<<fifties<<endl;
//     }
// };


// class centuries
// {
//     public:
//     bool operator()(Batsman s1, Batsman s2)
//     {
//     return s1.gethundreds() < s2.gethundreds();
//     }
// };

// int main()
// {
//   Batsman s1(29,"kuku",40,90);
//     Batsman s2(39,"tuku",65,77);
//    Batsman s3(99,"suku",73,9);

//     priority_queue<Batsman ,vector<Batsman>, centuries> pq1;

//     pq1.push(s1);
//     pq1.push(s2);
//     pq1.push(s3);

//     Batsman s4= pq1.top();
// s4.showdata();
//     return 0;
// }


//----------------------------------------











// class Batsman
// {
// private:
//  int runs;
//  string name;
//  int hundreds;
// int fifties;  

//  public:
//  Batsman(int r, string n, int h, int f)
//  {
// runs = r;
// name=n;
// hundreds = h;
// fifties = f;  
//  }

//  Batsman()
//  {}
//     void  setruns(int r)
//     {
//         runs=r;
//     }
 
//     void setname(string n)
//     {
//         name=n;
//     }

//     void sethundreds(int h)
//     {
//         hundreds=h;
//     }

//     void setfifty(int f)
//     {
//         fifties=f;
//     }

//     int getruns()
//     {
//         return runs;
//     }
//  string getname()
//     {
//         return name;
//     }

//     int  gethundreds()
//     {
//         return hundreds;
//     }

//      int  getfifties()
//     {
//         return fifties;
//     }

//     void showdata()
//     {
//         cout<<"runs \n"<<runs<<endl;
//         cout<<"name is\n"<<name<<endl;
//         cout<<"hundreds\n"<<hundreds<<endl;
//          cout<<"fifties\n"<<fifties<<endl;
//     }
// };


// class fifties
// {
//     public:
//     bool operator()(Batsman s1, Batsman s2)
//     {
//     return s1.getfifties() < s2.getfifties();
//     }
// };

// int main()
// {
//   Batsman s1(29,"kuku",40,90);
//     Batsman s2(39,"tuku",65,77);
//    Batsman s3(99,"suku",73,9);

//     priority_queue<Batsman ,vector<Batsman>, fifties> pq1;

//     pq1.push(s1);
//     pq1.push(s2);
//     pq1.push(s3);

//     Batsman s4= pq1.top();
// s4.showdata();
//     return 0;
// }


//------------------------------------

