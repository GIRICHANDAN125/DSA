
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1="mandeep";
//     string s2;
//     s2="12345678";
//     string s3("kamalpreet");
//     cout<<s1<<endl<<s2<<endl<<s3<<endl;
//     string s4=s1+ " "+s2+" "+s3;
//     cout<<s4;
// }

///errase

// #include<iostream>
// using namespace std;
// int main(){
//     string s1="mandeep";
//     string s2 ="12345678";
//     s1.erase(2);////if insert (2,s2)
    
//     cout<<s1<<endl;
    
// }

///replace

// #include<iostream>
// using namespace std;
// int main(){
//     string s1="navneet";
//     string s2 ="12345678";
//     s1.replace(2,3,"aman");
    
//     cout<<s1<<endl;
    
// }
/// append
// #include<iostream>
// using namespace std;
// int main(){
//     string s1="navneet";
//     string s2 ="12345678";
//     s1.append(s2,0,5);
    
//     cout<<s1<<endl;
    
// }





// ////////size and length and max size and emptyand swap
// #include<iostream>
// using namespace std;
// int main(){
//     string s1="navneet";
//     string s2 ="12345678";
//     cout<<s1.size()<<endl;
    
//     cout<<s1.length()<<endl;
//     s1="nav";
//     cout<<s1.size()<<endl;
    
//     cout<<s1.length()<<endl;
//     cout<<s1.max_size()<<endl;
//     s1="";
//     cout<<s1.empty();
    // s1.swap(s2);
    // cout<<s1<<endl<<s2;
    
    
// }


// /// compare,
// #include<iostream>
// using namespace std;
// int main(){
//     string s1="navneet";/// if N o/p is -1
//     string s2 ="naveent";
//     cout<<s1.compare(s2);
// }




//// substr, find, rfind

// #include<iostream>
// using namespace std;
// int main(){
//     string s1="navneet";
//     string s2=s1.substr(2,3);
//     cout<<s2<<endl;
//     cout<<s1.find("et")<<endl;
//     cout<<s1.rfind("et")<<endl;
//     cout<<s1.find_first_of("na")<<endl;
//     cout<<s1.find_last_of("na")<<endl;

// }


////array notations
// #include<iostream>
// using namespace std;
// int main(){
//     int x[5]={1,2,3,4,5};
//     cout<<x[3]<<endl<<3[x]<<endl<<*(x+3)<<endl<<*(3+x)<<endl;
// }
#include<iostream>
using namespace std;
int main(){
    int x[5]={1,2,3,4,5};
    int *p;
    cout<<(x+3)<<endl;
    p=x;
    cout<<*(p+3);
}

